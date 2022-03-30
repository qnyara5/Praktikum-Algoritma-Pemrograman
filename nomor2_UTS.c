/*Nama file     : nomor2_UTS.c*/
/* Deskripsi    : Menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya.*/
/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* NIM          : 24060121120008*/

//
#include <stdio.h>
#include <math.h>

int main(){
    /*Kamus*/
    int N, i, max, min, diff;

    /*Algoritma*/
    printf("=========== Menghitung Selisih Ketinggian =========\n");
    printf("\nBanyaknya data jalur lintasan (ukuran array) : ");
    scanf("%d", &N);

    printf("\nMasukan nilai data perjalanan\n");

    int T[N];
    for(i = 0; i < N; i++){
        printf("\nNilai data array indeks ke - %d : ", i);
        scanf("%d", &T[i]);
    }

    min = max = T[0];

    for(i = 0; i < N; i++){
        if(max < T[i]){
            max = T[i];
        }

    }
    for(i = 0; i < N; i++){
        if(min > T[i]){
            min = T[i];
        }
    }

    printf("\n==================================================\n");
    printf("\nNilai data terbesar adalah %d\n", max);
    printf("\nNilai data terkecil adalah %d\n", min);
    diff = max - min;
    printf("\nSelisih ketinggian adalah %d\n", diff);
    printf("\n==================================================\n");
    return 0;
}

