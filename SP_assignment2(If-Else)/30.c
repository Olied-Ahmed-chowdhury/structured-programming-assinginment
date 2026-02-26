#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the coordinates: ");
    scanf("%d %d", &x, &y);
    if (x>0 && y>0) {
        printf("First quadrant\n");
    }
    else if (x<0 && y>0) {
          printf("Second quadrant\n");
    }
    else if (x<0 && y<0) {
           printf("Third quadrant\n");
    }
    else if (x>0 && y<0) {
        printf("Fourth quadrant\n");
    }
        else if(x==0 && y==0){
            printf("origin");
        }
     else {
      printf("On an axis\n");}
return 0;
}
