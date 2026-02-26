#include<stdio.h>
int main(){
char ch;
printf("enter a english letter : ");
scanf("%c",&ch);
if (ch >='A' && ch <='Z'){
    printf("upprecase\n");
}
     else if (ch>='a' && ch<='z'){
        printf("lowercase");
     }
     else {
        printf("not an english letter");
     }
return 0;


}



