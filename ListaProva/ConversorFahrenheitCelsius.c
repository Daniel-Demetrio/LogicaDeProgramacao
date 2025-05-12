#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    float graus;
    int i;

    printf("Insira uma temperatura em graus Fahrenheit ou Celsius: ");
    scanf("%f", &graus);
    printf("\nSe a temperatura está em Fahrenheit, digite 1; se está em Celsius, digite 0:");
    scanf("%d", &i);

    if (i == 0){
        printf("Essa temperatura em Graus Fahrenheit = %.2f", (graus*1.8) + 32);
    }
    else{
        if(i == 1){
            printf("Essa temperatura em Graus Celsius = %.2f", (graus - 32)/1.8);
        }
    }
    return 0;
}
