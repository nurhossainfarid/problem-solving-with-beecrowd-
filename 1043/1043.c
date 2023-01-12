#include<stdio.h>

int main() {
    float a, b, c;
    double perimeter, area;
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        perimeter = a + b + c;
        printf("Perimetro = %.1lf\n", perimeter);
    } else {
        area = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}