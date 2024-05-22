#include<stdio.h>
int tr(int n){
int count;
while(n>0){
n=n/5;
count=count+n;
}
return count;
}




int main() {

int x;
scanf("%d",&x);
int m=tr(x);
printf("%d",m);

return 0;
}
