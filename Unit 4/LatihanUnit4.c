#include<stdio.h>

int sisi;

void keliling(int x){
    int hasil =4*x;
    printf("Keliling= %d\n",hasil);
}

void luas(int x){
    int hasil =x*x;
    printf("Luas= %d\n",hasil);
}

void volume(int x){
    int hasil =x*x*x;
    printf("Volume= %d\n",hasil);
}

int main(){
    printf("Isi panjang sisi : \n");
    scanf("%d",&sisi);
    printf("Hasil : \n\n");
    keliling(sisi);
    luas(sisi);
    volume(sisi);
}