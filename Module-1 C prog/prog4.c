

#include <stdio.h>


struct Laptop {
    int wi;
    int hi;
    int pi;

};


int main() {

    int L = 5;
    int B = 10000;

    struct Laptop laptops[L];
    
    for (int i = 0; i < L; i++) {
        printf("Enter details of laptop-%d : ", i + 1);
        scanf("%d %d %d", &laptops[i].wi, &laptops[i].hi, &laptops[i].pi);
    }

    int area = -1;
    int price;
    for (int i = 0; i < L; i++) {
        if (laptops[i].pi <= B) {
            if (area < (laptops[i].hi * laptops[i].wi) ) {
                area = laptops[i].hi * laptops[i].wi;
                price = laptops[i].pi;
            }
            if (area == (laptops[i].hi * laptops[i].wi) && (price > laptops[i].pi)) {
                price = laptops[i].pi;
            }
        }
    }
    if (area == -1)
        printf("He cannot buy the Laptop");
    else {
        printf("He can buy the Laptop\n");
        printf("Area = %d\nHis Budget = %d\nPrice = %d\n", area, B, price);
    }
        

    return 0;


}