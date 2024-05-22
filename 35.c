#include<stdio.h>
int main() {
int  m=0,n;

scanf("%d",&n);
int c;
scanf("%d",&c);
for (int i=n;i <c;i++)
{
int a=0;
for(int  j=1;  j<=1;j++) {
if((i%j)==0)
{
a=a+1;
}
}
if (a==2) {
printf("%d",i);
m=n+1;
}
}
return 0;
}

