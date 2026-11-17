#include <stdio.h>
//Assignment Operators 

int main(){
    int num1 = 1; 
    int num2;
    
    num1 = 1;
    printf("%d",num1);

    num2 += num1;
    printf("%d",num2);

    num2 -= num1; 
    printf("%d",num2);

    num2 *= num1; 
    printf("%d",num2);

    num2 /= num2;
    printf("%d",num2);

    num2 %= num1;
    print("%d",num2);

    return 0; 
}