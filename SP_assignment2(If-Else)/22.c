
#include <stdio.h>

#include <stdio.h>

int main() {
    int month, year, days;
    printf("Enter month number (1-12) and year: ");
    scanf("%d %d", &month, &year);
    if (month == 2) {
        days = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    else {
        days = 31;
    }
    printf("Number of days: %d\n", days);

    return 0;
}
