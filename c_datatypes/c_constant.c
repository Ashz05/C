#include <stdio.h> 

int main(){ 
    /* you need variables that should not be changed 
    this can be done with const keyword, which makes a 
    variables unchangeable and read-only.
    */

    const int myNum = 15;
    myNum = 15; //error : assignment of read-only variable 
    printf("%i",myNum);
}