#include <stdio.h>

double fahrToCelsius(double fahr);

int main(int argc, char **argv)
{
  double fahr;
  printf("Fahr --> Celsius\n");
  for(fahr=0; fahr<=300; fahr+=20)
    printf("%3.0lf %6.1lf\n",fahr, fahrToCelsius(fahr));
  return 0;
}

double fahrToCelsius(double fahr)
{
  return (5.0/9.0)*(fahr-32);
}
