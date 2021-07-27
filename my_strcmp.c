#include <stdlib.h>
#include <stdio.h>
#define UPPER_LOWER_ASCII_DIFF 32

int my_strlen(char *arr);
int my_strcmp(char *string1, const char *string2);

int main(int argc , char **argv)
{
    char *test = argv[1];
    char *test2 = argv[2];
    if(my_strlen(test) == my_strlen(test2))
    {
        if(my_strcmp(test, test2) == 1)
            printf("the strings are the same\n");
        else 
            printf("the string aren't the same\n");
    }
    else 
        printf("the string aren't the same\n");
    return 0;
}
int my_strlen(char *arr)
{
	char *p = arr; // put the first chararcter adresse's of the string in this pointer 
    for(; *p != '\0'; p++);
	return p - arr;
}

int my_strcmp(char *string1, const char *string2)
{
    int result = 0;
    int i = 0;
    while(string1[i] != '\0')
    {
        if(string1[i] == string2[i])
        {
            result = 1;
        }
        // what if the strings are the same but one upper-case and the other lower-case
        else if((int)*(string1+i) - (int)*(string2+i) == UPPER_LOWER_ASCII_DIFF) 
            result = 1;
        else
            result = 0;
        i++;
    }
    return result;
}