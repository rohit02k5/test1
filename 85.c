#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    if (num <= 3) {
        return 1; 
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; 
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; 
        }
    }
    return 1; 
}

int LowerBound(int a) {
    int sum = 0;

    while (a > 0) {
        sum += a % 10;
        a = a / 10;
    }

    return sum;
}

int UpperBound(int a) {
    int product = 1;

    while (a > 0) {
        product *= a % 10;
        a = a / 10;
    }

    return product;
}

int SumOfPrimes(int lower, int upper) {
    int sum = 0;

    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            sum += num;
        }
    }

    return sum;
}

int main() {
    int lower, upper;

    
    scanf("%d", &lower);
    
    scanf("%d", &upper);

    if (upper <= lower) {
        printf("Upper bound should be greater than the lower bound.\n");
        return 1;
    }

    int lowerSum = LowerBound(lower);
    int upperProduct = UpperBound(upper);

    int primeSum = SumOfPrimes(lowerSum, upperProduct);

    if (primeSum > 0) {
        printf(" %d\n", primeSum);
    } else {
        printf("There are no prime numbers in the range.\n");
    }

    return 0;
}
