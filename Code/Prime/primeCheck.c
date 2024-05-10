#include"prime.h"
#include<stdio.h>

void primeNumbers(int n)
{
	int count;
	for (int i=1;i<=n;i++)
	{
		count=0;
		for (int j=1;j <=i;j++)
		{
			if (i%j==0)
				count++;
		}  
		if (count==2)
			printf(" %d",i);
	}
}
