/* Nama file    : selection_sort.c*/
/* Deskripsi    : Mengurutkan array dengan berulang kali menemukan elemen minimum (mempertimbangkan urutan menaik)
/*              array yang belum terurut dan meletakkannya pada bagian awal.
                Algoritma mempertahankan dua subarray yaitu 1) Subarray yang sudah disortir. 2) Subarray yang tidak disortir.
                Dalam setiap iterasi selection sort, elemen minimum (mempertimbangkan urutan menaik) dari subarray yang
                tidak disortir dipilih dan dipindahkan ke subarray yang diurutkan.
/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* Nim          : 24060121120008*/
/* Tanggal      : 29 April 2022*/

#include <stdio.h>
#include <stdlib.h>

/*Fungsi menukar elemen*/
void swap(int *x, int *y)
{
    /*Kamus Lokal*/
    int temp;

    /*Algortima*/
    temp = *x;
    *x = *y;
    *y = temp;
}

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

/*Fungsi Selection Sort*/
void selection_sort(int array[], int N)
{
    /*Kamus Lokal*/
    int i, j, min;

    /*Algoritma*/
    for (i = 0; i < N - 1; i++){
        for(j = i + 1; j < N; j++){
            min = i;
            if (array[j] < array[min]){
                min = j;
            }
            swap(&array[i], &array[min]);
        }
    }
}

/*Program Utama*/
int main()
{
    /* Kamus */
    int array_T[] = {88, 158, 399, 55, 12, 4, 45, 90, 26, 5, 97, 75, 2, 102, 59, 13, 33, 388,};
    int N;
    N = sizeof(array_T)/sizeof(array_T[0]);

    /*Algoritma*/
    printf("======================== Selection Sort =========================");
    printf("\n=================================================================\n");

    /*Penggunaan Fungsi*/
    printf("\n=================== Array Sebelum diurutkan =====================\n");
    printf("\nArray T = ");
    print_array(array_T, N);
    selection_sort(array_T, N);
    printf("\n=================== Array Setelah diurutkan =====================\n");
    printf("\nArray T = ");
    print_array(array_T, N);
    printf("\n=================================================================\n");
}

