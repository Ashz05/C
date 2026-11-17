#include<stdio.h>
#include<stdbool.h>


int main(){
    bool isUser = false; 
    bool isAdmin = false; 
    int isSecurityLevel = 3;
    bool minSecurityLevel = isSecurityLevel >= 3; 

    if(isUser && (isAdmin && minSecurityLevel)){
        printf("Access Granted\nAlso has Admin Privileage");
    }
    else if (isUser && (!isAdmin && minSecurityLevel)){
        printf("Access Granted\nNormal User No Additional Privileages");
    }
    else{
        printf("Access Not Granted!");
    }
    return 0 ; 
}