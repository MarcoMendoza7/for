#include <stdio.h>

//ESCRIBA UN PROGRAMA QUE RECIBA UN NUMERO N DEL USUARIO Y HAGA LA SUMA DE TODOS LOS NUMEROS DESDE 1 HASTA N 

int main (){
    int numero;
    int i;
    int operacion = 0;
    puts("Ingrese un numero cualquiera");
    scanf("%d", &numero);
    for(i=1; i<=numero; i++){
        operacion = operacion + i;
        printf("%d + ", i);
        printf("\n = %d", operacion);
    }
}