#include <stdio.h>
int main() {
 float mark1, mark2, average;

 printf("Enter marks obtained in subject 1 :");
 scanf("%f", &mark1);
 printf("enter marks obtained in subject 2 :");
 scanf("%f", &mark2);

 average = (mark1+mark2) / 2;
 printf ("average mark : %0.2f\n", average);

 return 0;
}
