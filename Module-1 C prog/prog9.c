#include <stdio.h>

int areAllOnes(int a[], int n) {
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n, m, p;
    printf("Enter n, m, p : ");
    scanf("%d %d %d", &n, &m, &p);

    int a[n];
    int flag = 1;
    printf("Enter a[] : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            flag = 0;
        }
    }

    if (flag) {
        printf("100\n");
    }
    else {
        // check if first m elements are 1's
        for (int i = 0; i < m; i++) {
            if (a[i] == 0) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            printf("0\n");
        }
        else {
            printf("%d\n", p);
        }
    }





}