#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost,tip,tax,totalCost;
    scanf("%lf %lf %lf",&mealCost,&tip,&tax);
    tip=mealCost*(tip/100);
    tax=mealCost*(tax/100);
    totalCost=mealCost+tip+tax;
    printf("The total meal cost is %.0lf dollars.\n",totalCost);
    return 0;
}
