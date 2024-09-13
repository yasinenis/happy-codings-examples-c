// using a 2-dimensional array of doubles
// Ýkili boyutlu dizi kullanarak üslü hesaplama
#include <stdio.h>
#include <math.h>

#define TABAN_SAYISI 6
#define US_SAYISI 3
#define TABAN 0
#define US 1
#define SONUC 2

int main()
{
    double kuvvetler[TABAN_SAYISI][US_SAYISI] = {
        2.1, 1, 0,
        3.8, 8, 0,
        4.3, 2, 0,
        8.8, 3, 0,
        6.4, 4, 0,
        6.6, 7, 0
    };

    int satir_indeksi;

    for (satir_indeksi = 0; satir_indeksi < TABAN_SAYISI; satir_indeksi++)
    {
        kuvvetler[satir_indeksi][SONUC] = pow(kuvvetler[satir_indeksi][TABAN], kuvvetler[satir_indeksi][US]);
    }

    for (satir_indeksi = 0; satir_indeksi < TABAN_SAYISI; satir_indeksi++)
    {
        printf(" %d\n", (int)kuvvetler[satir_indeksi][US]);
        printf(" %2.1f = %.2f\n\n", kuvvetler[satir_indeksi][TABAN], kuvvetler[satir_indeksi][SONUC]);
    }

    return 0;
}
