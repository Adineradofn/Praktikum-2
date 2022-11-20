#include<stdio.h>
int main()
{
float nilai1, nilai2, Hasil;
printf("Masukkan Nilai Pertama :");
scanf("%f", &nilai1);
printf("Masukkan Nilai Kedua : ");
scanf("%f", &nilai2);
Hasil = nilai1 + nilai2;
printf("Hasil Nilai Pertama \"%.2f\" dan Nilai Kedua \"%.1f\" Adalah \"%.2f\"", nilai1, nilai2, Hasil);
printf("\n\n");

}
