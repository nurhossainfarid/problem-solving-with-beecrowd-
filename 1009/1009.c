#include<stdio.h>

int main() {
    char name;
    double salary, selling, totalEarning;
    scanf("%s %lf %lf", &name, &salary, &selling);
    totalEarning = salary + selling * 0.15;
    printf("TOTAL = R$ %.2lf\n", totalEarning);
    return 0;
}