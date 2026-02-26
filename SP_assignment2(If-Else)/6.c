#include<stdio.h>
int main(){
int a;
printf("input a number : ");
scanf("%d",&a);
if(a%7==0 && a%8==0){
    printf("multiple by both 7 and 8");
    }
else {
    printf("not multiple by both");
     }
return 0;


}


