#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float massa, altura, idade;
    int homem;

    printf("Insira, respectivamente, seu peso em kilogramas, sua altura em cent�metros e sua idade em anos: ");
    scanf("%f %f %f", &massa, &altura, &idade);
    printf("Se vo�� � homem, insira 0, se � mulher, insira 1: ");
    scanf("%d", &homem);

    if(homem == 0){
        printf("Sua taxa metab�lica basal � %f calorias", 66.47 + (13.75 * massa) + (5.003 * altura) - (6.755 * idade));
    }
    else{
        printf("Sua taxa metab�lica basal � %f calorias", 655.09 + (9.563 * massa) + (1.85 * altura) - (4.676 * idade));
    }




return 0;
}
