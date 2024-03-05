#include <stdio.h>

int v1,v2;
int s1,s2;
int t1,t2;

int main(){
    printf("Isi jarak dan waktu \n");
    scanf("%d",&s1);
    scanf("%d",&t1);

    printf("Isi kecepatan dan waktu \n");
    scanf("%d",&v1);
    scanf("%d",&t2);

    printf("Isi jarak dan kecepatan \n");
    scanf("%d",&s2);
    scanf("%d",&v2);

    float V = (float) s1/t1;
    float S = (float) v1*t2;
    float T = (float) s2/v2;

    printf("Kecepatan : ");
    printf("%.2f\n",V);
    printf("Jarak : ");
    printf("%.2f\n",S);
    printf("Waktu : ");
    printf("%2.f\n",T);

}