#include <stdio.h>
#include "media.h"

int main()
{
    float num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    
    printf("A média dos três números é: %.2f\n", media(num1, num2, num3));
    return 0;
}
