#include <stdio.h>

void main(){

    //4 zeros em binario eh 0
    unsigned char a = 0b11110000; //(unsigned para descartar o sinal que eh ditado pelo ultimo bit)
    unsigned char b = 0b11001100;
    unsigned char c = 0b1; 
    unsigned char r;
    
    
    r = a & b; // 0 e 1 eh 0, 0 e 0 eh 0, 1 e 0 eh 1, 1 e 1 eh 1 -> tabela verdade do &


    printf("%x ", a);
    printf("\n%x ", b);
    printf("\n%x ", r);

    r = a | b;
    printf("\n%x ", r); //1 ou 0 eh 1, 0 ou 0 eh 0 e 0 ou 1 eh 0 -> tabela verdade do |

    r = a ^ b;
    printf("\n%x ", r); //se igual eh 0 se difente eh 1 -> tabela verdade do shore 

    r = c << 1; //deslocamento -> deslocar x (1 nesse caso) bits para direita
    printf("\nr = %x ", r); //vai ficar 0b10 = 2
    r = c << 2; 
    printf("\nr = %x ", r); 
    r = c << 3; 
    printf("\nr = %x ", r); 
    
}