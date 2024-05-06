#include<stdio.h>
#include<string.h>
#include<malloc.h>

char* my_strcpy(char*dest,char*scr);
char* my_strcat(char*dest,char*scr);

int main(void){
  char str[]="Hello World!";
  char *strp;
  char *str1="C programing language!";
  
  strp=my_strcpy(strp,str);
  str1=my_strcat(str,str1);
  
  printf("my_strcpy(): %s -> %s\n",str,strp);
  printf("%s\n",str1);

  return 0;
}

char* my_strcpy(char*dest,char*scr){
  dest=(char*)malloc(strlen(scr)+1);
  int i=0;
  while(dest[i]=scr[i]){
    i++;
  }
  dest[i]='\0';
  return dest;
}

char*my_strcat(char*dest,char*scr){
  char*out=(char*)malloc(strlen(dest)+strlen(scr)+1);
  int i=0;
  int j=0;
  while(dest[i]!='\0'){
    out[i]=dest[i];
    i++;
  }
  while(scr[j]!='\0'){
    out[i]=scr[j];
    i++;
    j++;
  }
  
  out[i]='\0';
  
  return out;
}