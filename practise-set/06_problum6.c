#include <stdio.h>

int main() {
    char ch = 's';
//     A - Z  → 65 - 90 both are ascii values.
// a - z  → 97 - 122
// 0 - 9  → 48 - 57
// Space  → 32
    printf("the character is %c\n", ch);
    printf("the value of the character is %d\n", ch);
    if (ch>=65&&ch<=90)
    {
        printf("the character is an uppercase letter\n");
    }
    else if (ch>=97&&ch<=122)
    {
        printf("the character is a lowercase letter\n");
    }
    else
    {
        printf("the character is not a letter\n");
    }
    

    return 0;
}