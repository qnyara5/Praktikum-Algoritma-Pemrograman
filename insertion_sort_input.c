/* Nama file    : insertion_sort.c*/
/* Deskripsi    : Mengurutkan array dengan algoritma sederhana yang bekerja mirip dengan cara mengurutkan kartu di tangan.
                  Array dibagi secara virtual menjadi bagian yang diurutkan dan tidak diurutkan. Nilai dari bagian yang tidak disortir
                  dipilih dan ditempatkan pada posisi yang benar di bagian yang diurutkan.
                  Untuk mengurutkan dengan ascending order, algortima yang digunakan:
                  1. Iterasi dari array[1] ke array [N] di atas array.
                  2. Bandingkan elemen saat ini (kunci) dengan elemen pendahulunya.
                  3. Jika elemen kunci lebih kecil dari pendahulunya, bandingkan dengan elemen sebelumnya.
                     Pindahkan elemen yang lebih besar satu posisi ke atas untuk memberi ruang bagi elemen yang ditukar.

                  ****** USER DAPAT MENGINPUT PANJANG DAN ELEMEN ARRAY. ******

/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* Nim          : 24060121120008*/
/* Tanggal      : 29 April 2022*/

#include <stdio.h>
#include <stdlib.h>

/*Fungsi untuk memprint elemen elemen array*/
void print_array(int array[], int size)
{
    /*Kamus Lokal*/
    int i;

    /*Algoritma*/
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

/*Fungsi Insertion Sort*/
void insertion_sort(int array[], int N)
{
    /*Kamus Lokal*/
    int i, j, key;

    /*Algoritma*/
    for (i = 1; i < N ; i++){
        key = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
}
}

/*Program Utama*/
int main()
{
    /* Kamus */
    int N, i, j;

    /*Algoritma*/
    printf("===================== Insertion Sort Input ======================");
    printf("\n=================================================================\n");

    /*Inputan ukuran array*/
    printf("\nMasukan ukuran array : ");
    scanf("\n %d", &N);
    printf("\n=================================================================\n");

    if(N <= 0){
        printf("\nNilai ukuran array harus positif\n");
        printf("\n=============================================================\n");

    }else{
        int D[N];
        /*Inputan elemen array*/
        for(i = 0; i < N; i++){
            printf("\nMasukan elemen array : ");
            scanf("%d", &D[i]);
        }

    /*Penggunaan Fungsi*/
    printf("\n=================== Array Sebelum diurutkan =====================\n");
    printf("\nArray D = ");
    print_array(D, N);
    insertion_sort(D, N);
    printf("\n=================== Array Setelah diurutkan =====================\n");
    printf("\nArray D = ");
    print_array(D, N);
    printf("\n=================================================================\n");
}
}


