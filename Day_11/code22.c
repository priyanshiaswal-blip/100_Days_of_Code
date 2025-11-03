#include <stdio.h>
int main()
{
    float CP, SP, profit, loss, profit_percentage, loss_percentage;
    
    //input the cost price and selling price
    printf("Enter the cost price and selling price: ");
    scanf("%f %f", &CP, &SP);

    //calculates the result
    profit = SP-CP;
    loss = CP-SP;

    profit_percentage = (profit / CP) * 100;
    loss_percentage = (loss / CP) * 100;

    //prints the result
    if(SP > CP)
    {
        printf("Profit\n");
        printf("Profit percentage = %.0f %%", profit_percentage);
    }

    else if(SP < CP)
    {
        printf("Loss\n");
        printf("Loss percenatge = %.0f %%", loss_percentage);
    }

    else
    {
        printf("It is neither Profit nor Loss.");
    }

    return 0;

}
