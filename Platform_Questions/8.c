#include <stdio.h>

int main() {
    int n, grade;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &grade);

        if (grade >= 38) {
            int next = ((grade / 5) + 1) * 5;

            if (next - grade < 3)
                grade = next;
        }

        printf("%d\n", grade);
    }

    return 0;
}