#include <stdio.h>
void Pattern(int n) {
    int i, j, k;
for (i = 1; i <= n; i++) {
        for (j = n - i; j >= 1; j--) {
            printf("  ");
        }k = 9;
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", k);
            k--;

            if (k == 0)
                k = 9;
        } printf("\n");
    }for (i = n - 1; i >= 1; i--) {
        for (j = n - i; j >= 1; j--) {
            printf("  ");
        } k = 9;
        for (j = 1; j <= 2 * i - 1; j++) {
 printf("%d ", k);
            k--;

            if (k == 0)
                k = 9;
        }
printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);

    Pattern(n);

}
