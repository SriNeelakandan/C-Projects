#include <stdio.h>
int qty = 0, amt = 0;
void coffee()
{
    printf("\nCOFFEE");
    printf("\nEnter no of quantity:");
    scanf("%d", &qty);
    amt = amt + (qty * 15);
}
void tea()
{
    printf("\nTEA");
    printf("\nEnter no of quantity:");
    scanf("%d", &qty);
    amt = amt + (qty * 12);
}
void egg_puff()
{
    printf("\nEGG PUFFS");
    printf("\nEnter no of quantity:");
    scanf("%d", &qty);
    amt = amt + (qty * 18);
}
void veg_puff()
{
    printf("\nVEG PUFFS");
    printf("\nEnter no of quantity:");
    scanf("%d", &qty);
    amt = amt + (qty * 15);
}
void ice_cream()
{
    printf("\nICE CREAM");
    printf("\nEnter no of quantity:");
    scanf("%d", &qty);
    amt = amt + (qty * 30);
}
void total()
{
    printf("\n\n\tTotal amount : %d", amt);
}
int main()
{
    int ch;
select:
    printf("\n\tMENU CARD");
    printf("\n\t1.COFFEE");
    printf("\n\t2.TEA");
    printf("\n\t3.EGG PUFFS");
    printf("\n\t4.VEG PUFFS");
    printf("\n\t5.CONE");
    printf("\n\t6.MAKE A BILL");
    printf("\nEnter ur choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        coffee();
        goto select;
        break;
    case 2:
        tea();
        goto select;
        break;
    case 3:
        egg_puff();
        goto select;
        break;
    case 4:
        veg_puff();
        goto select;
        break;
    case 5:
        ice_cream();
        goto select;
        break;
    case 6:
        total();
        break;
    }
    return 0;
}