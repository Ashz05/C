#include <stdio.h>

int main(){
    //Arithmetic operators
    int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1

int z = 5;
++z;
printf("%d\n", z); // 6
--z;
printf("%d\n", z); // 5

//Prefix and Postfix 
//let's consider 2 values 
int a,b; 
a = 1; 
// b = ++a; //increment a by 1 and then assign a to b 
b = a++; //assign b to a and then increment a by 1; 

printf("Value a: %d\nValue b: %d\n",a,b);
}