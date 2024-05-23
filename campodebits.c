#include <stdio.h>

typedef union {
    struct {
        unsigned int mant : 23;
        unsigned int expo : 8;
        unsigned int sign : 1;
    } data; 
    float var;
} num_t;

#define signo num.data.sign
#define exponente num.data.expo
#define mantisa num.data.mant

float ingresar_num(num_t);
void ver_num (num_t);

int main () {
    num_t num;
    float n;
    n = ingresar_num(num);
    num.var = n;
    ver_num(num);
    return 0;
}

float ingresar_num(num_t num){
    float n;
printf("ingrese su numero ");
scanf("%f" , &n);
return n;
}

void ver_num(num_t num){
printf("Su numero quedaria  %x \n", num);
}
