#include<stdio.h>
int main()
{
	float x,s=2,sum=0;
	int i=0;
	scanf("%f",&x);
	while(sum<x)
	{
		sum=sum+s;
		s=s*0.98;
		i++;
	}
	printf("%d",i);
 } 
