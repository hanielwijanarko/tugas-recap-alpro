#include <stdio.h>

int jumlah=0;
int elemen;

int main(){
    printf("Isi jumlah elemen array : \n");
    scanf("%d", &elemen);

    int array[elemen];

    printf("Isi volume array : \n");
    for(int i=0;i<elemen;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<elemen;i++){
        jumlah += array[i];
    }
    printf("Hasil : %d ",jumlah);
}