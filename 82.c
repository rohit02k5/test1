#include<stdio.h>
int  dtb(int n){
int count=0;
while(n>0){
if((n%2)==1){
count++;
}
n=(n/2);
}
return count;
}

int ones(int n){
int o=dtb(n);
return o;
}



int main() {
int m;
scanf("%d",&m);
int z=ones(m);
printf("%d",z);


return 0;
}
