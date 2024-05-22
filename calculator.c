#include<stdio.h>
int main() {
int choice;
int a,b;
scanf("%d", &choice);
scanf("%d %d", &a,&b);
switch(choice)
 {
case 1:  printf("%d", a+b);
         break;
case 2:  printf("%d", a-b);
         break;
case 3: printf("%d",a*b);
        break;
case 4: printf("%d", a/b);
break; 
}
return 0;
 
}
