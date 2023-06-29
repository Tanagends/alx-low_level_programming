#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *rot13(char *str) {
    int i, j;
    char *rot13Str = str;

    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            for (j = 0; j < 13; j++) {
                if ((str[i] == 'z' && j < 13) || (str[i] == 'Z' && j < 13)) {
                    rot13Str[i] -= 13;
                    break;
                }
                rot13Str[i]++;
            }
        }
    }

    return rot13Str;
}
