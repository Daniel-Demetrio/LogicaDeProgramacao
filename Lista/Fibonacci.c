#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int a = 1;
    int b = 0;
    int c;
    int n;
    int i;
    do{
    printf("Insira um número n inteiro e positivo para ver n números da Sequência de Fibonacci: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("\nInsira um valor válido\n");
    }
    }
    while(n<=0);
    for(i= 1; i <= n; i++){
        printf("\n%2d- %5d", i, a);
        c = a;
        a = a + b;
        b = c;
    }
    return 0;
}
