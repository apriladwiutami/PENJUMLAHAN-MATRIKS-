no#include <iostream>
using namespace std;
	int a,b,c,d,angka=0;
        int mp[100][100];
	int m1[100][100];
	int m2[100][100];
	int (*pm1)[100] = m1;
	int (*pm2)[100] = m2;

void jumlah(int*);
void input(int*);
void hasil(int*);

int main()
{ 
	cout << "Masukkan jumlah baris matriks pertama: ";
	cin >> a;
	cout << "Masukkan jumlah kolom matriks pertama: ";
	cin >> b;
	cout << "Masukkan jumlah baris matriks kedua: ";
	cin >> c;
	cout << "Masukkan jumlah kolom matriks kedua: ";
	cin >> d;	

	if (a != c || b != d) 
		cout <<"Matriks tidak dapat dijumlahkan "<<endl;

	else 
	{
		input(&angka);
    	
    	//operasi jumlah

    	for(int i = 0; i < c; i++)
    	{
      		jumlah(&i);
    	}


    	cout << "Hasil penjumlahan matriks: "<<endl;
    	
    	for(int i = 0; i < c; i++)
	{
      		hasil(&i);
      		cout << endl;
   	}
	}
}

void jumlah (int *jum)
{
	for(int j = 0; j < d; j++)
	
    	for(int i = 0; i < a; i++)
    	{
    		for(int j = 0; j < b; j++)
