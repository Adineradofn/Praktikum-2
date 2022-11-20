#include <stdio.h>
int main()
{ 
    float a, b, i, j, x, y, Hasil;
    printf("Masukkan nilai a = ");
    scanf("%f", &a);
    printf("Masukkan nilai b = ");
    scanf("%f", &b);
    printf("Masukkan nilai i = ");
    scanf("%f", &i);
    printf("Masukkan nilai j = ");
    scanf("%f", &j);
    printf("Masukkan nilai x = ");
    scanf("%f", &x);
    printf("Masukkan nilai y = ");
    scanf("%f", &y);
    Hasil = (a-b)*(i/j)-(x+y);
    printf("Hasil a Dikurang b Dikali Dengan i Dibagi j Dikurang Dengan x Ditambah y =%.3f", Hasil);
}