#include<stdio.h>
main(){
	printf("Enter two number");
	int a,b;
	scanf("%d%d",&a,&b);
	//scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d%d",a,b);
	//printf("%d",b);
}
