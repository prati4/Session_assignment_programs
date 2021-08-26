//Wap to return return mutiple value from function using pointer

#include<stdio.h>
void area_circumference(int r, float *a, float *c)
{

	*a=3.14*r*r;
	*c=2*3.14*r;
	
}
int main()
{
	int radius; 
	float area,circumference;
	printf("Enter the radius");
	scanf("%d",&radius);
	area_circumference(radius, &area, &circumference);
	printf("The area is %f\n",area);
	printf("The circumference is %f\n",circumference);
	return 0;
}
