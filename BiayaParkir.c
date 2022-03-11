/* Nama file    : BiayaParkir.c*/
/* Deskripsi    : Menentukan besarnya biaya parkir yang dihitung
                berdasarkan lamanya parkir dan menampilkannya di layar*/
/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* NIM          : 24060121120008*/

#include <stdio.h>

int main(){
    /* Kamus */
    int jam;
    int biaya;

    /* Algoritma */
    printf("=========== Menghitung Biaya Parkir ===========\n");
    printf("===============================================\n");
    printf("\nMasukan waktu parkir : ");
        /* Input */
    scanf("\n %d", &jam);

        /* Proses */
    if (0 < jam && jam <= 2){
        biaya = 2000;
    } else {
        biaya = 2000 + (jam - 2) * 500;
    }
        /* Output */
   printf("\n===============================================\n");   
   printf("Lamanya parkir %d jam, biaya parkirnya Rp. %d", jam, biaya);
   printf("\n===============================================\n");

  return 0;
}

