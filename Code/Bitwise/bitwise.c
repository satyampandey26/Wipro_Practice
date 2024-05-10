
#include <stdio.h>

#include <math.h>



//Bitwise operators compares the values of 2 operands bitwise

//nth bit of each operand

// Bitwise AND-> & -> returns bit =1 at nth position only if nth bith of both are set, otherwise nth bit = 0

// Bitwise OR-> | -> returns bit = 0 at nth position only if nth bit of both operands are 0, 1 otherwise

//Bitwise ^ (XOR) -> returns bit = 1 at nth position only if the nth bits of both operands are different, otherwise 0

//Bitwise Left Shift << n -> left shifts the value in binary by n (padding it by 0s)

//Bitwise Right Shift >>n -> right shifts the value in binary by n

//Bitwise NOT ~ ->negates each bit


void printAllBitsOfNum(signed int num)

{

 int power = 31;

 for(; power>=0 ; power--)

 {

   //Bitwise & returns true if the operand bit is set

   //If bit index pow(2, power) is set it returns true

   if(num&((int)pow(2,power)))

   {

     printf("1");

   }

   else

   {

     printf("0");

   }

    

 }

}


void printAllBitsOfChar(signed char ch)

{

 int power = 8;

 for(; power>=0 ; power--)

 {

   //Bitwise & returns true if the operand bit is set

   //If bit index pow(2, power) is set it returns true

   if(ch&((int)pow(2,power)))

   {

     printf("1");

   }

   else

   {

     printf("0");

   }

    

 }


}




int main() {

  // Write C code here

  printf("Try programiz.pro");

  //Test bitwise operator

  unsigned char ch1, ch2, result;

  int n;

  printf("\n Enter two character values :");

  scanf("%c %c", &ch1, &ch2);

	printf("\n Enter any positive integer value n :");

	scanf("%d",&n);

   

  printf("\n The bit representation of %c : \n",ch1);

  printAllBitsOfChar(ch1);

   

  printf("\n The bit representation of %c : \n",ch2);

  printAllBitsOfChar(ch2);

   

  result = ch1&ch2;

  printf("\n (Testing Bitwise AND) ch1&ch2, result = %c, binary form : \n", result);

  printAllBitsOfChar(result);

   

  result = ch1|ch2;

  printf("\n (Testing Bitwise OR) ch1|ch2 result = %c, binary form : \n", result);

  printAllBitsOfChar(result);

   

  result = ch1^ch2;

  printf("\n (Testing Bitwise XOR) ch1^ch2 result = %c, binary form : \n", result);

  printAllBitsOfChar(result);

   

  result = ch1<<n;

  printf("\n (Testing Bitwise Left Shift) ch1<<%d result = %c, binary form : \n",n, result);

  printAllBitsOfChar(result);

	

	result = ch1>>n;

  printf("\n (Testing Bitwise Right Shift) ch1>>%d result = %c, binary form : \n",n, result);

  printAllBitsOfChar(result);

   

	result = ch2<<n;

  printf("\n (Testing Bitwise Left Shift) ch2<<%d result = %c, binary form : \n",n, result);

  printAllBitsOfChar(result);

	

	result = ch2>>n;

  printf("\n (Testing Bitwise Right Shift) ch2>>%d result = %c, binary form : \n",n, result);

  printAllBitsOfChar(result);

	

	result = ~ch1;

	printf("\n (Testing Bitwise NOT) ~ch1 result = %c, binary form : \n", result);

  printAllBitsOfChar(result);

	

	result = ~ch2;

	printf("\n (Testing Bitwise NOT) ~ch2 result = %c, binary form : \n", result);

  printAllBitsOfChar(result);

	

	

  return 0;

}
