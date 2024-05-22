#include<stdio.h>
int rev(int n){
int f = n%10;
int p = (n/10)%10;
int d = ((f*10) + p);
return d;
}


int mag(int n){
int m=n%10;
int  z=(n/10) % 10;
int l= (n/100) %10;
int k=(n/1000) % 10;
int b=(z+l+k+m);
int y=rev(b);
int u= y*b;
if(u == n){
return 1;
}
else{
return 0;
}

}


int main() {

int v;
scanf("%d",&v);
int r= mag(v);
printf("%d",r);


return 0;
}
