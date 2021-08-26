//Program to Remove All Occurrences of a Character in a String


#include <stdio.h>
#include <string.h>
 
int main()
{
  	char string[20], ch;
  	int i, l, j;
 
  	printf("Enter the String\n");
  	fgets(string,20,stdin);    
  	
  	printf("Enter the charecter that you want to remove\n");
  	scanf("%c", &ch);        
  	l = strlen(string);
	   	
   for(i=0;i<l;i++)        
	{
		if(string[i]==ch)   
		{
			for(j=i;j<l;j++)
			{
				string[j]=string[j+1];
			}
			l--;
			i--;	
		} 
	}	
	printf("The new string is  = %s ",  string);
	
  	return 0;
}
  



