#include <iostream>
using namespace std;

int main ()
{
	struct mahasiswa
	{
		char nim[9];
		char nama[15];
		float nilai;
	};
	
	mahasiswa mahasiswa;

	cout << "Mahasiswa NIM: ";
	cin >> mahasiswa.nim;
	cout << "Masukkan Nama: ";
	cin >> mahasiswa.nama;
	cout << "Masukkan Nilai Akhir: ";
	cin >> mahasiswa.nilai;
	cout << "\nData yang diinput adalah: \n\n";
	cout << "NIM: " << mahasiswa.nim << endl;
	cout << "Nama: " << mahasiswa.nama << endl;
	cout << "Nilai Akhir: " << mahasiswa.nama << endl;
	cout << "Nilai Akhir: " << mahasiswa.nilai << endl;
	
	return 0;
}

struct sisw
{
	int no_induk;
	string nama;
	float nilai;
};

int main()
{
	
	siswa Arkan, Lukas;
	Arkan.no_induk = 1;
	Aran.nama = "Arkan Januar";
	Arkan.nilai = 75.5;
	Lukas.no_induk = 2;
	Lukas.nama = "Lukas Laksono";
	Arkan.nilai = 89.9;
	
	cout << Arkan.nama << " dengan nomor induk " << Arkan.no_induk << " mendapatkan nilai " << Arkan.nilai << endl;
	cout << Lukas.nama << " dengan nomor induk " << Lukas.no_induk << " mendapatkan nilai " << Lukas.nilai << endl;
	return 0;
}

struct siswa
{
	int no_induk;
	string nama;
	float nilai;
};

int main ()
{
	siswa Jery = {1, "Jery Januar", 85.5};
	siswa Tono = {2, "Tono Laksono", 89,9};
	cout << Jery.nama << " mendapatkan nilai " << Jery.nilai << endl;
	cout << Tono.nama << " mendapatkan niilai " << Tono.nilai << endl;
	return 0;
}

struct datamahasiswa
{
	string name, npm, jurusan;
};

struct nilai
{
	float nilai_1, nilai_2;
};

struct 
{
	dataMahasiswa Data;
	nilai Nilai;
}mahasiswa;

int main()
{
	cout << "Masukkan Nama Mahasiswa: ";
	getline(cin,mahasiswa.Data.name);
	
	cout << "Masukkan NPM Mahasiswa: ";
	cin >> mahasiswa.Data.npm;
	
	cout << "Masukkan Jurusan Mahasiswa: ";
	cin >> mahasiswa.Data.jurusan;
	
	cout << "Masukkan Nilai 1: ";
	cin >> mahasiswa.Nilai.nilai_1;
	
	cout << mahasiswa.Data.name<< ' '
		 << mahasiswa.Data.npm << ' '
		 << mahasiswa.Data.jurusan << ' '
		 << mahasiswa.Nilai.nilai_1;
		 
	return 0;
}

struct Calculator
{
	int add(int num1, int num2)
	{
		return num1 + num2;
		
	}
	
	int multiply(int num1, int num2)
	{
		return num1 * num2;;
	}
};

int main ()
{
	Calculator calculator;
	int num1, num2;
	
	cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	cout << num1 << " + " << num2 << " + " << calculator.add(num1,num2) << endl;
	cout << num1 << " * " << num2  << " = " << calculator.nultiply(num1,num2);
	return 0;
}
