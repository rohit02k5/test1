#include<stdio.h>
int rev(int n,int r){
if(n==0)
return r;
else{
r= r*10 + n%10;

return rev((n/10), r);
}
}

int main() {
int x;
scanf("%d",&x);
int t;

t= rev(x,0);
if( x== t){
printf("palindrome");
}
else 
printf("not a palindrome");



return 0;
}
