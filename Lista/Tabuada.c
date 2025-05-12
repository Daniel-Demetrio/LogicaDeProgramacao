#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int tab;
    int mult = 1;
    int i;

    printf("Digite um número inteiro para ver sua tabuada: ");
    scanf("%d", &tab);

        for(i = 1; i = 10; i++){
        printf("%03d * %2d = %3d\n", tab, mult, tab*mult);
        mult = mult +1;
    }


return 0;
}
