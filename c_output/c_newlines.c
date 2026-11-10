#include <stdio.h>

int content(){
    printf("Hello World!\nI am learning C.\nAnd it is awesome!");
    printf("C is Compiled Language!\n\n"); // \n\n creates blank line.
    return 0; 
}

int pyramid(){
    printf("     *\n");
    printf("    ***\n");
    printf("   *****\n");
    printf("  *******\n");
}

int main(){
    content();
    printf("C Programming!\n\n"); //\n for new line 
    pyramid();
    return 0;
}

// /n is called escape sequence 

/*
Escape sequence start with a backslash and represent special characters that cannot be typed directly

in this case, \n tells the program to move the cursor to the beginning of the next line*/


//Draw a Pyramid
