#include <stdio.h>

int main() {
    int t, n, temp, count;

    scanf("%d", &t);

    while (t--) {

        scanf("%d", &n);

        temp = n;
        count = 0;

        while (temp > 0) {

            int digit = temp % 10;

            if (digit != 0 && n % digit == 0)
                count++;

            temp = temp / 10;
        }

        printf("%d\n", count);
    }

    return 0;
}