#include <stdio.h>

int main() {
    int arrivalTime, delayedTime;

    scanf("%d %d", &arrivalTime, &delayedTime);

    int result = (arrivalTime + delayedTime) % 24;

    printf("%d", result);

    return 0;
}