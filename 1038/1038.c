#include<stdio.h>

int main() {
    int X, Y;
    double total;
    scanf("%d %d", &X, &Y);
    switch (X)
    {
    case 1:
        printf("Total: R$ %.2lf\n", total = Y * 4.00);
        break;
    case 2:
        printf("Total: R$ %.2lf\n", total = Y * 4.50);
        break;
    case 3:
        printf("Total: R$ %.2lf\n", total = Y * 5.00);
        break;
    case 4:
        printf("Total: R$ %.2lf\n", total = Y * 2.00);
        break;
    case 5:
        printf("Total: R$ %.2lf\n", total = Y * 1.50);
        break;
    
    default:
        break;
    }

    return 0;
}