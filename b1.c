#include<stdio.h>
int sumeven(int n);
int sumodd(int n);
int main(){
  int x;
  scanf("%d",&x);
  int t;
  t= sumeven(x);
  printf("The sum of even numbers is :%d \n",t);
  printf("The sum of odd numbers is :%d \n",sumodd(x));
  return 0;
}




int sumeven(int n){
    if(n%2 == 0){
        
    if(n<=0)
    return 0;
    
    else
     
    return  sumeven(n-2)+ n;
    }
    
    else{
             
    if(n<=0)
    return 0;
    
    else
    return sumeven(n-3)+ n-1;
    
    }
}


int sumodd(int n){
    if(n%2 == 0){
        if(n<=0)
        return 0;
        else
        return sumodd(n-3)+n-1;
    }
    else{
        if(n<=0){
            return 0;
        }
        else 
        return sumodd(n-2)+n;
    }
}
