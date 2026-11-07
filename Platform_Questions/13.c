#include <stdio.h>

int main() {
    int num1, num2, count = 0;

    scanf("%d %d", &num1, &num2);

    while (num1 != 0 && num2 != 0) {

        if (num1 >= num2)
            num1 = num1 - num2;

        else
            num2 = num2 - num1;

        count++;
    }

    printf("%d", count);

    return 0;
}