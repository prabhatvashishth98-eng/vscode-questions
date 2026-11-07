#include <stdio.h>

int main() {
    int n, original, reverse = 0;

    scanf("%d", &n);

    original = n;

    while (n > 0) {

        int digit = n % 10;

        reverse = reverse * 10 + digit;

        n = n / 10;
    }

    if (original == reverse)
        printf("true");

    else
        printf("false");

    return 0;
}