#include<stdio.h>

int main() {
    int A, B, C, D, Difference;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    Difference = (A * B - C * D);
    printf("DIFERENCA = %d\n", Difference);
    return 0;
}