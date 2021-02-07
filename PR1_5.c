#include <stdio.h>
int main() {
 int number1,number2,number3,number4,number5,sum;
 printf("Enter five integer values ");
 scanf("%d %d %d %d %d",&number1, &number2, &number3, &number4, &number5);
 sum=number1 + number2 + number3 + number4 + number5 ;
 printf("sum of the five integer value is %d",sum);
 return 0;
}