/*2. Write a recursive function to calculate sum of first N odd natural numbers*/
#include<stdio.h>
sum(int n)
{
    if(n==1)
    return 1;
    return 2*n-1+sum(n-1);
}
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    sum(n);
    printf("sum=%d",sum(n));

    return 0;
}