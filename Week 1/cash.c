/*Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents,*/
#include <stdio.h>

int calculate_coins(int cents);
int main(void){
    int cents = 0;
    while( cents < 0 || cents == 0 ){
        printf("Change owed:");
        scanf("%i", &cents);
    }

    int final_Change = 0;
    printf("Cents: %i\n", cents);
    printf("Coin Amount: %i\n", calculate_coins(cents));
}

int calculate_coins(int cents){
    int sum = 0;
    int saved_Cents = cents;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0; 

    while( cents >= 25 ){
        cents-=25;
        quarters++;
    }
    sum+=quarters;
    //cents = saved_Cents - (quarters * 25);
    saved_Cents = cents;
    while( cents >= 10 ){
        cents-=10;
        dimes++;
    }
    sum+=dimes;
    //cents = saved_Cents - (dimes * 10);
    while ( cents >= 5 ){
        cents-=5;
        nickels++;
    }
    sum+=nickels;
    while ( cents >= 1 ){
        cents -=1;
        pennies++;
    }
    sum+=pennies;
    return sum;
}