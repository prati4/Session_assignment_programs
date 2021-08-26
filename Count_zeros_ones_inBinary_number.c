//Wap to count zeros and one im binary number

#include<stdio.h>
void count_zero_ones(int N)
{
    int count0 = 0, count1 = 0;
 
    // Iterate through all the bits
    while (N > 0) {
 
        // If current bit is 1
        if (N & 1) {
            count1++;
        }
 
        // If current bit is 0
        else {
            count0++;
        }
 
        N = N >> 1;
    }
    printf("Count of 0s in N is %d\n", count0);
    printf("Count of 1s in N is %d\n", count1);
}
 
int main()
{   int num;
    printf("Enter the num\n");
    scanf("%d",&num);
    count_zero_ones(num);
    return 0;

}
