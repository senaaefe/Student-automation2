// uygulama1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int main()
{
	int islemsecimi;
	std::cout << "islemlerden birini seciniz" << endl;
	std::cout << "1. Uzunluk donusumu : " << endl;
	std::cout << "2. Not hesaplama :" << endl;
	std::cin >> islemsecimi;
	std::cout << "seciminiz :" << islemsecimi << endl;

	if (islemsecimi == 1) {
		int birimsecimi;
		std::cout << "islemlerden birini seciniz" << endl;
		std::cout << "1. kilometreden metreye donusum :" << endl;
		std::cout << "2. metreden kilometreyeye donusum :" << endl;
		std::cin >> birimsecimi;
		std::cout << "seciminiz : " << birimsecimi << endl;
		float donusturulmekistenenuzunluk;
		if (birimsecimi == 1) {

			std::cout << "kilometre degeri :";
			std::cin >> donusturulmekistenenuzunluk;
			std::cout << donusturulmekistenenuzunluk << "kilometre = " << donusturulmekistenenuzunluk * 1000 << "metredir" << endl;

		}
		else if (birimsecimi == 2) {
			std::cout << "metre degeri : ";
			std::cin >> donusturulmekistenenuzunluk;
			std::cout << donusturulmekistenenuzunluk << "metre = " << donusturulmekistenenuzunluk / 1000 << "kilometredir" << endl;
		}
		else {

			std::cout << "hatali giris " << endl;
		}
	}
	else if (islemsecimi == 2) {
		float odev1, odev2, sinav1, sinav2, vize, final;
		float yilicinot, notortalamasi;
		std::cout << "aldiginiz notun puanini giriniz" << endl;
		std::cout << "1. odev notu : ";
		std::cin >> odev1;
		std::cout << "2. odev notu : ";
		std::cin >> odev2;
		std::cout << "1. kisa sinav notu : ";
		std::cin >> sinav1;
		std::cout << "2. kisa sinav notu : ";
		std::cin >> sinav2;
		std::cout << "vize notu : ";
		std::cin >> vize;
		std::cout << "final notu : ";
		std::cin >> final;
		if (odev1 > 100 || odev2 > 100 || sinav1 > 100 || sinav2 > 100 || vize > 100 || final > 100) {
			std::cout << "hatali giris" << endl;
			return 0;
		}

		yilicinot = (odev1 + odev2 + sinav1 + sinav2 + vize) / 5;
		notortalamasi = (yilicinot + final) / 2;
		std::cout << "notunuz : " << notortalamasi << endl;

		if (notortalamasi < 50) {
			std::cout << "ders harf notunuz: FF";
		}
		else if (notortalamasi >= 50 && notortalamasi < 60) {
			std::cout << "ders harf notunuz: DD";
		}
		else if (notortalamasi >= 60 && notortalamasi < 70) {
			std::cout << "ders harf notunuz: DC";
		}
		else if (notortalamasi >= 70 && notortalamasi < 80) {
			std::cout << "ders harf notunuz: CC";
		}
		else if (notortalamasi >= 80 && notortalamasi < 90) {
			std::cout << "ders harf notunuz: BB";
		}
		else if (notortalamasi >= 90 && notortalamasi < 100) {
			std::cout << "ders harf notunuz: AA";
		}
	}
	else {
		std::cout << "hatali giris" << endl;
	}


	return 0;
}




// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
