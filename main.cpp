#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void input() //void untuk memasukkan angka serta operator dan menghitung
{
	float angkasatu, angkadua; 
	char pilihan;
	
	cout.setf(ios_base::fixed, ios_base::floatfield); //untuk menampilkan angka dibelakang koma
	cout<<"Masukkan bilangan 1: ";
	cin>>angkasatu;
	
	cout<<"Masukkan operator (+, -, *, /): "<<pilihan;
	cin>>pilihan;
	
	cout<<"Masukkan bilangan 2: ";
	cin>>angkadua;
	
	if (pilihan == '+') //untuk pengkondisian
	{
		int hasil1=angkasatu+angkadua; //ini untuk menghitung angka yang telah diinput
		cout<<"Hasilnya dari "<<setprecision(0)<<angkasatu<<pilihan<<angkadua<<setprecision(0)<<" adalah "<< hasil1; //setprecision digunakan untuk mengatur brp banyak angka dibelakang koma
	}
	
	else if (pilihan == '-')
	{
		int hasil2=angkasatu-angkadua;
		cout<<"Hasilnya dari "<<setprecision(0)<<angkasatu<<pilihan<<angkadua<<setprecision(0)<<" adalah "<<hasil2;
	}
	
	else if (pilihan == '*')
	{
		int hasil3=angkasatu*angkadua;
		cout<<"Hasilnya dari "<<setprecision(0)<<angkasatu<<pilihan<<angkadua<<setprecision(0)<<" adalah "<<hasil3;
	}
	
	else if (pilihan == '/')
	{
		double hasil4=angkasatu/angkadua;
		cout<<"Hasilnya dari "<<setprecision(0)<<angkasatu<<pilihan<<angkadua<<setprecision(0)<<" adalah "<<setprecision(2)<<hasil4;
	}
}

void lagi () //void ini digunakan jika user ingin mengulang perhitungan
{
	char ulang;
	
	cout<<"\n-------------------------------------------";
	cout<<"\nApakah Anda ingin menghitung lagi? (Y/T): ";
	cin>>ulang;
	
	if (ulang == 'Y')
	{
		cout<<"-------------------------------------------"<<endl;
		input(); //digunakan untuk mengeprint void input
		lagi();
	}
	
	else if (ulang == 'T')
	{
		cout<<"-------------------------------------------";
		cout<<"\nPerhitungan Anda selesai.";
	}
}

int main ()
{
	input(); //memanggil void agar bisa ditampilkan/diprint
	lagi();
}
