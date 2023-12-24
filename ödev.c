#include <stdio.h>

struct Teklif{
    char teklifverenkisi[100];

    double miktar;
};

void acikarttirma(struct Teklif *enYuksekTeklif, struct Teklif yeniTeklif){

    if(yeniTeklif.miktar > enYuksekTeklif->miktar){
        *enYuksekTeklif = yeniTeklif;
        printf("Var mi arttiran? Teklifi yapan kisinin adi:%s\tYaptigi teklif:%lf$\n",enYuksekTeklif->teklifverenkisi,enYuksekTeklif->miktar);
    }
    else{
        printf("Teklifiniz daha yuksek olmali.\n");
    }
}

int main () {

    struct Teklif enYuksekTeklif = {"",1987};
    struct Teklif yeniTeklif;

    printf("\t\t\t**********Acik Artirmaya Hosgeldiniz!**********\n\n");
    
    printf("Acik Arttirma Nasil Yapilir?\nIlk adinizi girin sonra teklifi verin.\n\n");
    printf("**********Messi nin Dunya Kupasi Finalinde Giydigi Kramponlar icin Acik Arttirma**********\n\n");


    do{
        printf("Acik arttirma %lf$ den basladi!\n\n",enYuksekTeklif.miktar);

        printf("Teklifinizi girin(2 kere -1 e basarak cikabilirsiniz):");
        scanf("%s %lf",yeniTeklif.teklifverenkisi,&yeniTeklif.miktar);


        if(yeniTeklif.miktar < 0)
            printf("Acik arttirma sona erdi. En yuksek teklifi yapan kisi:%s\tOdeyecigi miktar:%lf$\n",enYuksekTeklif.teklifverenkisi,enYuksekTeklif.miktar);
        else{
            acikarttirma(&enYuksekTeklif,yeniTeklif);
        }
    }while(yeniTeklif.miktar >= 0);
    

    return 0;
}
