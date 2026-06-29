#include <stdio.h>
int main(){
    int a=76; 
    if(a>87){
        printf(" you can drive and you ere a old men \n");
    }
    else if(a<0){
        printf("you cannot  drive ,invallid age\n");
    }
else if(a<18){
        printf("you cannot drive becouse you are a child \n");
    }

    else{
        printf(" you  can  drive  and you are adult \n");
    }
     if (a>18 && a<60){
        printf("you are adult you can drive \n");
     }
    return 0;
}