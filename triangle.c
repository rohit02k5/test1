#include<stdio.h>
 int main() {
int a,b,c;
scanf("%d %d %d", &a , &b , &c);
if (( a+b) >c && ( b+c) >a && ( c+a) >b)
 {
printf (" the sides of a triangle  are  valid" );
}
else {
printf("not vaild");
}
return 0;
}
