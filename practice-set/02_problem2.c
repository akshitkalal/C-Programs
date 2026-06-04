#include <stdio.h>

int main() {

       int  length, breadth;
       
       printf(" enter length\n");
         scanf("%d", &length);//     practise code , error read and solve
       printf("enter breadth\n");
         scanf("%d",&breadth);
          
       int perimeter=2*(length+breadth);
      int area=length*breadth;
      
      printf("Area=%d\n",area);
       printf("perimeter=%d\n",perimeter);

printf("the area of thise ractegler %d",length*breadth);
           printf("tne parimeter of thise ractegler %d", 2* (length + breadth));

      return 0;
}