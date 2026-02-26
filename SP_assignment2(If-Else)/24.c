
#include <stdio.h>
int main() {
    int num, count = 0, digit;
    printf("Enter a 5-digit integer: ");
    scanf("%d", &num);
    while (num!= 0) {
  digit = num % 10;
    if (digit % 2 != 0) {
            count++;
}
        num /= 10;
}
printf("Number of odd digits: %d\n", count);

    return 0;
}
