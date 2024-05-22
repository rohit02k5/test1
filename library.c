#include<stdio.h>
int main() {
int x;
scanf("%d",&x);
if (x<=5) {
printf("%f",x*(0.5));
}
else if (x>5 && x<=10) {
printf("%f", 2.5+(x-5)*1);
}
else if (x>10 && x<=30) {
printf("%f",7.5+(x-10)*5);
}
else if ( x>30) {
printf("the  membership is cancelled");
}
 



return 0;

}
