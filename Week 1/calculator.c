#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x, y;
    printf("What is x?\n");
    scanf("%i", &x);
    printf("What is y?\n");
    scanf("%i", &y);

    int sum = x + y;
    printf("%i\n", sum);

    int dollars = 1;
    while (true){
        char c;
        printf("You have $%i dollars. Double it and give it to the next person? \n",dollars);
        scanf(" %c", &c); //figure out why a space was needed before the %c

        if( c == 'y' || c == 'Y'){
            dollars *=2;
        }
        else{
            break;
        }
    }

}