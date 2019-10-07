#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	do
	{
		int angka, pilihan, pilihan2;
		system("CLS");
		cout << "Program Rentang Angka" << endl << endl;
		system("pause");
		system("CLS");
		cout << "1. Lanjutkan \n2. Keluar" << endl << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		if (pilihan == 1)
		{
			system("CLS");
			cout << "Masukkan Angka 1-100: ";
			cin >> angka;
			if ((angka <= 100) && (angka >= 80))
			{
				cout << "\nGolongan A" << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Program?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					return 0;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if ((angka <= 79) && (angka >= 60))
			{
				cout << "\nGolongan AB" << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Program?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					return 0;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if ((angka <= 59) && (angka >= 40))
			{
				cout << "\nGolongan B" << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Program?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					return 0;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if ((angka <= 39) && (angka >= 20))
			{
				cout << "\nGolongan BC" << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Program?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					return 0;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if ((angka <= 19) && (angka >= 0))
			{
				cout << "\nGolongan C" << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Program?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					return 0;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else
			{
				cout << "\nPilih Angka 1-100!!" << endl << endl;
				system("pause");
			}
		}
		else
		{
			break;
		}
	}
	while(true);
}
