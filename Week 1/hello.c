#include <stdio.h> 

int main(void)
{
    char name[25];
    printf("Whats your name?");
    scanf("%s", name);

    int age; 
    printf("How old are you?");
    scanf("%d", &age);


    printf("Hello %s, You're %d years old.\n", name,age);
}