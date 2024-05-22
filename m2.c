#include <stdio.h>
void prt(int arr[], int size);
int gcd(int a, int b);
void lr(int arr[], int d, int n)
{
    int i, j, k, t;
    d = d % n;
    int _gcd = gcd(d, n);
    for (i = 0; i < _gcd; i++) {

        t = arr[i];
        j = i;
        while (1) {
            k = j + d;
            if (k >= n)
                k = k - n;
         
   if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = t;
    }
}

void prt(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int arr[100] ;
int x;
scanf("%d",&x);
for(int i=0;i<x;i++){
scanf("%d",&arr[i]);
}
int z;
scanf("%d",&z);
    lr(arr, z, x);
    prt(arr, x);
    
    return 0;
}











