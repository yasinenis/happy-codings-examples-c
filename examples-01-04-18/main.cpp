// C Programming - Output the string array with formatting
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* verse[] =
{
    "O ",
    "T  T",
    "B   B",
    "O    O",
    "F     F",
    "W      W",
    "A       A",
    "S        S",
    "O         O",
    NULL
};

int main() {
    const char** ch_p;

    /* Print the data left justified */
    for (ch_p = verse; *ch_p; ch_p++)
        printf("%s\n", *ch_p);

    printf("\n");

    /* Print the data right justified */
    for (ch_p = verse; *ch_p; ch_p++)
        printf("%79s\n", *ch_p);

    printf("\n");

    /* Center the data */
    for (ch_p = verse; *ch_p; ch_p++) {
        int length;
        char format[100];  // Yeterli boyutta bir format dizisi

        length = 40 + strlen(*ch_p);  // Alan uzunluðunu hesapla
        snprintf(format, sizeof(format), "%%%ds\n", length);  // Güvenli format dizesi oluþtur
        printf(format, *ch_p);
    }
    printf("\n");

    return 0;
}

