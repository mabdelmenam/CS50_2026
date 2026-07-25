#include <stdio.h>

void meow(int n); //prototype

int main(void){
    int i;

    for(i = 0; i < 3;i++){
        printf("meow\n");
    }
    printf("Done For Loop\n");

    int x = 0; 
    while(x < 3){
        x++;
        printf("meowWhile\n");
    }
    printf("Done While Loop\n\n");

    int z; 
    do{
        printf("What is z?");
        scanf("%d", &z);
    }while (z<0 || z == 0);
    
    for(int i = 0; i < z; i++){
        printf("N Iteration: %d\n", i);
    }

    meow(10);
}

void meow(int n){
    for(int i = 0;i<n;i++){
        printf("meowFunction %d\n", i);
    }
}