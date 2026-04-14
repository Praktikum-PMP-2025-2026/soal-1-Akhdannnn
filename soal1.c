/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : selasa, 14 april 2026
 *   Nama (NIM)          : Ahmad Akhdan Tristan Salman (13224039)
 *   Nama File           : soal1.c
 *   Deskripsi           : Mencetak warna lampu berdasarkan aturan prioritas
 * 
 */

#include <stdio.h>
#include <string.h>
  
int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            printf("BIRU\n");
        }
        else if (i % 3 == 0) {
            printf("MERAH\n");
        }
        else if (i % 2 == 0) {
            printf ("KUNING\n");
        }
        else if (i >= 10 && i % 2 == 0) {
            printf ("HIJAU\n");
        }
        else {
            printf ("%d\n", i);
        }
    }

    return 0;
}
