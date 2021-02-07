#include <stdio.h>
int main() {
 double fine =0.20;
 int n;

 printf ("Enter the number of days late");
 scanf("%d", &n);
 fine = 0.20*n;
 printf("total fine=%f" , fine);

 return 0;
}
