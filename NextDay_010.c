/*
===================================================================================================================
NAMA    : GABRIEL CESAR HUTAGALUNG
NIM     : 11S21010
PRODI   : S1 INFORMATIKA
===================================================================================================================
Program Next Day

{program ini berfungsi untuk menentukan tanggal untuk hari esok berdasarkan tanggal, bulan, dan tahun yang
dimasukkan oleh user.}
===================================================================================================================
Kamus

tanggal     : integer {tanggal yang dimasukkan oleh user}
bulan       : integer {bulan yang dimasukkan oleh user}
tahun       : integer {tahun yang dimasukkan oleh user}
ada31       : integer {mendefenisikan jumlah tanggal pada bulan. Jika 0 berarti bulan itu tidak memiliki tanggal
                       sampai 31. Jika bernilai 1 berarti bulan itu memiliki tanggal sampai 31}
ada30       : integer {mendefenisikan jumlah tanggal pada bulan. Jika 0 berarti bulan itu tidak memiliki tanggal
                       sampai 30. Jika bernilai 1 berarti bulan itu memiliki tanggal sampai 30}
bulan31     : array [1, 3, 5, 7, 8, 10, 12] {bulan-bulan yang memiliki tanggal sampai 31}
bulan30     : array [4, 6, 9, 11] {bulan-bulan yang memiliki tanggal sampai 30}
i           : integer {lokasi bulan pada array}
kabisat     : integer {mendefenisikan apakah tahun yang di input tahun kabisat atau tidak. Jika kabisat bernilai 0
                       berarti tahun itu bukan tahun kabisat. Jika kabisat bernilai 1, berarti tahun itu kabisat.}
str_kabisat : string {sebagai repsesentasi dari kabisat dalam bentuk kata-kata}
bulanhuruf  : string {representasi dari bulan dalam bentuk kata-kata}
===================================================================================================================
Algoritma

ada31 <-- 0
ada30 <-- 0
i <-- 0

while (i < 7) do
    if (bulan = bulan31[i]) then
        ada31 <-- 1
    i <-- i + 1
    <kondisi-STOP>

while (i < 4) do
        if (bulan = bulan30[i]) then
            ada30 <-- 1
        i <-- i + 1
        <kondisi-STOP>

if (((tahun mod 4) = 0) and ((tahun mod 100) /= 0)) then
    kabisat <-- 1
    str_kabisat <-- "adalah tahun Kabisat"

    else if ((tahun % 400) == 0) then
        kabisat <-- 1
        str_kabisat <-- "adalah tahun Kabisat"

    else
        kabisat <-- 0
        str_kabisat <-- "bukan tahun Kabisat"

if ((tanggal < 1) or (bulan < 1) or (bulan > 12) or (tahun < 0) or ((tanggal > 31) and (ada31 = 1))) then
    output("Tanggal yang kamu masukkan tidak valid.")

    else if ((tanggal < 1) or (bulan < 1) or (bulan > 12) or (tahun < 0) or ((tanggal > 30) and (ada30 = 1))) then
        output("Tanggal yang kamu masukkan tidak valid.")

    else if ((tanggal < 1) or (bulan < 1) or (bulan > 12) or (tahun < 0) or ((tanggal > 29) and (bulan = 2) and (kabisat == 1))) then
        output("Tanggal yang kamu masukkan tidak valid.")

    else if ((tanggal < 1) or (bulan < 1) or (bulan > 12) or (tahun < 0) or ((tanggal > 28) and (bulan = 2) and (kabisat == 0))) then
        output("Tanggal yang kamu masukkan tidak valid.")

    else
        depend on (bulan)
            bulan = 1   : bulanhuruf <-- Januari
            bulan = 2   : bulanhuruf <-- Februari
            bulan = 3   : bulanhuruf <-- Maret
            bulan = 4   : bulanhuruf <-- April
            bulan = 5   : bulanhuruf <-- Mei
            bulan = 6   : bulanhuruf <-- Juni
            bulan = 7   : bulanhuruf <-- Juli
            bulan = 8   : bulanhuruf <-- Agustus
            bulan = 9   : bulanhuruf <-- September
            bulan = 10   : bulanhuruf <-- Oktober
            bulan = 11   : bulanhuruf <-- November
            bulan = 12   : bulanhuruf <-- Desember 
        
        output("Baik, tanggal yang kamu input adalah .", tanggal, bulanhuruf, tahun)
        output("Perlu kamu ketahui, bahwa tahun yang kamu input ", str_kabisat)

        if ((bulan == 2) && (kabisat == 1) && (tanggal == 29)) then
            output("Next day dari tanggal yang kamu input adalah 1- - ", bulan + 1, tahun)
        
        else if ((bulan == 2) && (kabisat == 0) && (tanggal == 28)) then
            output("Next day dari tanggal yang kamu input adalah 1- - ", bulan + 1, tahun)
        
        else if ((ada31 == 1) && (tanggal == 31) && (bulan != 12)) then
            output("Next day dari tanggal yang kamu input adalah 1- - ", bulan + 1, tahun)
        
        else if ((tanggal == 31) && (bulan == 12)) then
            output("Next day dari tanggal yang kamu input adalah 1-1- ", tahun + 1)
        
        else if ((ada30 == 1) && (tanggal == 30)) then
            output("Next day dari tanggal yang kamu input adalah 1- - ", bulan + 1, tahun)

        else
            output("Next day dari tanggal yang kamu input adalah - - - ", tanggal + 1, bulan, tahun)
===================================================================================================================
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int tanggal, bulan, tahun;

    printf("------------------------------------------------------------------------\n");
    printf("Halo selamat datang di program ini.\n");

    printf("------------------------------------------------------------------------\n");
    printf("Masukkan tanggalnya     : ");
    scanf("%d", &tanggal);
    printf("Masukkan bulannya       : ");
    scanf("%d", &bulan);
    printf("Masukkan tahunnya       : ");
    scanf("%d", &tahun);
    printf("------------------------------------------------------------------------\n");

    int ada31 = 0;
    int ada30 = 0;
    int bulan31[] = {1, 3, 5, 7, 8, 10, 12};
    int bulan30[] = {4, 6, 9, 11};
    int i;

    for (i = 0; i < 7; i++) {
        if (bulan == bulan31[i]) {
            ada31 = 1;
            break;
        }
    }

    for (i = 0; i < 4; i++) {
        if (bulan == bulan30[i]) {
            ada30 = 1;
            break;
        }
    }

    int kabisat;
    char str_kabisat[100];

    if (((tahun % 4) == 0) && ((tahun % 100) != 0)) {
        kabisat = 1;
        strcpy(str_kabisat, "adalah tahun Kabisat");
    }

    else if ((tahun % 400) == 0) {
        kabisat = 1;
        strcpy(str_kabisat, "adalah tahun Kabisat");
    }

    else {
        kabisat = 0;
        strcpy(str_kabisat, "bukan tahun Kabisat");
    }

    if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 31) && (ada31 == 1))) {
        printf("Tanggal yang kamu masukkan tidak valid. \n");
        printf("------------------------------------------------------------------------\n");
    }

    else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 30) && (ada30 == 1))) {
        printf("Tanggal yang kamu masukkan tidak valid. \n");
        printf("------------------------------------------------------------------------\n");
    }

    else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 29) && (bulan == 2) && (kabisat == 1))) {
        printf("Tanggal yang kamu masukkan tidak valid. \n");
        printf("------------------------------------------------------------------------\n");
    }

    else if ((tanggal < 1) || (bulan < 1) || (bulan > 12) || (tahun < 0) || ((tanggal > 28) && (bulan == 2) && (kabisat == 0))) {
        printf("Tanggal yang kamu masukkan tidak valid. \n");
        printf("------------------------------------------------------------------------\n");
    }

    else {
        char bulanhuruf[10];

        switch (bulan) {
            case 1:
            strcpy(bulanhuruf, "Januari");
            break;

            case 2:
            strcpy(bulanhuruf, "Februari");
            break;

            case 3:
            strcpy(bulanhuruf, "Maret");
            break;

            case 4:
            strcpy(bulanhuruf, "April");
            break;

            case 5:
            strcpy(bulanhuruf, "Mei");
            break;

            case 6:
            strcpy(bulanhuruf, "Juni");
            break;

            case 7:
            strcpy(bulanhuruf, "Juli");
            break;

            case 8:
            strcpy(bulanhuruf, "Agustus");
            break;

            case 9:
            strcpy(bulanhuruf, "September");
            break;

            case 10:
            strcpy(bulanhuruf, "Oktober");
            break;

            case 11:
            strcpy(bulanhuruf, "November");
            break;

            case 12:
            strcpy(bulanhuruf, "Desember");
            break;
        }

        printf("Baik, tanggal yang kamu input adalah %d %s %d.\n", tanggal, bulanhuruf, tahun);

        printf("Perlu kamu ketahui, bahwa tahun yang kamu input %s\n", str_kabisat);
        
        if ((bulan == 2) && (kabisat == 1) && (tanggal == 29)) {
            printf("Next day dari tanggal yang kamu input adalah 1-%d-%d\n", bulan + 1, tahun);
            printf("------------------------------------------------------------------------\n");
        }

        else if ((bulan == 2) && (kabisat == 0) && (tanggal == 28)) {
            printf("Next day dari tanggal yang kamu input adalah 1-%d-%d\n", bulan + 1, tahun);
            printf("------------------------------------------------------------------------\n");
        }
        
        else if ((ada31 == 1) && (tanggal == 31) && (bulan != 12)) {
            printf("Next day dari tanggal yang kamu input adalah 1-%d-%d\n", bulan + 1, tahun);
            printf("------------------------------------------------------------------------\n");
        }

        else if ((tanggal == 31) && (bulan == 12)) {
            printf("Next day dari tanggal yang kamu input adalah 1-1-%d\n",tahun + 1);
            printf("------------------------------------------------------------------------\n");
        }

        else if ((ada30 == 1) && (tanggal == 30)) {
            printf("Next day dari tanggal yang kamu input adalah 1-%d-%d\n",bulan + 1, tahun);
            printf("------------------------------------------------------------------------\n");
        }

        else {
            printf("Next day dari tanggal yang kamu input adalah %d-%d-%d\n",tanggal + 1, bulan, tahun);
            printf("------------------------------------------------------------------------\n");
        }
    }

    return 0;
}
