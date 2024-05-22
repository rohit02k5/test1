#include<stdio.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(int j=0;j<n;j++){
    for(int i=0;i<n-1;i++)
    {
    if(a[i]>a[i+1]){
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;}
    
    }
    }
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);}
return 0;
}
