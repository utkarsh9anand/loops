#include<stdio.h>

int main()
{
	float marks;

	printf("Enter marks Obtained:-");
	scanf("%f", &marks);

	if(marks>=85)
	{
    	printf("Grade A");
	}
	else if(marks>=70)
	{
    	printf("Grade B");
	}
   	else if(marks>=55)
	{
    	printf("Grade C");
	}
   	else if(marks>=40)
	{
    	printf("Grade D");
	}
	else
	{
    	printf("Grade E");
	}

	return 0;
}
