#include <stdio.h>

void iError() /*Ошибка ввода*/
{
	printf("Usage sample:\n");
	printf("(programm's path) t tChat\n");
	printf("Where 't' for numeric data, 'tChar' for tempeture scale (C,K,F).\n");
}

float kelvin_s(double temp, double KELVIN, double FAHRENHEIT,double CELSIUS)
{
    KELVIN = temp;
    FAHRENHEIT = 1.8*(temp-273.15)+32;
    CELSIUS = temp-273.15;
    printf("%.2f%s",KELVIN,"K\n");
    printf("%.2f%s",FAHRENHEIT,"F\n");
    printf("%.2f%s",CELSIUS,"C\n");
}

float celsius_s(double temp, double KELVIN, double FAHRENHEIT,double CELSIUS)
{
    CELSIUS = temp; 
    KELVIN = temp+273.15;
    FAHRENHEIT = (temp*1.8)+32;
    printf("%.2f%s",CELSIUS,"C\n");
    printf("%.2f%s",KELVIN,"K\n");
    printf("%.2f%s",FAHRENHEIT,"F\n"); 
}
float fahrenheit_s(double temp, double KELVIN, double FAHRENHEIT,double CELSIUS)
{
    FAHRENHEIT = temp;
    CELSIUS = (temp-32)*(5/9); 
    KELVIN = (temp+459.67)*(5/9);
    printf("%.2f%s",CELSIUS,"C\n");
    printf("%.2f%s",KELVIN,"K\n");
    printf("%.2f%s",FAHRENHEIT,"F\n");
}
int main(int argc, char* argv[])
{
/* argv[0] = "gcc" */
/* argv[1] = "temp..." */
    double temp; /*Storage of temp */
    double KELVIN,CELSIUS,FAHRENHEIT; /* Results */
    char system; /* Temperature system */
    if (argc<2) { iError(); return 0; }
    sscanf(argv[1], "%lf", &temp);
    if (argc==3) { system = argv[2][0]; }
 
    if (system == 'K' || system == 'k')
    {
        kelvin_s(temp,KELVIN,FAHRENHEIT,CELSIUS);
    }
    else if (system == 'C' || system == 'c')
    {
        celsius_s(temp,KELVIN,FAHRENHEIT,CELSIUS);
    }
    else if (system == 'F' || system == 'f') 
    { 
         fahrenheit_s(temp,KELVIN,FAHRENHEIT,CELSIUS);
    }
    else
    {
        printf("default kelvin\n");
        kelvin_s(temp,KELVIN,FAHRENHEIT,CELSIUS);
        printf("default celsius");
        celsius_s(temp,KELVIN,FAHRENHEIT,CELSIUS);
        printf("default fahrenheit");
        fahrenheit_s(temp,KELVIN,FAHRENHEIT,CELSIUS);
    }    
}
