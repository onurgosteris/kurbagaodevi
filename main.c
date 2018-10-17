#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	printf("--------------------------------------------------\n");
	printf("               KURBAGA ODEVI\n");
	printf("               ONUR GOSTERIS\n"); // BAÞLIK
	printf("                 170204031\n");
	printf("--------------------------------------------------\n");
	int x,y,s,t,kalan;
	int sayac=0;
	int toplam=0; // DEÐÝÞKENLERÝ ATADIK
	printf("X degerini girin : ");
	scanf("%d",&x);
	while(x<0 || 100<x){
		printf("x degeri 0<= x <=100 olmalidir tekrar girin : ");
		scanf("%d",&x);
	}
	printf("\nY degerini girin : ");
	scanf("%d",&y);
	while(y<0 || 100<y){
		printf("y degeri 0<= y <=100 olmalidir tekrar girin : ");
		scanf("%d",&y);
	}
	printf("\nKare uzunlugunu girin : ");
	scanf("%d",&s);
		while(s<0 || 100<s){
		printf("s degeri 0<= s <=100 olmalidir tekrar girin : ");
		scanf("%d",&s);
	}
	printf("\nSureyi girin : ");
	scanf("%d",&t);
	while(t<0 || 400<t){
		printf("t degeri 0<= t <=400 olmalidir tekrar girin : ");
		scanf("%d",&t);
	}
	// BURAYA KADAR KULLANICIDAN DEÐERLERÝ ALDIK VE KONTROL ETTÝRDÝK
	kalan=t-(x+y)+1; // KURBAGANIN KAREYE GÝDECEÐÝ EN KISA YOL X VE Y DÜZLEMLERÝNÝN TOPLAMINA EÞÝT OLUYOR
	if(kalan<=0){    // BU YÜZDEN TOPLAM SUREDEN KAREYE ULASACAGIMIZ KISIMI CIKARIYORUZ VE KAREYE ULAÞTIÐI ÝÇÝN +1 YAPIYORUZ ÇÜNKÜ KARENÝN ÜSTÜNE GELMÝÞ OLDU
		printf("kurbaga kareye ulasamadi"); // EÐER KALAN 0 DAN KÜÇÜKSE KURBAÐA ZATEN KAREYE ULAÞAMAMIÞ OLUYOR VE DÝREK 0 ALIYOR
	}
	while(sayac<=kalan){ // KAREYE ULAÞTIKTAN SONRA KALAN ADIM HAKKIMIZ KADAR HAREKET EDEBÝLÝRÝZ 
		toplam=toplam+sayac; // O YÜZDEN ADIM HAKKIMIZA KADAR OLAN SAYILARI TOPLUYORUZ KÝ GÝDEBÝLECEÐÝMÝZ BÜTÜN NOKTALAR BUNLAR OLUYOR
		sayac++;
	}
	if(s*s<=kalan){ // EÐER KALAN DEÐER KAREDEN BÜYÜKSE MANTIKSAL OLARAK KARENÝN BÜTÜN NOKTALARINA ULASIR
		printf("tum noktalara ulasir sonuc : %d",s*s);
	}
	else // DEÐÝLSE KALAN ADIM SAYIMIZA KADAR OLAN SAYILARIN TOPLAMI SONUCUMUZ OLDUGU ÝCÝN SONUCU BASTIRIRIZ
		printf("\nsonuc : %d",toplam);
	return 0;
}
