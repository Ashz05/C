#include <stdio.h>

int main(){
    /*
    The char Type
    The char data type is used to store a single character.

    The character must be surrounded by single quotes, like 'A' or 'c', 
    and we use the %c format specifier to print it:

    Alternatively, if you are familiar with ASCII (a standard that gives each character a number), 
    you can use ASCII values to display certain characters. Note that these values are not surrounded by quotes (''), as they are numbers:
    */
    char myGrade = 'A';
    char a = 65; 
    myGrade++;
    printf("%c",a);
    printf("%c",myGrade);
    return 0; 

    //Verify markdown file to check each character value of ASCII.

}