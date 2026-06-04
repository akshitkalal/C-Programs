#include <stdio.h>

int main() {
   int  a =9; 
    int b = 7;   
    float h= 8;
    printf ("%f \n",(float)a/b);        //ye ekk type conversion h 
    printf ("the value of %d",a/b);
   // printf ("%f \n",(float)(a%b*h)); // 

   // printf ("%f \n",(float)(a,b*h)); // yaha per coma oprater use ho reha h 
   // printf ("%f \n",(float)(a/b*h));
    /*an arethmatic operation between float float   float hota h 
     int  int   int hota h
    int  float  float hota h 
     type conversion me 
     ex 
     int k =3.0/9 isme k kya hoga 
     k is 0.333333 but 
     k is integer 
     k=0 hoga kyoki yah dimotion ho jaayega . ke baad waale nomber ko int hata deta h float hota to ans kuch esa hota h k=0.33333*/
                                        
    
    return 0;
}  