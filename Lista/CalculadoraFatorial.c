#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int num;
    int i;
    int j = 0;

    do{
    printf("Insira um número inteiro positivo para calcular seu fatorial: ");
    scanf("%d", &num);

    if(num < 0){
        printf("\nInsira um valor válido\n");
    }
    }

    while(num < 0);
    int mult = 1;
    if(num != 0){
    for(i = 1; i <= num; i++){
        if(i > 1){
        mult = mult * i;
        }
    }
    }
    else{
        if(num == 0){
            printf("0! = 1");
        }

    }
    if(num != 0){
        printf("%d! = %d", num, mult);
    }
    return 0;
}
