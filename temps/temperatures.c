#include <stdio.h>


int main()
{
    double temp; /*Storage of temp */
    double KELVIN,CELSIUS,FAHRENHEIT; /* Results */
    char system; /* Temperature system */
    printf("Enter temperature "); /* Output Message */
    scanf("%lg",&temp); /*Enter a temperature */
    printf("\nEnter system K-kelvin, C-celsius, F-fahrenheit\n"); /* Ask of user for system */
    /* scanf(" %c",&system);  Enter a system */ 
    getchar();
    system = getchar();
    if (system == 'K') 
    {
        /* Kelvin system entered */
        KELVIN = temp;
        FAHRENHEIT = 1.8*(temp-273.15)+32;
        CELSIUS = temp-273.15;
        printf("%.2f%s",KELVIN,"K\n");
        printf("%.2f%s",FAHRENHEIT,"F\n");
        printf("%.2f%s",CELSIUS,"C\n");
    }
    else if (system == 'C')
    {
        CELSIUS = temp; 
        KELVIN = temp+273.15;
        FAHRENHEIT = (temp*1.8)+32;
        printf("%.2f%s",CELSIUS,"C\n");
        printf("%.2f%s",KELVIN,"K\n");
        printf("%.2f%s",FAHRENHEIT,"F\n"); 
    }
    else if (system == 'F') 
    { 
        FAHRENHEIT = temp;
        CELSIUS = (temp-32)*(5/9); 
        KELVIN = (temp+459.67)*(5/9);
        printf("%.2f%s",CELSIUS,"C\n");
        printf("%.2f%s",KELVIN,"K\n");
        printf("%.2f%s",FAHRENHEIT,"F\n"); 
    }
    else
    {
        CELSIUS = temp; 
        KELVIN = temp+273.15;
        FAHRENHEIT = (temp+32)*1.8;
        printf("%.2f%s",CELSIUS,"C\n");
        printf("%.2f%s",KELVIN,"K\n");
        printf("%.2f%s",FAHRENHEIT,"F\n");
    }    
}
