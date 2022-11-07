#include<stdio.h>

int main() {
    int number, hour;
    float price, salary;
    scanf("%d", &number); 
    scanf("%d", &hour); 
    scanf("%f", &price);
    salary = hour * price;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
}