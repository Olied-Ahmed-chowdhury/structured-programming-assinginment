#include <stdio.h>
int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if (marks<40) {
        printf("failed\n");
    } else {
        printf("passed\n");
    }

    return 0;
}

