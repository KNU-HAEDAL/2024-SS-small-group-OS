#include <stdio.h>

char* to_upper(char* str)
{
    char* ptr = str;
    while(*ptr)
    {
        if ((*ptr >= 'a') && (*ptr <= 'z')) 
		{
			*ptr = *ptr - ('a' - 'A'); 
		}
        ptr++;
        
    }
    return str;

}

char* to_lower(char* str)
{
    char* ptr = str;
    while(*ptr)
    {
        if ((*ptr >= 'A') && (*ptr <= 'Z')) 
		{
		    *ptr = *ptr + ('a' - 'A');
		}
        ptr++;
    }
    return str;
}

int main()
{
    char s[] = "Hello World!";

    printf("to_upper() : %s\n", to_upper(s));
    printf("to_lower() : %s\n", to_lower(s));
}


/*
to_upper() : HELLO WORLD!
to_lower() : hello world!
*/