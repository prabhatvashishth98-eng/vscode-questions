#include <stdio.h>

int main() {
    int n, temp, count = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {

        int digit = temp % 10;

        if (digit != 0 && n % digit == 0)
            count++;

        temp /= 10;
    }

    printf("%d", count);

    return 0;
}