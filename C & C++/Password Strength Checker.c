// Password Strength Checker

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char password[100];
    int hasUpper=0;
    int hasLower=0;
    int hasDigit=0;
    int hasSpecial=0;

    printf("Enter password: ");
    scanf("%99s",password);

    int length=strlen(password);

    for(int i=0;i<length;i++){
        if(isupper((unsigned char)password[i])){
            hasUpper=1;
        }else if(islower((unsigned char)password[i])){
            hasLower=1;
        }else if(isdigit((unsigned char)password[i])){
            hasDigit=1;
        }else{
            hasSpecial=1;
        }
    }

    if(length<8){
        printf("Weak Password\n");
        printf("Reason: Password must contain at least 8 characters.\n");
    }else if(!hasUpper){
        printf("Weak Password\n");
        printf("Reason: Missing uppercase letter.\n");
    }else if(!hasLower){
        printf("Weak Password\n");
        printf("Reason: Missing lowercase letter.\n");
    }else if(!hasDigit){
        printf("Weak Password\n");
        printf("Reason: Missing digit.\n");
    }else if(!hasSpecial){
        printf("Weak Password\n");
        printf("Reason: Missing special character.\n");
    }else{
        printf("Strong Password\n");
    }

    return 0;
}