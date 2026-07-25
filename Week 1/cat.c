#include <stdio.h>

void meow(int n); //prototype
int get_n(void);

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
    printf("meowFunction END!\n\n");

    int num = get_n();
    meow(num);
}

//function to get the value of n
int get_n(void){
    int n;
    do{
        printf("What is the value of n?\n");
        scanf("%d", &n);
    }while (n < 0 || n == 0);

    return n;
}
//function to print meow n times
void meow(int n){
    for(int i = 0;i<n;i++){
        printf("meowFunction %d\n", i);
    }
}