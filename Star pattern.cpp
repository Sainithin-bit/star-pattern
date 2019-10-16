#include<stdio.h>
int main()
{
	int i,j,k,t=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			t=t+1;
		
		printf("%d ",t);
		}
		printf("\n");
		
	}
	return 0;
}
