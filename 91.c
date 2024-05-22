#include<stdio.h>
void low(int arr[][100], int n){
for(int i=0; i<n;i++){
for(int j=0;j<n;j++){

if(i>j){
arr[i][j]=0;
}
}
}
}


int main() {

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


low(arr,n);

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++){
printf("%d",arr[i][j]);
}
printf("\n");
}

return 0;
}
