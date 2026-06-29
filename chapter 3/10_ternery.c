#include <stdio.h>

int main() {
    int a =7868;
    int b = 7864958;
    //(condition) ? expression_if_true : expression_if_false;
    a < b ?printf("a is grater"): printf("b is grater");

     int akshit = (a >= b) ? a : b;
    a=7;
    b=7;
     // isme condition true hogi 

 akshit = (a > b) ? a : b;

// isme condition false hogi yaha pucha h ki a grater then b but yaha dono me num same h esiliye false . 

    return 0;
}
// Condition true  → ? ke pahle wala part
// Condition false → : ke baad wala part