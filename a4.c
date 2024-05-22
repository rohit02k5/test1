#include <stdio.h>
int fib(int n);
int main()
{
    int x;
    int t;
scanf("%d",&x);
t=fib(x);
printf("%d",t);
    return 0;
}
int fib(int n){
    if(n<=1)
    return 0;
    else if(n==2)
        return 1;
    else
 return fib(n-1)+fib(n-2);


    }
