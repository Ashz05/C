#include <stdio.h>
/*
All C variables must be identified with unique names.
These unique names are called identifiers.
Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
*/
int minutePerHour = 60; 

int m = 60; 

/*
The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names
*/


int areaRectangle(){
    float length = 4.43;
    float width = 6.54;; 
    float area; 

    area = length * width;

    printf("\nArea of the Rectangle is: %f cm", area);
    return 0 ;
}

int main(){
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student ID: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);

    areaRectangle();


}
