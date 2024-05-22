#include<stdio.h>
int rev(int n, int b);

int main() {
    int x;
    scanf("%d",&x);
   int t= rev(x,0);
   if(t==x){
       printf("pal");
   }
   else
   printf("not");
    
    return 0;
}
int rev(int n, int b){
    if(n==0)
    return b;
    else{
        b=b*10 + n%10;
        return rev(n/10,b);
    }
}
