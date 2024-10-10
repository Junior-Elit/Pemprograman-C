/*Mengisi Nilai ke Dalam Variabel Bertipe String*/
/*(Contoh Kode yg Salah)*/
#include<stdio.h>
int main() {
char os[6];
os = "Linux"; /* baris ini menyebabkan kesalahan */
printf("Nilai variabel os: %s\n", os);
return 0;
}