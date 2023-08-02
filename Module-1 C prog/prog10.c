#include <stdio.h>
int main() {
    int t;
    printf("Enter t : ");
    scanf("%d", &t);
    int a[9];
    int sum = 0;
    for (int i = 1; i <= 8; i++)
    {
        a[i] = -1;
    }
    while (t--) {
        int pi, si;
        printf("Enter pi and si : ");
        scanf("%d %d", &pi, &si);
        if (pi > 8 || pi < 1) continue;
        if (a[pi] == -1) {
            sum += si;
            a[pi] = si;
        }
        else {
            if (a[pi] < si) {
                sum -= a[pi];
                sum += si;
                a[pi] = si;
            }
        }
    }
    printf("max = %d\n", sum);
}