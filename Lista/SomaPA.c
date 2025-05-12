#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float a3, razao;
int n;
int i = 1;

printf("Insira o terceiro termo de uma PA: ");
scanf("%f", &a3);
printf("\nInsira a razão: ");
scanf("%f", &razao);
printf("\nQuantos termos dessa PA deseja calcular?(>3): ");
scanf("%d", &n);

float a1;
a1 = a3 - (2*razao);

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
