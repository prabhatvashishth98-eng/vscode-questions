#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = n / 2 + 1;

    for(int i = 1; i <= n; i++) {

        int stars;

        if(i <= mid)
            stars = i;
        else
            stars = n - i + 1;

        for(int j = 1; j <= stars; j++) {
            printf("*");
        }

        for(int j = 1; j <= 2*(mid-stars)+1; j++) {
            printf(" ");
        }

        for(int j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}