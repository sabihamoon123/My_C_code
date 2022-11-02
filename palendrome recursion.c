#include <stdio.h>
#include <string.h>

void check(char [], int);

int main()
{
    char str[15];

    printf("Enter a word to check if it is a palindrome\n");
    scanf("%s", str);
    check(str, 0);

    return 0;
}

void check(char str[], int index)
{
    int len = strlen(str) - (index + 1);
    if (str[index] == str[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        check(str, index + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}
