#include<stdio.h>
#include<string.h>
#include<malloc.h>
char* toupper(char*);
char* tolower(char*);
int main(void){
  char str[]="Hello World";

  printf("%s\n",toupper(str));
  printf("%s\n",tolower(str));

  return 0;
}
char*toupper(char*str){
  int i=0;

  while(str[i]!='\0'){
    if((str[i]>='a')&&(str[i]<='z'))
      str[i]-=32;
    i++;
  }
  

  return str;
}
char*tolower(char*str){
  int i=0;

  while(str[i]!='\0'){
    if((str[i]>='A')&&(str[i]<='Z'))
      str[i]+=32;
    i++;
  }

  return str;
}