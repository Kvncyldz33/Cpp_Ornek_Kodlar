#include <iostream> // Standart giri�/��k�� i�lemlerini ger�ekle�tirmek i�in gerekli olan iostream k�t�phanesini program�n�za dahil eder.
using namespace std; // std isim alan�nda yer alan fonksiyonlar� ve s�n�flar� do�rudan kullanmak i�in yaz�l�r. B�ylece std:: �n ekini her seferinde kullanmak zorunda kalmay�z.
int main()
{
	for(int i = 1; i <= 30; i++) // 1'den 30'a kadar (30 dahil) olan say�lar� d�ng�yle tek tek kontrol et.
	{
		if(i % 3 == 0) // E�er say� 3'e tam b�l�nebiliyor ise (kalamn� 0 ise)
			cout << i << endl; // 3'e b�l�nebilen say�lar� ekranda yaz
	}

	return 0; // Program�n hatas�z �al��t���n� ve d�zg�n bir �ekilde tamamland���n� g�sterir.
}
