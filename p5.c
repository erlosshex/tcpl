#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char **argv)
{
  float fahr, celsius;

  for(fahr=LOWER; fahr<=UPPER; fahr+=STEP)
    printf("%3.0f %6.1f\n",fahr, celsius=(5.0/9.0)*(fahr-32));

  return 0;
}
