#include <stdio.h>

int main()
{
    int unit;
    float amt, totalamt, surpcharge;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        amt = unit * 1;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 2);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 2.5);
    }
    else
    {
        amt = 220 + ((unit-250) * 3);
    }
    surpcharge = amt * 2;
    totalamt  = amt + surpcharge;
    printf("Electricity Bill = Rs. %.2f", totalamt);
    return 0;
}