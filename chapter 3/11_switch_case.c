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
// hamne yaha per break mka use kiya H usse kya hot h na ki jese a= 4 likhta hui to 4 hi exesucate hoga.
 //268 or bhi kuch bhi nahi exesucate hoga. agr break na likhu tro sabhi aayega  2468 sab kuch exesucat hoga .

 }

    return 0;
}