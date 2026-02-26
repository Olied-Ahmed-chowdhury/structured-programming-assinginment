#include <stdio.h>

int main() {
    float temperature;
    char scale;
    printf("Enter temperature and scale (C/F): ");
    scanf("%f %c", &temperature, &scale);
    if (scale =='C') {
        printf("Temperature in Fahrenheit: %.2f\n",temperature*9/5+32);
} else if (scale =='F') {
        printf("Temperature in Celsius: %.2f\n",(temperature-32)*5/9);
       } else {
        printf("Invalid scale\n");
}

    return 0;
}

