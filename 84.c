#include<stdio.h>
int low(int n){
int m = n%10;
int z= (n/10)%10;
int o= m+z;
return  o;
}
int up(int n){
int f=n%10;
int g= (n/10)%10;
int h= f*g;
return h;
}
 int sum(int n){
int isprime;
int k=low(n);
int s=0;
int y=up(n);
for(int i=k;i<y;i++){
for(int j=2;j<i;j++){
if((i%j) == 0){
isprime =0;
}
else{
isprime =1;
}

if((isprime)==1){
s=s+i;
}
}
}
return s;
}



int main() {
int u;
scanf("%d",&u);
int t = sum(u);
printf("%d",t);

return 0;
}
