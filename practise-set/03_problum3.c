#include <stdio.h>

int main() {
    int  marks1, marks2, marks3, marks4;
    printf("enterd marks 1\n");
    scanf("%d",&marks1);
    printf("enterd marks 2\n");
    scanf("%d",&marks2);
    printf("enterd marks 3\n");
    scanf("%d",&marks3);
    printf("enterd marks 4\n");
    scanf("%d",&marks4);
     printf (" the marks are %d %d and %d" , marks1 ,marks2,marks3,marks4);
     
     if (marks1<3||marks2<3||marks3<3||marks4<33){
        printf("you are faild your marks is less then 33\n ");
     }
     else if ((marks1+marks2+marks3+marks4)/4<40){
        printf("you are faild deu less percentage\n");
     }
     else 
     printf("you are passed");
     



    return 0;
}