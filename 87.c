#include <stdio.h>
int is_prime(int n)
{
if (n <= 1) {
return 0;
}
for (int i = 2; i * i <= n; i++) {
if (n % i == 0) {
return 0;
}
}
return 1;
}
int LowerBound(int a)
{
int sum = 0;
while (a > 0) {
sum += a % 10;
a /= 10;
}
return sum;
}
int UpperBound(int a)
{
int product = 1;
while (a > 0) {
product *= a % 10;
a /= 10;
}
return product;
}
int SumOfPrime(int lower, int upper)
{
int sum = 0;
for (int i = lower; i <= upper; i++) {
if (is_prime(i)) {
sum += i;
}
}
return sum;
}
int main()
{
int n, lower, upper, result;

scanf("%d", &n);
lower = LowerBound(n);
upper = UpperBound(n);
result = SumOfPrime(lower, upper);
printf("%d\n",result);
return 0;
}
