#include<stdio.h>
#include<stdlib.h>
int rev(int n,int r){
if(n==0)
return r;
else{
r= r*10 + n%10;

return rev((n/10), r);
}
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







int prime(int n, int i){
if (n==2)
return 1;
else if( n%i == 0)
return 0;
else if( i*i>n)
return 1;

else 
return prime(n,i+1);
}



int fib(int n){
if(n<=1)
return 0;
else if(n==2)
return 1;
else
return fib(n-1)+fib(n-2);
}


int main() {

int  m;
printf("choice number");
scanf("%d", &m);
int x;
printf("Enter number");
scanf("%d",&x);
int t;
int z;
switch(m){
case 1: 

t = rev(x,0);
if( x== t){
printf("palindrome");
}
else
printf("not a palindrome");

break;


case 2:   printf("%d",fact(x));

break;


case 3: t= prime(x,2);
if(t==1)
printf("prime");
else
printf("not prime");
 break;

case 4: int z  = fib(x);
printf("%d",z);
 break;


case 0: exit(0);
break;
}

return 0;
}




















