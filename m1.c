#include<stdio.h>
#include<string.h>
int anchec(char str1[], char str2[]){
int l1= strlen(str1);
int l2= strlen(str2);
if(l1  != l2 )
    return 0;
else if(l1 == l2){
   for(int i=0;i<l1;i++){
      for(int j=0;j<l2;j++){
         if(str1[i]==str2[j])
             str2[j]= 2;

           else
               continue;
          }
}
}

for(int j=0;j<l2;){
if(str2[j]==2)
j++;

else{
return 0;
break;
}
}




}
int main() {
char str1[100];
char str2[100];
scanf("%s",str1);
scanf("%s",str2);
int t= anchec(str1,str2);
if(t==0)
printf("no");
else 
printf("yes");

return 0;
}
