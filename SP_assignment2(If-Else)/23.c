
#include <stdio.h>
int main() {
    int number, reversed = 0, original,digit;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
   original = number;
   for(int i = 0; i<5;i++){
  digit = number%10;
  reversed= reversed * 10 + digit;
  number/=10;
   }
if (original == reversed){
    printf("palindrome\n");
}
else {
        printf("not palindrome");
}
    return 0;
}
