#include <stdio.h>

int main(){
    /* 
    Besides the basic data types(int, float, double, char)
    C also gives you extended keywords (short, long, unsigned) to control how large the number is or whether it can be negative*/

    short int shortInteger = 32768; // takes 2 bytes ranging from -32768 to 32767
    printf("%hd\n", shortInteger); 
    printf("Size of Unsigned: %zu\n", sizeof(shortInteger));
    
    unsigned int unsignedIntger = 65535; 
    printf("%u\n", unsignedIntger);
    printf("Size of Unsigned: %zu\n", sizeof(unsignedIntger));
    
    long int longInteger = 2147483647;
    printf("%li\n", longInteger);
    printf("Size of Long Integer: %zu\n", sizeof(longInteger));

    long long int longerInteger = 9223372036854775807;
    printf("%lli\n", longerInteger);
    printf("Size of Longer Integer: %zu\n", sizeof(longerInteger));

    unsigned long int  longUnsignedInteger = 4294967295;
    printf("%lu\n",longUnsignedInteger);
    printf("Size of Longer Integer: %zu\n", sizeof(longUnsignedInteger));


    unsigned long long int longerUnsignedInteger = 1844744073709551615;
    printf("%llu\n", longerUnsignedInteger);
    printf("Size of Longer Integer: %zu\n", sizeof(longerUnsignedInteger));


    //There is no long float instead we have decimal 
    long double longdecimal = 3.141592653589793;
    printf("%Lf", longdecimal);
    return 0;

    
}