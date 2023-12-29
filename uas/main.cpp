#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	int second;
	double a, hasil;
	char history, lanjut, ganti, exit;
	string first;
	string currency[] = { "USD", "EUR", "YEN", "YUAN", "RP", "Ringgit" };
	vector<double> konvert;
	vector<double> input_a;
	vector<string> h_konv;
	vector<string> in_first;

	do
	{
		system("cls");
		cout << "==========================" << endl;
		cout << "|     Curs Converter     |" << endl;
		cout << "==========================" << endl;
		cout << "|  1. USD                |" << endl;
		cout << "|  2. EUR                |" << endl;
		cout << "|  3. YEN                |" << endl;
		cout << "|  4. YUAN               |" << endl;
		cout << "|  5. RP                 |" << endl;
		cout << "|  6. Ringgit            |" << endl;
		cout << "==========================" << endl;

		do
		{
			cout << "\n(input curs di atas dengan KAPITAL...)\n";
			cout << "Apa Mata Uang mu sekarang? : ";
			cin >> first;
			in_first.push_back(first);


			do
			{
				cout << "\n(input dengan angka)" << endl;
				cout << "Pilihlah mata uang yang ingin ditukarkan : ";
				cin >> second;
				cout << endl;

				if (first == "USD")
				{
					switch (second)		//USD
					{
					case 2:cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.95;
						cout << "Nilai		: " << hasil << ' ' << currency[1] << endl;
						h_konv.push_back(currency[1]);
						konvert.push_back(hasil);
						break;
					case 3: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 149.93;
						cout << "Nilai		: " << hasil << ' ' << currency[2] << endl;
						h_konv.push_back(currency[2]);
						konvert.push_back(hasil);
						break;
					case 4: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 7.32;
						cout << "Nilai		: " << hasil << ' ' << currency[3] << endl;
						h_konv.push_back(currency[3]);
						konvert.push_back(hasil);
						break;
					case 5: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 16000;
						cout << "Nilai		: " << hasil << ' ' << currency[4] << endl;
						h_konv.push_back(currency[4]);
						konvert.push_back(hasil);
						break;
					case 6: cout << "Mata Uang Kamu USD...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 4.78;
						cout << "Nilai		: " << hasil << ' ' << currency[5] << endl;
						h_konv.push_back(currency[5]);
						konvert.push_back(hasil);
						break;
					default:
						break;
					}
				}

				else if (first == "EUR")
				{
					switch (second)		//EUR
					{
					case 1: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 1.06;
						cout << "Nilai		: " << hasil << ' ' << currency[0] << endl;
						h_konv.push_back(currency[0]);
						konvert.push_back(hasil);
						break;
					case 3: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 158.62;
						cout << "Nilai		: " << hasil << ' ' << currency[2] << endl;
						h_konv.push_back(currency[2]);
						konvert.push_back(hasil);
						break;
					case 4: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 7.74;
						cout << "Nilai		: " << hasil << ' ' << currency[3] << endl;
						h_konv.push_back(currency[3]);
						konvert.push_back(hasil);
						break;
					case 5: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 16900;
						cout << "Nilai		: " << hasil << ' ' << currency[4] << endl;
						h_konv.push_back(currency[4]);
						konvert.push_back(hasil);
						break;
					case 6: cout << "Mata Uang Kamu EUR...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 5.06;
						cout << "Nilai		: " << hasil << ' ' << currency[5] << endl;
						h_konv.push_back(currency[5]);
						konvert.push_back(hasil);
						break;
					default:
						break;
					}
				}

				else if (first == "YEN")
				{
					switch (second)		//YEN
					{
					case 1: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.0067;
						cout << "Nilai		: " << hasil << ' ' << currency[0] << endl;
						h_konv.push_back(currency[0]);
						konvert.push_back(hasil);
						break;
					case 2: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.0063;
						cout << "Nilai		: " << hasil << ' ' << currency[1] << endl;
						h_konv.push_back(currency[1]);
						konvert.push_back(hasil);
						break;
					case 4: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.049;
						cout << "Nilai		: " << hasil << ' ' << currency[3] << endl;
						h_konv.push_back(currency[3]);
						konvert.push_back(hasil);
						break;
					case 5: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 106.3;
						cout << "Nilai		: " << hasil << ' ' << currency[4] << endl;
						h_konv.push_back(currency[4]);
						konvert.push_back(hasil);
						break;
					case 6: cout << "Mata Uang Kamu YEN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.032;
						cout << "Nilai		: " << hasil << ' ' << currency[5] << endl;
						h_konv.push_back(currency[5]);
						konvert.push_back(hasil);
						break;
					default:
						break;
					}
				}

				else if (first == "YUAN")
				{
					switch (second)		//YUAN
					{
					case 1: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.14;
						cout << "Nilai		: " << hasil << ' ' << currency[0] << endl;
						h_konv.push_back(currency[0]);
						konvert.push_back(hasil);
						break;
					case 2: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.13;
						cout << "Nilai		: " << hasil << ' ' << currency[1] << endl;
						h_konv.push_back(currency[1]);
						konvert.push_back(hasil);
						break;
					case 3: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 20.45;
						cout << "Nilai		: " << hasil << ' ' << currency[2] << endl;
						h_konv.push_back(currency[2]);
						konvert.push_back(hasil);
						break;
					case 5: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 2175.38;
						cout << "Nilai		: " << hasil << ' ' << currency[4] << endl;
						h_konv.push_back(currency[4]);
						konvert.push_back(hasil);
						break;
					case 6: cout << "Mata Uang Kamu YUAN...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.65;
						cout << "Nilai		: " << hasil << ' ' << currency[5] << endl;
						h_konv.push_back(currency[5]);
						konvert.push_back(hasil);
						break;
					default:
						break;
					}
				}

				else if (first == "RP")
				{
					switch (second)		//RP
					{
					case 1: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.000063;
						cout << "Nilai		: " << hasil << ' ' << currency[0] << endl;
						h_konv.push_back(currency[0]);
						konvert.push_back(hasil);
						break;
					case 2: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.00006;
						cout << "Nilai		: " << hasil << ' ' << currency[1] << endl;
						h_konv.push_back(currency[1]);
						konvert.push_back(hasil);
						break;
					case 3: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.0094;
						cout << "Nilai		: " << hasil << ' ' << currency[2] << endl;
						h_konv.push_back(currency[2]);
						konvert.push_back(hasil);
						break;
					case 4: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.00046;
						cout << "Nilai		: " << hasil << ' ' << currency[3] << endl;
						h_konv.push_back(currency[3]);
						konvert.push_back(hasil);
						break;
					case 6: cout << "Mata Uang Kamu RP...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.0003;
						cout << "Nilai		: " << hasil << ' ' << currency[5] << endl;
						h_konv.push_back(currency[5]);
						konvert.push_back(hasil);
						break;
					default:
						break;
					}
				}

				else
				{
					switch (second)		//Ringgit
					{
					case 1: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.21;
						cout << "Nilai		: " << hasil << ' ' << currency[0] << endl;
						h_konv.push_back(currency[0]);
						konvert.push_back(hasil);
						break;
					case 2: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 0.20;
						cout << "Nilai		: " << hasil << ' ' << currency[1] << endl;
						h_konv.push_back(currency[1]);
						konvert.push_back(hasil);
						break;
					case 3: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 31.45;
						cout << "Nilai		: " << hasil << ' ' << currency[2] << endl;
						h_konv.push_back(currency[2]);
						konvert.push_back(hasil);
						break;
					case 4: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 1.54;
						cout << "Nilai		: " << hasil << ' ' << currency[3] << endl;
						h_konv.push_back(currency[3]);
						konvert.push_back(hasil);
						break;
					case 5: cout << "Mata Uang Kamu Ringgit...." << endl;
						cout << "Nilai mata uang : ";
						cin >> a;
						input_a.push_back(a);
						hasil = a * 3345.21;
						cout << "Nilai		: " << hasil << ' ' << currency[4] << endl;
						h_konv.push_back(currency[4]);
						konvert.push_back(hasil);
						break;
					default:
						break;
					}
				}
				cout << endl;
				cout << "Apakah ingin melanjukan dengan mata uang yang sama? <y/n> : ";
				cin >> lanjut;

				if (lanjut == 'Y')
				{
					in_first.push_back(first);
				}

			} while (lanjut == 'Y');

			cout << "Apakah ingin berganti mata uang? <y/n> : ";
			cin >> ganti;

		} while (ganti == 'Y');

		cout << "Apakah ingin melihat history? <y/n> : ";
		cin >> history;

		if (history == 'Y')
		{
			system("cls");
			for (int i = 0; i < input_a.size(); i++)
			{
				
				cout << "Dari mata uang " << in_first[i] << endl;
				cout << "Nilai uang : " << input_a[i] << ' ' << endl;
				cout << "Nilai konvert : " << konvert[i] << ' ' << h_konv[i] << "\n\n";

			}
		}

		cout << "\nExit? <y/n> : ";
		cin >> exit;

	} while (exit == 'Y');

	system("pause");

	return 0;
}