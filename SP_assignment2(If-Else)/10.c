#include<stdio.h>
int main(){
int a;
printf("input a number : ");
scanf("%d",&a);
int b;
printf("input b number : ");
scanf("%d",&b);
int c;
printf("input c number : ");
scanf("%d",&c);
if(a>b && a>c){
    printf("bigger number is %d\n",a);
    }
else if (b>a && b>c) {
    printf("bigger number id %d",b);
}
else {
    printf("bigger number id %d",c);
     }
return 0;


}



