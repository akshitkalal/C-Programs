#include <stdio.h>

int main() {
    int age = 25;

    if(age > 54){
        printf("you are a adult and you can drive ");
    }
    else if (age < 45 || age > 84){
        printf("you are a vallid and you can drive");
    }
    else if(age < 24){
        printf("you can drive");
    }
    else{
        printf("your age is invalid and you cannot drive");
    }

    return 0;
}