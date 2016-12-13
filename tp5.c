#include <stdio.h>

int main(int argc, char **argv)
{
  float fahr, celsius;
  int lower, upper, step;

  lower=0;
  upper=300;
  step=-20;

  fahr=upper;
  printf("Fahr --> Celsius\n");
  while(fahr>=lower){
    celsius=(5.0/9.0)*(fahr-32);
    printf("%3.0f %6.1f\n",fahr,celsius);
    fahr+=step;
  }

  return 0;
}
