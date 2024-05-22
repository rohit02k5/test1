#include<stdio.h>
int sum(int arr[][100],int n){
int s=0;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i==j){
s=s+arr[i][j];
}
}
}
int k=0;
int l=n-1;
while(k<n && l>=0){
if(k==l)
continue;
else{
s=s+arr[k][l];
++k;
--l;
}
}

return s;
}




int main(){
int n;
scanf("%d",&n);
int arr[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++){
printf("%d",arr[i][j]);
}
printf("\n");
}


int t=sum(arr,n);
printf("%d",t);

return 0;
}
