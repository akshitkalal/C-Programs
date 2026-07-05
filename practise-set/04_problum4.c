#include <stdio.h>

int main()
{

    int income;
    float tax = 0;
    printf("enter income\n");
    scanf("%d", &income);
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = 0.05f * (income - 250000);
    }
    else if (income <= 1000000)
    {
        tax = 0.05f * 250000 + 0.2f * (income - 500000);
    }
    else if(income<=12000000)
    {
        tax = 0.05f * 250000 + 0.2f * 500000 + 0.3f * (income-1000000);
    }
    else{
        tax = 0.05f * 250000+0.02f *500000+0.3f*1000000+0.5f*(income-12000000);
    }

    printf("total tax you need to pay is  %.2f", tax);
    return 0;
}