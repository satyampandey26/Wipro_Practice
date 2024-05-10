#include"bitnegator"
#include<stdio.h>

unsigned int setbit(unsigned int num, int n){
	return num | (1 << n);
} 

unsigned int resetbit(unsigned int num, int n){
	return num & ~(1 << n);
} 

unsigned int flipbit(unsigned int num, int n){
	return num ^ (1 << n);
} 

unsigned int setkthbit(unsigned int num, int n){
	return num | (1 << (n-1));
} 

unsigned int resetkthbit(unsigned int num, int n){
	return num & ~ (1 << (n-1));
} 

unsigned int flipkthbit(unsigned int num, int n){
	return num ^ (1 << (n-1));
} 

int main()
{
	unsigned int num=10;
	
	num = setbit(num,2);
	printf("Result %u\n",num);
	
	num = resetbit(num,3);
	printf("Result %u\n",num);
	
	num = flipbit(num,1);
	printf("Result %u\n",num);
	
	num = setkthbit(num,6);
	printf("Result %u\n",num);
	
	num = resetkthbit(num,5);
	printf("Result %u\n",num);
	
	num = flipkthbit(num,7);
	printf("Result %u\n",num);
	
	num = turnnegative(num);
	printf("Result %d\n",num);
	
	num = turnnpositive(num);
	printf("Result %d\n",num);
	
	
}
