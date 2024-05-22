#include<stdio.h>
int insert(int arr[],int n,int x){
int m;
for(int i=0;i<n;i++){
if(arr[i]>x){
int m=i;
break;
}
}
return m;
}

int main(){
int n,x;
int arr[n];
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
scanf("%d",&x);
int t = insert(arr,n,x);
for(int i=0;i<t;i++){
printf("%d",arr[i]);
}
printf("%d",x);
for(int i=t;i<n;i++){
printf("%d",arr[i]);
}
return 0;
}
