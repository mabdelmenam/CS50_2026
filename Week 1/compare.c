#include <stdio.h> 

int main(void){
    int x;
    int y;
    printf("What is x?");
    scanf("%i", &x);

    printf("What is y?: ");
    scanf("%i", &y);

    printf("X is %i\n", x);
    printf("Y is %i\n", y);

    if( x > y ){
        printf("X is greater than Y. \n");
    }
    else if ( x < y ){
        printf("X is less than Y. \n");
    }
    else{
        printf("x and y are equal\n");
    }
}