#include<stdio.h>

//The else if statement to specify a new condition to test if the first condition is false 
//you can use else if to check multiple conditions, one another 
int main(){
    int time = 16;

    if(time < 12){
        printf("Good Morning!");
    }
    else if(time >= 12 && time <= 1){
        printf("Good AfterNoon!");
    }
    else if(time > 14 && time <= 20){
        printf("Good Evening!");
    }
    else{
        printf("Good Night!");
    }
}