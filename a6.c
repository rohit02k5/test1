
#include <stdio.h>
int prime(int n, int i);
int main()
{
   int x;
   scanf("%d",&x);
   int t= prime(x,2);
   if(t==1)
   printf("prime");
   else
   printf("not");

    return 0;
}
int prime(int n, int i){
    if(n==2)
    return 1;
    else if((n%i) == 0)
    return 0;
    else if(
        i*i >n) {
        return 1;
    }
    else
    return prime(n, i+1);
}
