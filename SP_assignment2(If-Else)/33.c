#include<stdio.h>
int main(){
float bill,unit;
printf("enter the total unit: ");
scanf("%f",&unit);

if(unit<=100){
    bill = unit *10;
}
 else if (unit<=300){
    bill = 100 * 10+(unit-100)*15;
 }
  else {
    bill = 100*10+ 200*15 +(unit-300)*20;
  }
if (bill>2000){
    bill += bill * 0.10;
}
printf("total bill: %f\n", bill);
return 0;






}
