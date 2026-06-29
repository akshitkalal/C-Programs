#include <stdio.h>

int main() {
    int a=5; int b=10; int c=2; 
    
    
    printf("the value of a is  %d\n",a&&b);//isme jo hamari condition h wo dono saahi honi  chaiye  true hoga to 1 print
    // karega warna 0 print karega. ise kehte and operator.
    printf(" the value of b is %d\n",a||b);
    // isme dono me se koi bhi ek true hoga to ye true hoga to 1 print karega warna 0 print karega. ise kehte h or operator.
    
    printf(" the value of (c ) not is %d\n",!c);
    // agar c ki value non-zero hoti to !c ka result 0 hota.

if(a && b && c){
    printf("both are true\n");
}

// humne yaha dono condition use ki h kaam dono ka same h  && isme dono nonzero hoga to true hoga . 
//or tab kaam aata h jab saari condition ekk saath chake kerni hoto 

if(a){
    if(b){
        if(c){        //ise kehte h nested if  ye kaam tab aata h jab hame ek condition ke andar dusri condition check kerni ho.
            printf("all are true");
        }
        
    }
}
// Isme pehle if(a) check hoga.
// Agar a true hua tabhi andar wala if(b) check hoga.
// Agar a false hua to program andar jayega hi nahi aur if(b) check nahi hoga.
    return 0;
}  