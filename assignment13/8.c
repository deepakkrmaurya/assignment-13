/*8. Write a recursive function to print first N terms of Fibonacci series*/
#include<stdio.h>
    int sum(int n)
{
  if(n==1||n==2)
  return 1;
  return sum(n-1)+sum(n-2);
  
}
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    printf("%d ",sum(i));
    }
    return 0;
}
