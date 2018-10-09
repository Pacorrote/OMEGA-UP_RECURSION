#include <stdio.h>
int mcm(int m, int n);
int main(int argc, const char * argv[]){
    int m,n, resultado;
    scanf("%d %d", &m,&n);
    if (n > m){
        resultado = mcm(n,m);
    } else {
        resultado = mcm(m,n);
    }
    printf("%d", resultado);
    return 0;
}
int mcm(int m, int n) {
    if (n == 0) return m;
    return mcm(n, m%n);
}
