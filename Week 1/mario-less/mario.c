#include <stdio.h>

int main(void){
    int height = 0;

    while(height == 0 || height < 1 || height > 8){
        printf("Height: ");
        scanf("%i", &height);
    }

    int dots = height;
    for(int i = 1;i <= height; i++){
        dots--;
        printf("%*s", dots, "");
        for(int j = 1; j<= i;j++ ){
            printf("#");
        }
        printf("\n");
    }
}
