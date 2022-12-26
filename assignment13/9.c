/*9. Write a program in C to count the digits of a given number using recursion.*/
// #include<stdio.h>
// int count(int n)
// {  
//     static int  c=0;
//        if(n==0)
//         return c ;
//         else
//         c++;
//     count(n/10);
// }
// int main()
// {
//     int n;
//     printf("inter thr number");
//     scanf("%d",&n);
    
//     printf("count=%d",count(n));

//     return 0;
// }
#include<stdio.h>
int count(int n ,int c)
{  
     
       if(n==0)
        return c ;
        else
        
        
    count(n/10,c+1);
}
int main()
{  
    int n;
    printf("inter thr number");
    scanf("%d",&n);
    
    printf("count=%d",count(n,0));
    return 0;
}