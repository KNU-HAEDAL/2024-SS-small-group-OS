#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <malloc.h>

char *my_strcpy(char *destination, char *source);
char *my_strcat(char *str1, char *str2);

char *my_strcpy(char *destination, char *source)
{
    destination = (char*)malloc(strlen(source) + 1);
    int i = 0;
    while (destination[i] == source[i])
    {
        i++;
    }
    destination[i] = '\0';
    return 0;
}

char *my_strcat(char *str1, char *str2)
{
    char* result = (char*)malloc(strlen(str1) + strlen(str2) + 1);
    int i = 0;

    while(str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }

    char* ptr = result + strlen(str1);
    while(*str2 != '\0')
        *ptr++ = *str2++;
    *ptr = '\0';

    return result;

}

int main()
{
    char s[] = "Hello World!";
    char* t = NULL;
    char u[] = "C programming language!";

    t = my_strcpy(t, s);
    printf("my_strcpy() : %s->%s\n", s, t);
    printf("my_strcat() : %s\n", my_strcat(s, u));
}

/*
my_strcpy() : Hello World!->Hello World!
my_strcat() : Hello World!C programming language!
*/