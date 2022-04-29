/* Nama file    : insertion_sort.c*/
/* Deskripsi    : Mengurutkan array dengan algoritma sederhana yang bekerja mirip dengan cara mengurutkan kartu di tangan.
                  Array dibagi secara virtual menjadi bagian yang diurutkan dan tidak diurutkan. Nilai dari bagian yang tidak disortir
                  dipilih dan ditempatkan pada posisi yang benar di bagian yang diurutkan.
                  Untuk mengurutkan dengan ascending order, algortima yang digunakan:
                  1. Iterasi dari array[1] ke array [N] di atas array.
                  2. Bandingkan elemen saat ini (kunci) dengan elemen pendahulunya.
                  3. Jika elemen kunci lebih kecil dari pendahulunya, bandingkan dengan elemen sebelumnya.
                     Pindahkan elemen yang lebih besar satu posisi ke atas untuk memberi ruang bagi elemen yang ditukar.
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
    int array_T[] = {188, 18, 999, 555, 4, 45, 90, 1, 2, 5, 97, 75, 12, 9, 13, 33, 333, 77, 879};
    int N;
    N = sizeof(array_T)/sizeof(array_T[0]);

    /*Algoritma*/
    printf("========================= Insertion Sort =========================");
    printf("\n==================================================================\n");

    /*Penggunaan Fungsi*/
    printf("\n==================== Array Sebelum diurutkan =====================\n");
    printf("\nArray T = ");
    print_array(array_T, N);
    insertion_sort(array_T, N);
    printf("\n==================== Array Setelah diurutkan =====================\n");
    printf("\nArray T = ");
    print_array(array_T, N);
    printf("\n==================================================================\n");
}

