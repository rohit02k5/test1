#include<stdio.h>
int main() {
int x;
int y;
int z=0;
scanf("%d",&x);
scanf("%d",&y);
for(int i=x;i<=y;i++) {
if(i%6==0) {
z=z+1;
}

}
printf("%d",z);


return 0;
}

