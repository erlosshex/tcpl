#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char **argv)
{
  int c, state;

  state=OUT;
  /*c=getchar();*/
  while((c=getchar())!=EOF){
    if((c==' '||c=='\t')&&state==OUT)
      continue;
    else{
      putchar(c);
      if(state!=IN)
        state=IN;
    }
    if((c==' '||c=='\t')&&state==IN){
      state=OUT;
      printf("\n");
    }
  }
  return 0;
}
