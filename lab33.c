#include<stdio.h>
int main() {
int size;
int input;
int max;
int min;
scanf("%d",&size);
for(int i=2; i<=size; i++)
{
scanf("%d",&input);
if(input > max) {
	max=input;
}
else {
min=input; 
}
}
printf("%d", max);
printf("%d",min);
return 0;
}





