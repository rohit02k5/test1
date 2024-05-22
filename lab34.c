#include<stdio.h>
int main() {
int num,isprime=1;
scanf("%d",&num);
if(num<2)
{
printf("not prime");
}
else{
for (int i=2;i<num;i++) {
if ((num)%i==0){
isprime=0;
break;
}
}

}
if(isprime==0) {
printf("not a prime");

}
else{
printf("prime");
}

return 0;
}
