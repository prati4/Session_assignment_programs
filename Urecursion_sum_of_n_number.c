//Write a C program to find sum of all natural numbers between 1 to n using recursion

#include<stdio.h>
int sumOfNumber(int num)
{    int sum;
    
    if(num>0)
    {
	  return (num+sumOfNumber(num-1));
	}
	 else 
	 return 0;
}
int main()
{   
 int num,sum;
	printf("Enter the Number\n");
	scanf("%d",&num);
   sum=sumOfNumber(num);
	printf("The sum is %d", sum);
}
