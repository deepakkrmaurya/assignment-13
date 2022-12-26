/*6. Write a recursive function to calculate factorial of a given number*/
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    fact(n);
    printf("factorial=%d",fact(n));

}
int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}