#include <stdio.h>
#include <stdlib.h>
int recursiva(int dato);
int main(int argc, const char * argv[]){
    int dato, resultado;
    scanf("%d", &dato);
    resultado=recursiva(dato);
    printf("%d", resultado);
    return 0;
}
int recursiva(int dato){
    if(dato<=5)
        return 1;
    else
        return 5*recursiva(dato-2);
}
