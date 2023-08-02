#include <stdio.h>



int main() {


    int x;
    int y;
    printf("Enter x and y : ");
    scanf("%d %d", &x, &y);

    int odd = 1;
    int even = 2;
    while (! (x < odd && y < even) )
    {
        x = x - odd;
        y = y - even;  
        odd += 2;
        even += 2;  
    }
    if (x < 0) {
        printf("Bheem\n");
    }
    else if (y < 0) {
        printf("Ganesh\n");
    }
    else if (odd > even) {
        printf("Ganesh\n");
    }
    else if (even > odd) {
        printf("Bheem\n");
    }
    return 0;
}