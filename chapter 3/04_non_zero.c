#include <stdio.h>

int main() {
    if(1){
        printf("this if is executed\n");
    }
        if(12432){
        printf("this if is also executed\n");
    }
    if(-125){
        printf("this if is also executed\n");
    }
    if(1.546){
        printf("this if is also executed\n");
    }
    if('a'){
        printf("this  if is alsoo executed\n");

    }
    if(0){
        printf("i am zero  i am not executed\n");
    }
//isme 0 ke alawa sabhi if execute honge kyuki c me 0 ko false aur non zero ko true mana jata hai
    return 0;
}