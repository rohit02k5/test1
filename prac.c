#include<stdio.h>
int   main() 
{
int  choice;
int x,y;
scanf("%d",&choice);
scanf("%d",&x,&y);
switch(choice) {
case 1: printf("%d",x+y);
break;
case 2: printf("%d", x-y);
break;
case 3: printf("%d", x*y);
break;
case 4: printf("%d" , x/y);
break;
default: printf(" stupid");
break;
 }
return 0;
}
