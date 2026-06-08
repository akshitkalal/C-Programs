#include <stdio.h>

int main() {
  int a=47;
  float b=87.8;

  a=(int)b; 
  //type casting converts the float value of b to an integer and assigns it to a
    printf(" %d\n",a);
     // it will print 87 because the decimal part is truncated when converting to an integer

    return 0;
}      
//  In this code, we have an integer variable 'a' and a float variable 'b'. We perform type casting by converting the float value of 'b' to an integer and
// assigning it to 'a'. The output will be 87 because the decimal part of the float value is truncated when converting to an integer.