#include <stdio.h>

int main() {
    int a=4;
    int b=8;
    int c=16;
    int i=24;
    printf ("the value of %d",a*b/i+c);// sabse pahle solve hoga a*b kyoki iski priority jyada h 
    
    // 4*8=32     quotient=32/24=1     remainder=1%16=1
    // 4*8=32/
    printf (" th value of %d\n", a*c/b%i); // isme LHS use hota h
    // isme a*c pehle solve hoga kyoki iski priority jyada h uske baad b se divide hoga aur uske baad %i se mod hoga
    // 4*16=64     quotient=64/8=8     remainder=8%24=8
    
    // 64/8=8
    // 8%24=8

    printf("the value of x*y/z=(x*y)/z is: %d", (10*20)/5);
    // x=10
    // y=20
    // z=5
    // 10*20/5=(10*20)/5=200/5=40
    
       return 0;
}