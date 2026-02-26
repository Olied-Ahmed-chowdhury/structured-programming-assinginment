#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && b==c) {
        printf("equilateral\n");
    } else if (a==b || b==c || a==c) {
        printf("isosceles\n");
    } else {
        printf("scalene\n");
    }

    return 0;
}

