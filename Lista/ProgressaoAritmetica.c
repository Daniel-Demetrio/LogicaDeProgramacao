#include <stdio.h>
#include<stdlib.h>
#include<math.h>
# include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    float a1, razao;
    int n;
    int i = 1;

    printf("Insira o primeiro termo de uma PA: ");
    scanf("%f", &a1);

    printf("\nInsira a razão dessa PA: ");
    scanf("%f", &razao);

    printf("\nQuantos termos dessa PA gostaria de calcular?: ");
    scanf("%d", &n);

    float sum = a1;

    printf("\nPA=(%.2f", a1);

    while(i < n){
    sum = sum + razao;
    printf("; %.2f",sum);
    i++;
    }

    printf(")");
    return 0;
}
