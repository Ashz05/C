#include <stdio.h>


int main(){
    int myNum = 15; 
    int myOtherNum;
    myNum = 10;

    printf("%i",myNum);

    //you can even copy values into variables that we declared earlier 
    //without a value 

    myOtherNum = myNum; // all the primitives values are stored in  stack 
    myNum += 1; // so every copy of values has their own memory location 
    printf("\n%i", myOtherNum);

    //swap two variables;

    //lets say we have a and b 
    int a = 1; //for example a is in stack and the memory location is 0x00A
    int b = 2; 
    int c;  

    c = a;  // value of c would be 1 
    a = b;  // value of a would be 2 
    b = c;  // value of b would be 1 
    printf("\nvalue of a is %i", a);
    printf("\nvalue of b is %i", b);

    return 0 ;
}