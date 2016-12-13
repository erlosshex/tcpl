#include <stdio.h>

void my_print(const char *pc, int n);

int main(int argc, char **argv)
{
  int nline=0, ntab=0, nspace=0;
  int c;
  c=getchar();
  while(c!=EOF){
    if (c=='\n')
      ++nline;
    if (c=='\t')
      ++ntab;
    if (c==' ')
      ++nspace;
    c=getchar();
  }
  my_print("line",nline);
  my_print("tab",ntab);
  my_print("space",nspace);
  return 0;
}

void my_print(const char *pc, int n)
{
  printf("%s\t--> %d\n",pc,n);
}
