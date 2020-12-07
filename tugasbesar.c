#include <stdio.h>
#include <stdlib.h>

char nama [10];
float Laki (float berat, float tinggi);
float perempuan (float berat, float tinggi);
float BBI;
int main(void)

{
    int h;
    char n;
    float b,t,r,s,BBI;
    do{
    printf("Nama Pengguna   : ");
    scanf("%c", &n);
    printf("$$$$$$$$Pilih Gender$$$$$$$$\n");
    printf("1. Laki-Laki \n");
    printf("2. Perempuan \n");
    printf("Masukan Pilihan 1 Atau 2 Untuk Memilih Gender Anda  : ");
    scanf("%d", &h);
    printf("\n");
    if(h!=1 && h!=2)
        printf("Input Yang Anda Masukan Salah");
    }while(h!=1 && h!=2);

    switch(h)
    case 1 :
        printf("Masukan Berat Badan Anda     : ");
        scanf("%f", &b);
        printf("Masukan Tinggi Badan Anda     : ");
        scanf("%f", &t);
        BBI= (t-110);
        printf("Berat Badan Ideal Anda Adalah %f kg", BBI);
        printf("\n");
        if("Laki-Laki (b)<BBI");
        {printf("Berat Badan Anda Kurang");}
        {if ("Laki-Laki (b)=BBI");
        printf("Berat Badan Anda Ideal");}
        {if ("Laki-Laki (b) > BBI");
        printf("Berat Badan Anda Obesitas");}
        getch();








}


