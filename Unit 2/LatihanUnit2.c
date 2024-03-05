#include <stdio.h>

int transaksi;
int nominal;
int jumlah=0;

int main(){
    printf("Isi jumlah transaksi : \n");
    scanf("%d", &transaksi);
    if(transaksi<=0){
            printf("Tidak melakukan transaksi sekarang ini.");
    } else{
        printf("Isi nominal : \n");
        for(int i=0;i<transaksi;i++){
            scanf("%d",&nominal);
            jumlah += nominal;
        }
        printf("Pengeluaran saat ini : %d ",jumlah);
    }
    return 0;

}