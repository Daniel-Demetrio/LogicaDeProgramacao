#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int ano;
    int idade;

    printf("Insira seu ano de nascimento:");
    scanf("%d", &ano);

    idade = 2025 - ano;

    printf("Sua idade ao final de 2025 será: %d", idade);

    return 0;
}
