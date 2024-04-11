#include <stdio.h>

int main()
{
    
    //variavel
    int num1, num2, num3;
    
    printf("Escreva o numero: ");
    scanf("%d", &num1);
    
    printf("Escreva o numero: ");
    scanf("%d", &num2);
    
    printf("Escreva o numero: ");
    scanf("%d", &num3);
    
    
    if(num1 < num2 && num1 < num3){
        printf("numero %d maior que %d e %d", num1, num2, num3);
    }
    else if(num2 < num3 && num2 < num1){
        printf("numero %d maior que %d e %d", num2, num3, num1);
    }
    else if(num3 < num1 && num3 < num2){
         printf("numero %d maior que %d e %d", num3, num1, num2);
    }
    else{
        printf("Todos são iguais");
    }
}

