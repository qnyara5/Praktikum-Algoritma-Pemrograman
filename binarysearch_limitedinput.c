/* Nama file    : binarysearch_limitedinput.c*/
/* Deskripsi    : Mencari harga X dalam Table T [1..N] secara dikotomik.
                Hasilnya adalah indeks IX dimana Tix = X. IX = -1 jika tidak ketemu.
                Skema pencarian tanpa boolean.
                BESAR ARRAY DAN ELEMEN-ELEMENNYA SUDAH DITENTUKAN.
                USER HANYA BISA INPUT ELEMEN YANG DICARI*/
/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* Nim          : 24060121120008*/
/* Tanggal      : 15 April 2022*/

#include <stdio.h>
#include <stdlib.h>
#include "subbinarysearch.h"

/*Program Utama*/
int main()
{
    /* Kamus */
    int i, j, a, X, IX;
    int D[] = {76, 41, 125, -88, 122, 90, 3, 5, 1, 98, 27, 26, 33, 48, 15};
    int N = sizeof(D)/sizeof(D[0]);

    /*Algoritma*/
    printf("==================== Binary Search Limited User Input ====================");
    printf("\n==========================================================================\n");

    /*Menampilkan elemen-elemen array D sebelum diurutkan*/
    printf("\n******************************* SOAL *************************************\n");
    printf("\nArray D = {");
    for(i = 0; i < N; i++){
        printf("%d  ", D[i]);
    }
    printf("}\n");

    /*Mengurutkan elemen array dari terkecil hingga terbesar*/
    for (i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            if (D[i] > D[j]){
                a = D[i];
                D[i] = D[j];
                D[j] = a;
            }
        }
    }

    /*Inputan elemen yang dicari*/
    printf("\n============================== Elemen X ==================================\n");
    printf("\nMasukan elemen/data yang dicari (X) : ");
    scanf("%d", &X);

    printf("\n========================== Hasil Pencarian ===============================\n");

    /*Penggunaan prosedur binarysearch*/
    binarysearch(D, N, &IX, X);

    if(IX == -1){
        printf("\nData Tidak Ditemukan\n");
    }else{
        printf("\nData berada pada indeks ke- %d\n", IX);
        printf("\nData berada pada urutan ke- %d\n", IX + 1);

        }

    /*Menampilkan array D yang telah terurut*/
    printf("\n============================ Sorted Array ================================\n");
    printf("\nArray D = {");
    for (i = 0; i < N; i++){
        printf("%d  ", D[i]);
        }
    printf("}");
    printf("\n");
    printf("\n==========================================================================\n");

    return 0;
}


