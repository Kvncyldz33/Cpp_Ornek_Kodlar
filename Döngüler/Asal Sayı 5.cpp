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
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
	int sayi;
	cout<<"Say� : ";
	cin>>sayi;
	if(Asal(sayi))
	{
		cout<<"Asal Say�";
	}
	else
	{
		cout<<"Asal Say� De�il";
	}
}
