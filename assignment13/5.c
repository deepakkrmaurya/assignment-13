/*5. Write a recursive function to calculate sum of digits of a given number*/
#include<stdio.h>
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10+sum(n/10));
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