#include<stdio.h>
int main()
{
    char code;
    printf("\t welcome to our hotel \n \n\n");
    printf("\t\t\t menu\t \t \n");
    printf("iteam\t\t\t code\t\t\trate\n");
    printf("tea \t\t\t t\t\t\t rs 50\n");
    printf("coffee \t\t\t c\t\t\t rs 80\n");
    printf("momo \t\t\t m\t\t\t rs 140\n");
    printf("chaumin \t\t n\t\t\t rs 160\n");
    printf("enter code for order the food:");
    scanf("%c",& code);
    switch(code)
    {
    case 't':
    printf("\t you have ordered tea.your price is 50.\n");
    break;
    case 'c':
    printf("\t you have ordered coffee . your price is 80.\n ");
    break;
    case 'm':
    printf("\t you have ordered momo. your price is 140.\n ");
    break;
    case'n':
    printf("\t you have ordered chaumin. your price is 160.\n");
    break;
    default:
    printf("\t you have entred incorrect code.\n");

    }
    printf("\t thank you for visiting our hotel.\n have a good day. ");
    int getch();
    return 0;
}