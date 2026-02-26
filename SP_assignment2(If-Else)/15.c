#include<stdio.h>
int main(){
char ch;
printf("enter a alphabet : ");
scanf("%c",&ch);
if ((ch>='a' && ch<='z') || (ch >='A' && ch <='Z')){
    printf("alphabet\n");
}
     else if (ch>='0'&& ch<='9'){
        printf("digit");
     }
     else {
        printf("spacial character");
     }
return 0;


}




