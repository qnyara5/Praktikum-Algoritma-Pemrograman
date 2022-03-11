/* Nama file    : TarifPLN.c*/
/* Deskripsi    : Menghitung besarnya tarif listrik yang dikenakan,
                kemudian menampilkan besarnya tarif tersebut di layar*/
/* Nama         : Tiara Fitra Ramadhani Siregar*/
/* NIM          : 24060121120008*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int goltrf;
    int daya;
    int p;
    int trf;

    /*Algoritma*/
    printf("============= Menghitung Tarif PLN ============\n");
    printf("===============================================\n");

    /* Input */
    printf("\nMasukan golongan : ");
    scanf("\n %d", &goltrf);
    printf("\nMasukan pemakaian daya listrik (kWH): ");
    scanf("\n %d", &daya);

    switch (goltrf){
        case 1 : p = 1000;
        break;
        case 2 : p = 2000;
        break;
        default:
        printf("\n===============================================\n");
        printf("\nGolongan tidak tersedia\n");
        printf("\n===============================================\n");
        break;
    }
     if (0 < daya && daya <= 100){
        trf = p * 100;
     } else if (100 < daya && daya < 1000){
        trf = p * daya;
     } else {
         trf = p * daya * 1.1;
        }

    printf("\n===============================================\n");
    printf("\nTarif PLN Rp. %d \n", trf);
    printf("\n===============================================\n");

    return 0;



}


