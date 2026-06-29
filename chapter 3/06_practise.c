#include <stdio.h>

int main() {
    int a=1, b=2, c=3;
    
 scanf("%d %d %d", &a, &b,&c);   
// printf("the value of a is %d and the value of b is %d and the value of c is %d\n",a&&b&&c);
printf("the value of a is %d and the value of b is %d and the value of c is %d\n",a,b,c);

printf("a=%d\n b=%d\n c=%d\n result=%d\n", a, b, c, a&&b&&c);
/*
3 %d hain lekin sirf 1 argument (a&&b&&c) diya hai.
Pehla %d 0 ya 1 print karega.
Baaki %d ke liye value nahi milegi,
isliye garbage values print ho sakti hain.
*/

/*Garbage value isliye nahi aati kyunki result 0 ya 1 hai.

Garbage value isliye aati hai kyunki
%d zyada hain aur arguments kam hain.
*/

    return 0;
}