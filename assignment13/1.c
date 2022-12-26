/*1. Write a recursive function to calculate sum of first N natural numbers*/
#include<stdio.h>
sum(int n)
{
    if(n==0)
    return 0;
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    sum(n);
    printf("sum=%d",sum(n));

}
