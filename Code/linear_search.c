#include<stdio.h>

void printArray(int arr[],int num, int size){
	for (int i=0;i<size;i++)
	{
		if (arr[i]==num)
			printf("\n The number is on: %d",i);
	}

}



int main()
{
	int arr[]={8,4,5,6,3,2,1,7,9};
	int size=sizeof(arr)/sizeof(int);
	int num;
	printf("\n Enter the number you want to search \n");
	scanf("%d",&num);
	printArray(arr,num,size);
	return 0;
}

