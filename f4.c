#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int runsum[n];
int sum=0;
int i=0;
for(int j=0;j<n;j++){
for(;i<=j;i++){
sum=sum+arr[i];
}
runsum[j]=sum;
}
for(int j=0;j<n;j++){
printf("%d ",runsum[j]);
}
return 0;
}
