/* Nama file    : binarysearch_input.c*/
/* Deskripsi    : Mencari harga X dalam Table T [1..N] secara dikotomik.
                Hasilnya adalah indeks IX dimana Tix = X. IX = -1 jika tidak ketemu.
                Skema pencarian tanpa boolean.
                USER BISA MENGINPUT BESAR ARRAY, ELEMEN - ELEMENNYA, DAN ELEMEN YANG DICARI*/
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
    int N, i, j, a, X, IX;

    /*Algoritma*/
    printf("============== Binary Search with User Input ================");
    printf("\n=============================================================\n");

    /*Inputan ukuran array*/
    printf("\nMasukan ukuran array : ");
    scanf("\n %d", &N);
    printf("\n=============================================================\n");

    if(N <= 0){
        printf("\nNilai ukuran array harus positif\n");
        printf("\n=============================================================\n");

    }else{
        int D[N];
        /*Inputan elemen array*/
        for(i = 0; i < N; i++){
            printf("\nMasukan elemen array (boleh tidak terurut) : ");
            scanf("%d", &D[i]);
        }

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
        printf("\n========================= Elemen X ==========================\n");
        printf("\nMasukan elemen/data yang dicari (X) : ");
        scanf("%d", &X);

        printf("\n===================== Hasil Pencarian =======================\n");

        /*Penggunaan prosedur binarysearch*/
        binarysearch(D, N, &IX, X);
        if(IX == -1){
            printf("\nData Tidak Ditemukan\n");
        }else{
            printf("\nData berada pada indeks ke- %d\n", IX);
            printf("\nData berada pada urutan ke- %d\n", IX + 1);

        }

        /*Menampilkan array yang telah terurut*/
        printf("\n===================== Sorted Array ==========================\n");
        printf("\nArray = {");
        for (i = 0; i < N; i++){
            printf("%d  ", D[i]);
            }
        printf("}");
        printf("\n");
        printf("\n=============================================================\n");
        return 0;
}
}
