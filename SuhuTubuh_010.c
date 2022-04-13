/*
===================================================================================================================
NAMA	: GABRIEL CESAR HUTAGALUNG
NIM		: 11S21010
PRODI	: S1 INFORMATIKA
===================================================================================================================
Program Suhu Tubuh

{program ini bergfungsi untuk melakukan identifikasi suhu tubuh T dan memberikan output sesuai dengan klasifikasi}
{suhunya}
===================================================================================================================
Kamus

T : float {suhu yang akan dimasukkan oleh user}
===================================================================================================================
Algoritma

output("Masukkan nilai suhu (Celcius) : ")
input(T)

if (T < 36) then
	output("Kamu mengalami hipotermia.")

else if ((T <= 37.5) and (T >= 36)) then
	output("Suhu tubuh kamu normal.")

else if ((T > 37.5) && (T <= 39)) then
	output("Kamu demam.")

else
	output("Kamu menderita hipertermia.")
===================================================================================================================
*/

#include <stdio.h>

int main () {
	double T;
	
	printf("Masukkan nilai suhu (Celcius) : ");
	scanf("%lf", &T);

	if (T < 36) {
		printf("Kamu mengalami hipotermia.\n");
	}

	else if ((T <= 37.5) && (T >= 36)) {
		printf("Suhu tubuh kamu normal.\n");
	}

	else if ((T > 37.5) && (T <= 39)) {
		printf("Kamu demam.\n");
	}

	else {
		printf("Kamu menderita hipertermia.\n");
	}

	return 0;
}
