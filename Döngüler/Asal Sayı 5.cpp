#include <iostream>
#include<stdlib.h>
using namespace std;

bool Asal(int sayi)
{
	int sayac=0;
	for(int j=2; j<sayi; j++)
     {
      if(sayi % j == 0)
         {
          sayac++;
          break;
         }
     }
  	if(sayac == 0)
      return true;
 	else
      return false;

}

int main()
{
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	int sayi;
	cout<<"Sayý : ";
	cin>>sayi;
	if(Asal(sayi))
	{
		cout<<"Asal Sayý";
	}
	else
	{
		cout<<"Asal Sayý Deðil";
	}
}
