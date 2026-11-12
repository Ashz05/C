#include <stdio.h>


//Numberic Types 

/*
Use int when you need to store a whole number without decimals
like 35 or 1000 and float or double when yoou need a floating number(with decimals)
like 9.99 or 3.1412
*/

/*
float vs. double

The precision of a floating point value tells how many digits it can store correctly, 
counting the digits both before and after the decimal point. 
The precision of float is about six or seven digits, 
while double variables have a precision of about 15 digits. 
Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).


*/
int main(){
    int myint = 1000;
    double myfloat = 5.75;

    
    printf("%d\n", myint);
    printf("%d\n",myfloat);

    float precisionFloat = 1234567.89;
    double precisionDouble = 1234567.89;

    printf("%f\n",precisionFloat);
    printf("%lf\n",precisionDouble); 

    //The float could not store the number exactly, so the last digits are wrong. The double stores it correctly.

    //Scientific Numbers 
    
    /*
    In C, You can write very large or very small floating point numbers 
    using scientificc notation 
    
    this is done using the letter e (or E) which stands for "times 10 to the power of".

    for example, 35e3 means 35 x 10^3 = 35000;
    */
   float f1 = 35e3; //e -> exponential standard is 10 , the correponding number is how many 10s to be multiplied.
   double d1 = 12E4;

   printf("%f\n",f1);
   printf("%lf\n",d1);

    //Decimal Precision;
    /*If you want to remove the extra zeros (set decimal precision), you can use a dot (.) 
    followed by a number that specifies how many digits that should be shown after the decimal point:*/

    float f2 = 1.2314;
    printf("%.1f\n",f2);
    printf("%.2f\n",f2);
    printf("%.3f\n",f2);
    printf("%.0f\n",f2);


    return 0;


}

