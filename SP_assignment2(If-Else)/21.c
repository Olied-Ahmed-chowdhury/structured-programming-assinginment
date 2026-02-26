
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks>=0 && marks<=39) {
        printf("Grade F\n");
    }
    else if (marks>=40 && marks<=59) {
        printf("Grade C\n");
    }
     else if (marks>=60 && marks<=69) {
        printf("Grade B\n");
    }
    else if (marks >= 70 && marks <= 79) {
        printf("Grade A\n");
    }
     else if (marks >= 80 && marks <= 100) {
        printf("Grade A+\n");
    }
    else {
        printf("Invalid\n");
    }

    return 0;
}
