/*Write a C Program to calculate Electricity Bill
1 to 100 units – Rs. 10/- Per Unit
100 to 200 units – Rs. 15/- Per Unit
200 to 300 units – Rs. 20/- Per Unit
above 300 units – Rs. 25/- Per Unit
*/
#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit <= 100)
    {
        amt = unit * 10;
    }
    else if(unit <= 200)
    {
        amt = (100*10)+(unit-100)*15;
    }
    else if(unit <= 300)
    {
        amt = (100 * 10) + (100 * 15) + (unit - 200)  * 20; 
    }
    else
    {
        amt = (100 * 10) + (100 * 15) + (100 * 20) + (unit - 300)  * 25; 
    }
   

    printf("Electricity Bill = Rs. %.2f", amt);

    return 0;
}
