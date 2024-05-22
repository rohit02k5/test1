nclude <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int productOfDigits(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int sumOfPrimes(int lower, int upper) {
    int sum = 0;
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int lower = sumOfDigits(num);
    int upper = productOfDigits(num);

    int result = sumOfPrimes(lower, upper);

    printf("Sum of prime numbers in the range [%d, %d] is: %d\n", lower, upper, result);

    return 0;
}
