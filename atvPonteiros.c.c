
#include <stdio.h>

int main()
{
    int a = 2022;
    int *p = &a;
    
    int b = 202202;
    int *p2 = &b;
    
    
    if (p > p2){
        printf("O maior endereço é a variavel com resultado: %d endereço: %p",a, p);
    } else{
        printf("O maior endereço é a variavel com resultado: %d endereço: %p",b, p2);
    }

    return 0;
}
