 #include<stdio.h>
#include<math.h>
int main() {
int x;
scanf("%d",&x);
int y;
int z;
scanf("%d",&y);
for (int i=0;i<=y;i++) {
z=pow(x,i);
printf("%d ",z);
}

return 0;
}
