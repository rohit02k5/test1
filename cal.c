#include<stdio.h>
int main() {
int sym;
scanf("%d",&sym);

int x,y;
scanf("%d %d", &x , &y);

switch(sym) {
case1:
printf("%d",x+y);
break;
case2: 
printf("%d",x-y);
break;
case3: 
printf("%d", x*y);
break;
case4: 
printf("%d", x/y);
break;

default : printf("WRONG");
}

return 0;
}
