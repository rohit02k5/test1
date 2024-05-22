#include <stdio.h>
int fact(int n);
int main()
{
    int x;
    int t;
scanf("%d",&x);
t=fact(x);
printf("%d",t);
    return 0;
}
int fact(int n){
    if(n==0)
    return 1;
    int f;
    f=fact(n-1)*n;
    return f;
}
