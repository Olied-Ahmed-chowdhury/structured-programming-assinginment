#include<stdio.h>
int main(){
int age;
char sex;
printf("enter age and sex (M/F): ");
scanf("%d %c",&age,&sex);

if (sex=='M'&& age>=21){
    printf("eligible for marry\n");
}
     else  if (sex=='F' && age>=18) {
        printf(" eligible for marry");
     }
     else{
        printf("not eligible for marry");
     }
return 0;


}



