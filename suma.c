#include <stdio.h>

unsigned int suma (unsigned int, unsigned int);//tipo de variable

int main(void){
    unsigned int resultado, var1=0, var2=0; //inicializar y nombrar

    printf("ingrese el primer numero a sumar");
    scanf("%d", &var1);

    printf("ingrese segundo numero a sumar");
    scanf("%d", &var2);
    
    resultado=suma(var1,var2);
    printf("%i", resultado);
    return 0;
}
unsigned int suma (unsigned int var1, unsigned int var2){
    return(var1+var2);
}
