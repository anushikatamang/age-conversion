
#include <stdio.h>
#include<conio.h>
int main()  
{
    int age;
    double days, hours, minutes;

    printf("Enter your age in years: ");
    scanf("%d", &age);

    days = age * 365.25;
    hours = days * 24;
    minutes = hours * 60;

    printf("You have been alive for roughly:\n");
    printf("%.0f days\n", days);
    printf("%.0f hours\n", hours);
    printf("%.0f minutes\n", minutes);
    
    return 0;
    getch();
}
