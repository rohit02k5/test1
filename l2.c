#include<stdio.h>

int fact(int n);


int main() {
int x;
scanf("%d",&x);
printf("%d",fact(x));


return 0;
}
int fact(int n){
if(n==0)
return 1;

else{
int f;
f=fact(n-1)*n;

return f;
}
}

