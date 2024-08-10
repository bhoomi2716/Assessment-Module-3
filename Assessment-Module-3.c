#include <stdio.h>
void main()
{
    int confoirm = '1';
    int amount=0;
    while (confoirm)
    {
        
        printf("--------- Menu ---------");
        printf(" \n 1. Pizza        Price = 180rs/pcs");
        printf(" \n 2. Burger       Price = 100rs/pcs");
        printf(" \n 3. Dosa         Price = 120rs/pcs");
        printf(" \n 4. Idli         Price = 50rs/pcs");

        int ch, qua;
        printf("\n Please Enter Your Choose... : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n You have Selected Pizza");
            printf("\n Enter The Quantity : ");
            scanf("%d", &qua);
            amount += qua * 180;
            break;

        case 2:
            printf("\n You have Selected Burger");
            printf("\n Enter The Quantity : ");
            scanf("%d", &qua);
            amount += qua * 100;
            break;

        case 3:
            printf("\n You have Selected Dosa");
            printf("\n Enter The Quantity : ");
            scanf("%d", &qua);
            amount += qua * 120;
            break;

        case 4:
            printf("\n You have Selected Idli");
            printf("\n Enter The Quantity : ");
            scanf("%d", &qua);
            amount+= qua * 50;
            break;

        default:
            printf("\n Wrong Number Input");
            break;
        }
        
        
        printf("\n Do You want Place More Order ? If Yes Then Enter 1 If No Then Enter 0 ");
        scanf(" %d", &confoirm);

        if (confoirm == 0)
        {
            printf("\n Thanks For Visite");
            printf("\n Total Amount : %d", amount);
            break;
        }
       
    }
    
}