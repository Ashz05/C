#include <stdio.h>

int main(){
    //int 2 or 4 bytes 
    int intNum = 4; 
    printf("%i\n",intNum);

    //float of 4 bytes 
    float floatNum = 4.5; 
    printf("%.2f\n",floatNum);\
    
    //double of 8 bytes 
    double decimalNum = 44.12341251;
    printf("%lf\n",decimalNum);

    //Character of 1 byte
    char character = 'A';
    printf("%c\n", character);

    printf("The Size of Integer is: %zu\n",sizeof(intNum));
    printf("The Size of Floating point is: %zu\n",sizeof(floatNum));
    printf("The Size of Decimal point is: %zu\n",sizeof(decimalNum));
    printf("The Size of the Character is: %zu\n", sizeof(character));

    return 0; 
    

}