#include <iostream> // Standart giriþ/çýkýþ iþlemlerini gerçekleþtirmek için gerekli olan iostream kütüphanesini programýnýza dahil eder.
using namespace std; // std isim alanýnda yer alan fonksiyonlarý ve sýnýflarý doðrudan kullanmak için yazýlýr. Böylece std:: ön ekini her seferinde kullanmak zorunda kalmayýz.
int main()
{
	for(int i = 1; i <= 30; i++) // 1'den 30'a kadar (30 dahil) olan sayýlarý döngüyle tek tek kontrol et.
	{
		if(i % 3 == 0) // Eðer sayý 3'e tam bölünebiliyor ise (kalamný 0 ise)
			cout << i << endl; // 3'e bölünebilen sayýlarý ekranda yaz
	}

	return 0; // Programýn hatasýz çalýþtýðýný ve düzgün bir þekilde tamamlandýðýný gösterir.
}
