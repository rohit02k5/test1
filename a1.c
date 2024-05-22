#include <stdio.h>
void prt(int n);
int main()
{
    int x;
scanf("%d",&x);
prt(x);
    return 0;
}
void prt(int n){
    if(n>0){
    prt(n-1);

    printf("%d",n);

    }
    }
