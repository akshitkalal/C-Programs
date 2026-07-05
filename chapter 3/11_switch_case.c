#include <stdio.h>

int main() {
 int a;
 printf("enter a:");
 scanf("%d",& a);
 switch (a){
    case 2:
    printf("your ineterd 2\n");
    break;
    case 4:
    printf("your ineterd 4 \n");
    break;
    case 6:
    printf("your ineterd 6 \n");
    break;
    case 8:
    printf("your ineterd 8 \n");
    break;
    default:
    printf("all are rong");
// break is used to exit the switch statement.
// If a = 4, only case 4 will execute and then the switch will stop.
// If break is not used, execution continues to the next cases until the switch ends.

 }

    return 0;
}