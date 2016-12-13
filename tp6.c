#include <stdio.h>

int main(int argc, char **argv)
{
  int result;
  while(result=getchar()!=EOF)
    {
      printf("%d",result);
    }
  printf("%d\n",result);
  return 0;
}
