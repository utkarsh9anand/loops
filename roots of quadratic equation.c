#include<stdio.h>
#include<math.h>
int main() {
   float a,b,c;
   float root1;
   float root2;
   root1=(-b+sqrt(b*b-4*a*c))/2*a;
   root2=(-b-sqrt(b*b-4*a*c))/2*a;
   scanf("%f %f %f",a,b,c);
   printf("%f +f",root1,root2);

   return 0; 
}
