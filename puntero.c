#include <stdio.h>

int main(void){
    char var;
    printf("ingrese el numero que quiere ver : ");
    scanf("%c", &var);
    char *pchar=&var; //& muestra donde se guarda la variable *muestra el contenido de la variable
    printf("el lugar donde se guardo su variable en la memoria es : %d\n", &pchar); 
    printf(" el numero que eligiste es : %c", var); // %c pq es un char

}
