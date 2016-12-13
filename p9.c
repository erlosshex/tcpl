#include <stdio.h>

int main(int argc, char **argv)
{
  int nl=0;
  int c;
  c=getchar();
  while(c!=EOF){
    if(c=='\n')
      ++nl;
    c=getchar();
  }
  printf("%d\n",nl);
  return 0;
}
