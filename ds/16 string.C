#include <stdio.h>
#include <string.h>
#include <conio.h>

void main() {
    char S1[] = "Flowers";
    char S2[] = "are beautiful";
    char concatenated[100];
    char substring[4];
    char modified_S2[100];
    char *pos;
    int len;

    clrscr();

    len = strlen(S1);
    printf("1. Length of S1: %d\n", len);

    strcpy(concatenated, S1);
    strcat(concatenated, " ");
    strcat(concatenated, S2);
    printf("2. Concatenated String: %s\n", concatenated);

    strncpy(substring, S1 + 1, 3);
    substring[3] = '\0';
    printf("3. Extracted Substring: %s\n", substring);

    strcpy(modified_S2, S2);
    pos = strstr(modified_S2, "are");
    if (pos != NULL) {
        strncpy(pos, "is ", 3);
    }
    printf("4. Modified S2: %s\n", modified_S2);

    getch();
}