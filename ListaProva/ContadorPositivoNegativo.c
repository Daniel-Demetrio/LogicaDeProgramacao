#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero;
    int pos = 0;
    int neg = 0;

    do{
        printf("Insira um número inteiro (zero para terminar a entrada):");
        scanf("%d", &numero);
        if (numero != 0 && numero > 0){
            pos++;
            printf("\n");
        }
        else{
            if (numero != 0 && numero < 0){
                neg++;
                printf("\n");
            }
        }

    }
    while(numero != 0);
    printf("Foram inseridos %d números positivos e %d números negativos", pos, neg);
    if(neg > pos){
        printf("\nForam inseridos mais números negativos que positivos");
    }
    else{
        if(pos > neg){
            printf("\nForam inseridos mais números positivos que negativos");
        }
        else{
            printf("\nA quantiade de números negativos e positivos inseridos foi igual");
        }
    }
    return 0;
}
