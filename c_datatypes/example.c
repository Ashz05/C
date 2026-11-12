#include <stdio.h>

int main(){
    int items; 
    float cost_per_items;
    float total_cost; 
    char currency; 

    items = 50; 
    cost_per_items = 9.99; 
    total_cost = items * cost_per_items; 
    currency = '$';

    printf("Number of Items: %i\n", items);
    printf("Cost Per Items is: %.2f %c\n", cost_per_items, currency);
    printf("Total Cost: %.2f %c\n", total_cost, currency);
}