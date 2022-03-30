/* Nama file    : nomor3_UTS_v2.c*/
/* Deskripsi    : Menghitung besarnya penjumlahan sub array/tabel T. */
/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* NIM          : 24060121120008*/


#include <stdio.h>
#include <math.h>

int main(){
    /*Kamus*/
    int N, i, j, sum;

    /*Algoritma*/

    printf("=========== Menghitung Jumlah Elemen Array =========\n");
    printf("\nBanyaknya elemen (ukuran array) : ");
    scanf("%d", &N);

    printf("\nMasukan elemen array\n");

    int T[N];
    for(i = 0; i < N; i++){
        printf("\nNilai elemen array indeks ke - %d : ", i);
        scanf("%d", &T[i]);
    }

    sum = 0;
    for (int i = 0; i < N; i++){
        for (int j = i; j < N; j++){
            sum += T[j];
        }
    }

    printf("\n====================================================\n");
    printf("\nJumlah elemen array adalah %d\n", sum);
    printf("\n====================================================\n");
    return 0;
}



