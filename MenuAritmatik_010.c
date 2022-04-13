/*
===================================================================================================================
NAMA    : GABRIEL CESAR HUTAGALUNG
NIM     : 11S21010
PRODI   : S1 INFORMATIKA
===================================================================================================================
Program Menu Aritmatik

{program ini berfungsi untuk melakukan operasi matematika sederhana dengan menggunakan 2 operan a dan b. Dimana}
{user dapat menentukan operasi apa yang akan dilakukan.}
===================================================================================================================
Kamus

operator    : integer {input angka yang akan digunakan sebagai pilihan operator pada operasi matematis pada 
              program}
a           : float {input angka pertama yang akan dilakukan operasi}
b           : float {input angka pertama yang akan dilakukan operasi}
hasil       : float {hasil yang akan menjadi output}
===================================================================================================================
Algoritma

output("Halo selamat datang di program ini.")
output("Berikut operasi yang dapat dilakukan oleh program ini.")
output("    1. Penjumlahan")
output("    2. Perkalian")
output("    3. Pengurangan")
output("    4. Pembagian")
output("Masukkan nomor operasi yang ingin kamu lakukan : ")
input(operator)

if ((operator > 4) or (operator < 1)) then
    output("Invalid operator. Masukkan operator yang tepat.")

else
    output("Masukkan angka pertama : ")
    input(a)
    output("Masukkan angka kedua : ")
    input(b)

    depend on (operator)
        operator = 1    : hasil <-- a + b
                          output("Hasilnya adalah ", hasil)
        
        operator = 2    : hasil <-- a * b
                          output("Hasilnya adalah ", hasil)
        
        operator = 3    : hasil <-- a - b
                          output("Hasilnya adalah ", hasil)

        operator = 4    : hasil <-- a / b
                          output("Hasilnya adalah ", hasil)

===================================================================================================================
*/

#include <stdio.h>

int main () {
    int operator;
    double a, b, hasil;

    printf("-----------------------------------------------------------------\n");
    printf("Halo selamat datang di program ini.\n");
    printf("-----------------------------------------------------------------\n");
    printf("Berikut operasi yang dapat dilakukan oleh program ini.\n");
    printf("    1. Penjumlahan\n");
    printf("    2. Perkalian\n");
    printf("    3. Pengurangan\n");
    printf("    4. Pembagian\n");
    printf("-----------------------------------------------------------------\n");
    printf("Masukkan nomor operasi yang ingin kamu lakukan : ");
    scanf("%d", &operator);

    if ((operator > 4) || (operator < 1)) {
        printf("-----------------------------------------------------------------\n");
        printf("Invalid operator. Masukkan operator yang tepat!\n");
        printf("-----------------------------------------------------------------\n");
    }
    
    else {
        printf("-----------------------------------------------------------------\n");
        printf("Masukkan angka pertama  : ");
        scanf("%lf", &a);
        printf("Masukkan angka kedua    : ");
        scanf("%lf", &b);
        printf("-----------------------------------------------------------------\n");
        
        switch (operator) {
            case 1:
                hasil = a + b;
                printf("Hasilnya adalah         : %0.2lf\n", hasil);
                printf("-----------------------------------------------------------------\n");
                break;

            case 2:
                hasil = a * b;
                printf("Hasilnya adalah         : %0.2lf\n", hasil);
                printf("-----------------------------------------------------------------\n");
                break;

            case 3:
                hasil = a - b;
                printf("Hasilnya adalah         : %0.2lf\n", hasil);
                printf("-----------------------------------------------------------------\n");
                break;

            default:
                hasil = a / b;
                printf("Hasilnya adalah         : %0.2lf\n", hasil);
                printf("-----------------------------------------------------------------\n");
                break;
        }
    }

    return 0;
}