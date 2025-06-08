#include <stdio.h>
#include <math.h>

int main(){
    int x=0,y=0;

    printf("Ingrese a: ");
    scanf("%i",&x);
    printf("Ingrese b: ");
    scanf("%i",&y);

    int xAbs = x + abs(sqrt((pow(x,2))+pow(y,2))); //Re(w) + |w|
    int raiz = abs(sqrt((2*xAbs))); //Parte inferior

    x = xAbs/raiz; //Divide Re(w) + |w| con la parte inferior
    y /= raiz; //Divide bi con la parte inferior
    
    printf("El resultado es igual a x1= %i + %ii \n",x,y);
    printf("y a x2= -%i - %ii",x,y);

    return 0;
}