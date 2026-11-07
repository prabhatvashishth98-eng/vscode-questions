#include <stdio.h>

int main() {
    int mainTank, additionalTank;

    scanf("%d %d", &mainTank, &additionalTank);

    int used = mainTank / 5;

    if (used > additionalTank) {
        used = additionalTank;
    }

    int totalFuel = mainTank + used;

    printf("%d", totalFuel * 10);

    return 0;
}