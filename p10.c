#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char **argv)
{
  int c, nline, nword, nchar, state;

  state=OUT;
  nline=nword=nchar=0;

  while((c=getchar())!=EOF){
    ++nchar;
    if(c=='\n')
      ++nline;
    if(c==' '||c=='\t'||c=='\n')
      state=OUT;
    else if(state==OUT){
      state=IN;
      ++nword;
    }
  }
  printf("%d %d %d\n",nchar, nline, nword);
  return 0;
}
