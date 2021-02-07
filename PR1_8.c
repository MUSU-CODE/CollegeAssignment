#include <stdio.h>
void main(){

 float markedcost,discount,discountprice,soldcost;

 markedcost=29.90;
 discount=0.15;

 discountprice= markedcost*discount;

 soldcost=markedcost-discount;

 printf("selling price of the shirt is Rs=%f",soldcost);


 return 0;
}