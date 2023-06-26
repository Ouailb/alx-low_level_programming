#include <stdio.h>

void rev_string(char *s)
{
    if (s == NULL)
        return;

    int length = 0;
    char *end = s;

    while (*end != '\0') {
        length++;
        end++;
    }


    char *start = s;
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

