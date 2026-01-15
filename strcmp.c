#include <stdio.h>

int stringCompare(char *arrayOne, char *arrayTwo);

int main(void)
{
    char string1[] = "Hello";
    char string2[] = "Hello";

    // when S1 = h, return 32, when S2 = h, return -32, else return 0

    int result = stringCompare(string1, string2);

    if (result == 0)
    {
        printf("Both strings are the same!\n");
    }
    else
    {
        printf("Both strings are not the same!\n");
    }

    return 0;
}

int stringCompare(char *arrayOne, char *arrayTwo)
{
    int i = 0;

    while (arrayOne[i] != 0)
    {
        if (arrayOne[i] > arrayTwo[i])
        {
            return 32;
        }
        else if (arrayOne[i] < arrayTwo[i])
        {
            return -32;
        }

        i++;
    }

    return 0;
}