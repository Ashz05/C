#include<stdio.h>


int main(){
    int a,b,c; 
    a = 1200; 
    b = 3333; 
    c = 500; 

    //AND (&&)
    if(a > b && a > c){
        printf("Value of a is the Greatest: %d\n", a);
    }
    else if(b > a && b > c){
        printf("Value of b is the Greatest: %d\n", b);
    }
    else{
        printf("Value if c is the Greatest: %d\n", c);
    }

    //OR (||)
    int x = 200;
    int y = 33;
    int z = 500;

    if (x > y || x > z) {
        printf("At least one condition is true\n");
    }

    //NOT (!)
    int e = 33;
    int f = 200;

    if (!(e > f)) { 
    printf("e is NOT greater than f\n");
}


    return 0; 

}