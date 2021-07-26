#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool my_strcmp(char *string1, char *string2)
{
    bool result = false;
    for(int i = 0 ; *(string1 + i) != '\0' || *(string2 + i) != '\0' ; i++)
    {
        if(*(string1 + i) == *(string2 + i))
             result = true;
    }
    return result;
}
int main(void)
{
    char *string1 = "wassim";
    char *string2 = "wassim";
    bool result = my_strcmp(string1, string2);
    if(result == true)
        printf("the string are same\n");
    else 
        printf("they aren't the same\n");
     return 0;
}