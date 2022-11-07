#include<stdio.h>

int main() {
    double A, B, C, average;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    average = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);
    printf("MEDIA = %.1lf\n", average);
    return 0;
}