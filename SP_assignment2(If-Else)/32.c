#include <stdio.h>
int main() {
    float weight,height;
    printf("Enter your weight(in kg) and height(in meters): ");
    scanf("%f %f", &weight, &height);
    float bmi = weight/(height * height);
    printf("BMI = %.2f\n", bmi);
    if (bmi<18.5) {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi<=24.9) {
        printf("Category: Normal weight\n");
    }
    else if (bmi >= 25 && bmi<=29.9) {
        printf("Category: Overweight\n");
    }
     else {
        printf("Category: Obese\n");
    }

    return 0;
}
