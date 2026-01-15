#include <stdio.h>

void append(char* string1, char* string2);
int stringLength(char *array);

int main(void)
{
    char str1[50] = "My name is ";
    char str2[] = "Alfie Dan Rickoy Alpha Jeslin";

    append(str1, str2);

    printf("%s\n", str1);

    return 0;
}


void append(char* string1, char* string2)
{
    int counter = 0; 

    // find the location of the \0, then add string2 starting from that location
    while (0 == 0)
    {
        // if its the null terminator
        if (string1[counter] == 0)
        {
            break;
        } 

        counter++;
    }

    printf("%d\n", counter);

    int length = stringLength(string2);

    printf("%d\n", length);

    for (int i = counter; i < (length+counter); i++)
    {
        string1[i] = string2[i - counter];
    }
}


int stringLength(char *array)
{
    int length = 0;    
    int i = 0;
    
    // instead of trying to find a counter (N) to count with, we can just traverse the memory starting from the given ptr, until we hit a NUL
    while (array[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}