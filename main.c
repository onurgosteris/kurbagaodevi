#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	printf("--------------------------------------------------\n");
	printf("               KURBAGA ODEVI\n");
	printf("               ONUR GOSTERIS\n"); // BA�LIK
	printf("                 170204031\n");
	printf("--------------------------------------------------\n");
	int x,y,s,t,kalan;
	int sayac=0;
	int toplam=0; // DE���KENLER� ATADIK
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
	// BURAYA KADAR KULLANICIDAN DE�ERLER� ALDIK VE KONTROL ETT�RD�K
	kalan=t-(x+y)+1; // KURBAGANIN KAREYE G�DECE�� EN KISA YOL X VE Y D�ZLEMLER�N�N TOPLAMINA E��T OLUYOR
	if(kalan<=0){    // BU Y�ZDEN TOPLAM SUREDEN KAREYE ULASACAGIMIZ KISIMI CIKARIYORUZ VE KAREYE ULA�TI�I ���N +1 YAPIYORUZ ��NK� KAREN�N �ST�NE GELM�� OLDU
		printf("kurbaga kareye ulasamadi"); // E�ER KALAN 0 DAN K���KSE KURBA�A ZATEN KAREYE ULA�AMAMI� OLUYOR VE D�REK 0 ALIYOR
	}
	while(sayac<=kalan){ // KAREYE ULA�TIKTAN SONRA KALAN ADIM HAKKIMIZ KADAR HAREKET EDEB�L�R�Z 
		toplam=toplam+sayac; // O Y�ZDEN ADIM HAKKIMIZA KADAR OLAN SAYILARI TOPLUYORUZ K� G�DEB�LECE��M�Z B�T�N NOKTALAR BUNLAR OLUYOR
		sayac++;
	}
	if(s*s<=kalan){ // E�ER KALAN DE�ER KAREDEN B�Y�KSE MANTIKSAL OLARAK KAREN�N B�T�N NOKTALARINA ULASIR
		printf("tum noktalara ulasir sonuc : %d",s*s);
	}
	else // DE��LSE KALAN ADIM SAYIMIZA KADAR OLAN SAYILARIN TOPLAMI SONUCUMUZ OLDUGU �C�N SONUCU BASTIRIRIZ
		printf("\nsonuc : %d",toplam);
	return 0;
}
