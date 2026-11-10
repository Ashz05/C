#include <stdio.h>
int printer(){
    printf("Welcome!\n");
    printf('This is C Programming!');// Error Run-time error;
    return 0; 
}

int main(){
    printer();
    printf("Hello World!");
    return 0; 
}

/*
Double Quotes

When you want to print text, the text must be wrapped in double quotes "".
if you forget the double quotes, an error occurs 
*/

