#include <stdio.h>
#include <conio.h>

void main()
{

    // memory allocation

    int profitMutton = 20 * 1400 / 100;
    int profitBeaf = 20 * 550 / 100;
    int profitChickenGolden = 20 * 520 / 100;
    int profitChickenWings = 20 * 220 / 100;
    int profitChickenNeck = 20 * 160 / 100;
    int profitChickenLegs = 20 * 320 / 100;
    int profitChickenMeat = 20 * 450 / 100;

    // printing process

    // clrscr();
    printf("      \n *** *MEAT Shop* ***  \n");
    printf(" Mutton is 1400 pr kg \n");
    printf(" Beaf is 550 pr kg \n");
    printf(" Chicken Golden is 520 pr kg \n");
    printf(" Chicken Wings is 220 pr kg \n");
    printf(" Chicken neck is 160 pr kg \n");
    printf(" Chicken legs is 320 pr kg \n");
    printf(" Chicken meat is 450 pr kg \n");
    printf("\nPress any key to see purchase rate\n");
    getch();

    printf("   \n*Purchase rate of all items*  \n\n");
    printf(" Purchase Rate : Mutton = %d \n", 1400 - profitMutton);
    printf(" Purchase Rate : beaf = %d \n", 550 - profitBeaf);
    printf(" Purchase Rate : Chicken Golden = %d \n", 520 - profitChickenGolden);
    printf(" Purchase Rate : Chicken Wings = %d \n ", 220 - profitChickenWings);
    printf(" Purchase Rate : Chicken legs = %d \n ", 320 - profitChickenLegs);
    printf(" Purchase Rate : Chicken Neck = %d \n ", 160 - profitChickenNeck);
    printf(" Purchase Rate : Chicken Meat = %d \n ", 450 - profitChickenMeat);
    printf("\nprint any key to ckeck What he earn");
    getch();

    printf("      \n\n* PROFIT OF EACH ITEM *   \n\n");
    printf("Profit of Mutton is :%d \n", profitMutton);
    printf("Profit of Beaf is :%d \n", profitBeaf);
    printf("Profit of Chicken Golden is :%d \n", profitChickenGolden);
    printf("Profit of Chicken Wings is :%d \n", profitChickenWings);
    printf("Profit of Chicken Neck is :%d \n", profitChickenNeck);
    printf("Profit of Chicken Legs is :%d \n", profitChickenLegs);
    printf("Profit of Chicken Meat is :%d \n", profitChickenMeat);
    printf("press Any key to Exit");
    getch();
}
