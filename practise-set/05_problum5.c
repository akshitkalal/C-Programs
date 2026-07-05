#include <stdio.h>

int main() {
    int year;
    
//     Year

// ↓
// 4 se divisible?
// │
// ├── No → Not Leap Year
// │
// └── Yes
//       ↓
//    100 se divisible?
//       │
//       ├── No → Leap Year
//       │
//       └── Yes
//             ↓
//          400 se divisible?
//             │
//             ├── Yes → Leap Year
//             └── No → Not Leap Year

    
    printf("enter year\n");
    scanf("%d", &year);
 if((year %4==0 && year %100!=0)|| year %400 ==0){
    printf("this is leap year\n");
 }
 else{
    printf("this is not a leap year\n");
 }
    return 0;
}