int wAbs (int x,int y){
    int z = 0; 
    z = x + sqrt((pow(x,2))+pow(y,2));

    return z;
} 

int wRaiz(int xAbs){
    int z = 0;
    z = sqrt((2*xAbs));

    return z;
}

int main(){
    int x=0,y=0;

    printf("Ingrese a:");
    scanf("%i",&x);
    printf("Ingrese b:");
    scanf("%i",&y);

    int xAbs = wAbs(x,y);
    int raiz = wRaiz(xAbs);

    x = xAbs/raiz;
    y /=raiz;
    printf("El resultado es igual a x1= %i + %ii \n",x,y);
    printf("y a x2= -%i - %ii",x,y);

    return 0;
}