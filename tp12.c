#include <stdio.h>

#define MAXLINE 100

int my_getline(char line[], int maxline);
void reverse(char to[], char from[], int len);

int main(int argc, char **argv)
{
  int len;
  char from[MAXLINE];
  char to[MAXLINE];
  while((len=my_getline(from,MAXLINE))!=0){
    reverse(to,from,len);
    printf("%s\n",to);
  }

  return 0;
}

int my_getline(char line[], int maxline)
{
  int c;
  int i=0;

  for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    line[i]=c;
  line[i]='\0';
  return i;
}

void reverse(char to[], char from[], int len)
{
  int i,j=0;
  for(i=len-1; i>=0; --i, ++j)
    to[j]=from[i];
  to[j]='\0';
}
