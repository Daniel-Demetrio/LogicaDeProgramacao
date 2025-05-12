#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, C;

    printf("Insira três valores diferentes:");
    scanf("%f %f %f", &A, &B, &C);

    if(A >= B && A >= B && B >= C){
        printf("Em ordem crescente: %.2f; %.2f; %.2f",C,B,A);
    }
    else{
        if(A >= B && A >= C && C >= B){
            printf("Em ordem crescente: %.2f; %.2f; %.2f",B,C,A);
        }
        else{
            if(B >= A && B >= C && A >= C){
                printf("Em ordem crescente: %.2f; %.2f; %.2f",C,A,B);
            }
            else{
                if(B >= A && B >= C && C >= A){
                    printf("Em ordem crescente: %.2f; %.2f; %.2f",A,C,B);
                }
                else{
                    if(C >= A && C >= B && B >= A){
                        printf("Em ordem crescente: %.2f; %.2f; %.2f",A,B,C);
                    }
                    else{
                        if(C >= A && C >= B && A >= B){
                            printf("Em ordem crescente: %.2f; %.2f; %.2f",B,A,C);
                        }
                    }
                }
            }
        }
    }





return 0;
}
