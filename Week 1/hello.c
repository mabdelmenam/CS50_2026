#include <stdio.h> 

int main(void)
{
    char name[25];
    printf("Whats your name?");
    scanf("%s", name);

    printf("Hello %s, how are you doing?\n", name);
}