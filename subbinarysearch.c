/* Nama file    : subbinarysearch.c*/
/* Deskripsi    : Mencari harga X dalam Table T [1..N] secara dikotomik.
                Hasilnya adalah indeks IX dimana Tix = X. IX = -1 jika tidak ketemu.
                Skema pencarian tanpa boolean*/
/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* Nim          : 24060121120008*/
/* Tanggal      : 15 April 2022*/

#ifndef SUBBINARYSEARCH_C
#define SUBBINARYSEARCH_C
#include "subbinarysearch.h"

void binarysearch(int T[], int N, int *IX, int X){
    /* Proses   : Mencari harga X dalam Table T [1..N] secara dikotomik.
    /* I.S      : Sembarang
    /* F.S      : Hasilnya adalah indeks IX dimana Tix = X.
                IX = -1 jika tidak ketemu. Skema pencarian tanpa boolean*/

    /* Kamus Lokal*/
    int upper;
    int mid;
    int lower;

    /*Algortima*/
    upper = N - 1;
    lower = 0;
    mid = (upper + lower) / 2;

    while (X != T[mid] && (lower < upper)){
        if (X > T[mid]){
            lower = mid + 1;
        }else {
            upper = mid - 1;
        }
        mid = (upper + lower) / 2;
        }

    if (X == T[mid]){
        *IX = mid;
    }else{
        *IX = -1;
    }
}
#endif // SUBBINARYSEARCH_C
