#include <stdio.h>




int main() {

    int a, b, c, x, y;
    printf("Enter a,b,c,x,y : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

    if (a + b <= x && c <= y) {
        printf("Yes\n");
    }
    else if (a + c <= x && b <= y) {
        printf("Yes\n");
    }
    else if (b + c <= x && a <= y) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

}

