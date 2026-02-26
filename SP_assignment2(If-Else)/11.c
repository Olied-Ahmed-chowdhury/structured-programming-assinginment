#include<stdio.h>
int main(){
int cost_price;
printf("input cost price : ");
scanf("%d",&cost_price);
int selling_price;
printf("input selling price : ");
scanf("%d",&selling_price);
if(selling_price>cost_price){
    printf("profit of %d\n",selling_price - cost_price);
    }
else if (selling_price<cost_price){
    printf("loss of %d",cost_price - selling_price);
     }
     else {
        printf("no profit no loss");
     }
return 0;


}



