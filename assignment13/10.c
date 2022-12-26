/*10. Write a program in C to calculate the power of any number using recursion.*/
#include<stdio.h>
int sum(int n,int m)
{
    if(m==1)
    return n;
    return n*sum(n,m-1);
}


    
 int main()
{
    int n,m;
    printf("inter the number");
    scanf("%d%d",&n,&m);
    
    printf("sum=%d",sum(n,m));
    return 0;
}