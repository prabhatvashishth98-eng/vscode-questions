#include <stdio.h>

int main() {
    int L, W, H;

    scanf("%d", &L);
    scanf("%d %d", &W, &H);

    if (W < L || H < L)
        printf("UPLOAD ANOTHER");

    else if (W == H)
        printf("ACCEPTED");

    else
        printf("CROP IT");

    return 0;
}