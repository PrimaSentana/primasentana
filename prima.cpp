#include <iostream>
using namespace std;

int proses(int harga_barang, int jumlah) {
	return harga_barang * jumlah;
	
}

int main() 
{
	string kode_barang;
	double diskon1 = 0.5;
	double diskon2 = 0.3;
	int jumlah;
	cout << "Masukkan Kode Barang : "; cin >> kode_barang;

	if (kode_barang == "b1" or kode_barang == "B1") {
		string nama_barang = "Kaos Polos\n";
		float harga_barang = 400000;
		cout << "Nama Barang : " << nama_barang;
		cout << "Harga Barang : " << harga_barang << endl;

		cout << "Jumlah Beli : "; cin >> jumlah;
		cout << "Total : " << proses(harga_barang, jumlah) << endl;
		

		if (proses(harga_barang, jumlah) >= 1000000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon1);
			float potongan = proses(harga_barang, jumlah) * diskon1;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else if (proses(harga_barang, jumlah) >= 500000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon2);
			float potongan = proses(harga_barang, jumlah) * diskon2;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else {
			cout << proses(harga_barang, jumlah);
		}

	} 
	if (kode_barang == "b2" or kode_barang == "B2") {
		string nama_barang = "Celana Jeans\n";
		float harga_barang = 450000;
		cout << "Nama Barang : " << nama_barang;
		cout << "Harga Barang : " << harga_barang << endl;

		cout << "Jumlah Beli : "; cin >> jumlah;
		cout << "Total : " << proses(harga_barang, jumlah) << endl;


		if (proses(harga_barang, jumlah) >= 1000000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon1);
			float potongan = proses(harga_barang, jumlah) * diskon1;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else if (proses(harga_barang, jumlah) >= 500000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon2);
			float potongan = proses(harga_barang, jumlah) * diskon2;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else {
			cout << proses(harga_barang, jumlah);
		}

	}
	if (kode_barang == "b3" or kode_barang == "B3") {
		string nama_barang = "Kemeja Lengan Panjang\n";
		float harga_barang = 250000;
		cout << "Nama Barang : " << nama_barang;
		cout << "Harga Barang : " << harga_barang << endl;

		cout << "Jumlah Beli : "; cin >> jumlah;
		cout << "Total : " << proses(harga_barang, jumlah) << endl;


		if (proses(harga_barang, jumlah) >= 1000000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon1);
			float potongan = proses(harga_barang, jumlah) * diskon1;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else if (proses(harga_barang, jumlah) >= 500000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon2);
			float potongan = proses(harga_barang, jumlah) * diskon2;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else {
			cout << proses(harga_barang, jumlah);
		}

	}
	if (kode_barang == "b4" or kode_barang == "B4") {
		string nama_barang = "Jaket Nasa\n";
		float harga_barang = 525000;
		cout << "Nama Barang : " << nama_barang;
		cout << "Harga Barang : " << harga_barang << endl;

		cout << "Jumlah Beli : "; cin >> jumlah;
		cout << "Total : " << proses(harga_barang, jumlah) << endl;


		if (proses(harga_barang, jumlah) >= 1000000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon1);
			float potongan = proses(harga_barang, jumlah) * diskon1;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else if (proses(harga_barang, jumlah) >= 500000) {
			float tot_bayar = proses(harga_barang, jumlah) - (proses(harga_barang, jumlah) * diskon2);
			float potongan = proses(harga_barang, jumlah) * diskon2;
			cout << "Potongan : " << potongan;
			cout << "Total Bayar : " << tot_bayar;
		}
		else {
			cout << proses(harga_barang, jumlah);
		}

	}
	else {
		cout << "kode barang salah";
	}

	return 0;
}
