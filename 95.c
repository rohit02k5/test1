#include<stdio.h>
#include<string.h>
int main() {
char s[100];
scanf("%s",s);
int n= strlen(s);

int arr[100];
int x;
scanf("%d",&x);
for(int i=0;i<x;i++){
scanf("%d",&arr[i]);
}
int i=0;
int j=0;
while(i<(n) && j<x){
s[i]=s[arr[j]];
++i;
++j;
}
s[n-1]='\0';

printf("%s",s);

return 0;
}
