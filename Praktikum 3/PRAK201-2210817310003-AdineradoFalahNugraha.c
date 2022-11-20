#include <stdio.h>
int main (){
char name[50], tempat[50], alamat[50], nim[50], kelas[50], hobi[50], no[50];

printf("Nama : ");
gets(name);

printf("NIM : ");
scanf("%s", &nim);

printf("Kelas Paralel : ");
scanf("%s", &kelas);

printf("Tempat/Tanggal Lahir : ");
scanf("%s", tempat);

printf("Alamat : ");
scanf("%s", alamat);

printf("Hobby : ");
scanf("%s", hobi);

printf("No.Hp : ");
scanf("%s", no);

return 0;
}