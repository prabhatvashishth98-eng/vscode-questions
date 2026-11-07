#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    long long reverse = 0;

    scanf("%d", &n);

    while (n != 0) {

        int digit = n % 10;

        reverse = reverse * 10 + digit;

        n = n / 10;
    }

    if (reverse > INT_MAX || reverse < INT_MIN)
        printf("0");

    else
        printf("%lld", reverse);

    return 0;
}