#include <stdio.h>
#include <stdlib.h>

// strlen(arg) --> takes in a string as arg, and returns the length
// strcpy(dest, src) --> takes the value in src, and puts in in dest

// function prototypes
int stringLength(char *array);
void stringCopy(char *destination, char *source);

int main(void)
{
    char buff[100];

    printf("Enter your name: ");
    fgets(buff, sizeof(buff), stdin);

    int length = stringLength(buff); // includes the \n that fgets reads

    char *name = malloc((sizeof(char) * length));

    stringCopy(name, buff);

    printf("\nName: ");
    for (int i = 0; i < length; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    printf("The string is %d characters long\n", length-1);

    free(name);
    return 0;
}

// function(s)
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

    return length; // the -1 excludes the \n at the end of the array
}

void stringCopy(char *destination, char *source)
{
    int lenOfSrc = 0;
    int i = 0;

    // get the length of the name in src
    while (source[i] != '\0')
    {   
        lenOfSrc++;
        i++;
    }

    // iterate lenOfSrc times, over the src array and putting the value in the dest array
    for (int i = 0; i < lenOfSrc; i++)
    {
        destination[i] = source[i];
    }

    // make sure the last char is \0
    destination[lenOfSrc] = '\0';
}

