#include <stdio.h>

int main()
{
    char x[1000000];
    printf("Enter the string to check: ");
    gets(x);
    char* str = x;
    int letters= 0, spaces=0;
    while (*str++ && str!='\0')
    {
        if (*str == ' ')
            spaces++;
        else
            letters++;
    }
    printf("\nYour string has %d letters and %d spaces\n",letters, spaces);
    printf("Total letters in your string: %d\a\n",letters + spaces);
}
