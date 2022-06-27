#include<stdio.h>
void main()
{
	int a=0,b=1,c,n;
	printf("enter the number you want\n");
	scanf("%d",&n);
	printf("the fibinocci serise are \n");
 	printf("%d %d",a,b);
	c=a+b;
	while(c<n)
	{
	c=a+b;
	a=b;
	b=c;
	printf(" %d",c);
	}
	printf("\n");
}	
