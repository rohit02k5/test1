#include<stdio.h>
void swap(int *a,int *b){
int t;
t=*a;
*a = *b;
*b =t;
}

int main() {
int x,y,z;

scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
swap(&y,&z);
swap(&x,&y);
printf("%d %d %d",x,y,z);
return 0;
}

