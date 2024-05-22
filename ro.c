#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
int  x1,x2,y1,y2,r1,r2;

scanf("%d %d %d %d %d %d",&x1, &x2 , &y1, &y2, &r1 , &r2);
int z= x1-x2;
int l=y1-y2;
int m=pow(z,2);
int n=pow(l,2);
int o=m+n;
float d=sqrt(o);
if (d==(r1+r2) || d==abs(r1-r2)) {
printf("the circles touch eachother ");
}
else {
printf("the circles dont  touch");
 }
return 0;
}



