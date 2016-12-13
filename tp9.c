#include <stdio.h>

int main(int argc, char **argv)
{
  int pre_c=-2, cur_c;
  int n=0;
  cur_c=getchar();
  while(cur_c!=EOF){
    if(pre_c==-2)
      pre_c=cur_c;

    if(pre_c==' '&&cur_c==' '){
      ++n;
    }else{
      printf("%c",cur_c);
    }
    pre_c=cur_c;
    cur_c=getchar();
  }
  return 0;
}
