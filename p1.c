#include <stdio.h>

void my_print(const char *pText);

int main(int argc, char **argv)
{
  my_print("hello, world");
  printf("\n");

  return 0;
}

void my_print(const char *pText)
{
  printf("%s",pText);
}
