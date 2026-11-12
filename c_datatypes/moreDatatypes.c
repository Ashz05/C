#include <stdio.h>

int main(){
    /* 
    Besides the basic data types(int, float, double, char)
    C also gives you extended keywords (short, long, unsigned) to control how large the number is or whether it can be negative*/

    short int shortInteger = 32769; // takes 2 bytes ranging from -32768 to 32767
    printf("%hd\n", shortInteger); 

    unsigned int unsignedIntger = 65535; 
    printf("%u\n", unsignedIntger);
    printf("Size of Unsigned: %zu", sizeof(unsignedIntger));
}