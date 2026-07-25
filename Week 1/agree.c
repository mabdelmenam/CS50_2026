#include <stdio.h>

int main(void){

    char c;
    printf("Do you agree to the terms and conditions: \n");
    scanf("%c", &c);

    if(c == 'y' || c == 'Y'){
        printf("User agrees\n");
    }
    else if( c == 'n' || c == 'N'){
        printf("User does not agree\n");
    }
}