
#include <stdio.h>
int main() {
    int angle1,angle2,angle3;
    printf("Enter the three angles of a triangle: ");
    scanf("%d %d %d", &angle1,&angle2,&angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("valid triangle\n");
    }
     else {
        printf("invalid triangle\n");
    }
    return 0;
}
