#include <stdio.h>

int main() {
    int a = 671, b = 256, c = 670, d = 445;

    if (a > b && a > c && a > d) {
        printf(" the largest number%d\n",a);
    }
    else if (b > a && b > c && b > d) {
        printf(" the largest number%d\n",b);
    }
    else if (c > a && c > b && c > d) {
        printf(" the largest number%d\n",c);
    }
    else if (d > a && d > b && d > c) {
        printf("the largest number%d\n", d);
    }
    else {
        printf("the largest number\n");
    }

    return 0;
}