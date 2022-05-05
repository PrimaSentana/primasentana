#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "conio.h"
using namespace std;


void regis() {
    string username, password, pass1;
	cout << "Pilih Username      : "; cin >> username;
	cout << "Pilih Password      : "; cin >> password;
    cout << "======================\n";
    cout << "Verifikasi Password : "; cin >> pass1;
}

//just function
void choises() {
    cout << "1. Luas Persegi Panjang\n";
    cout << "2. Luas Segitiga\n";
    cout << "3. Luas Lingkaran (diketahui diameter) \n";
    cout << "=================================\n";
}

//------------------------------------------------------------------------------------------

//function persegi panjang
int persegi_panjang(int x, int y) {
    return x * y;
}

//function triangle
int luas_segitiga(int x, int y) {
    return 0.5 * x * y;
}

//function luas lingkaran (diketahui diameter)
float luas_lingkaran(float d) {
    int pi = 22 / 7;
    int r = d * 0.5;
    int rTwo = r * r;
    int hasil = 22 / 7 * r * r;
    cout << "Jari-jari (r) = " << " Diameter " << " : 2\n";
    cout << "              = " << d << " : 2\n";
    cout << "              = " << r << endl;
    //-------------------------------------------------------
    cout << "Hasil: \n";
    cout << "= " << "22/7" << " x " << r << "^2\n";
    cout << "= " << "22/7" << " x " << rTwo << endl;
    cout << "= " << hasil;
    return 0;
}

//---------------------------------------------------------------------------------------------

//main function
int kalkulator()
{
    cout << "--==Calculation Program==--" << endl;

    cout << "===========================\n";

    //var persegi, triangel
    int choice, x, y;



    //var lingkaran
    float pi = 3.14, d, r;
    choises();
    cout << "Pilih metode : ";  cin >> choice;
    if (choice == 1) {
        cout << "Rumus : panjang x lebar\n";
        cout << "==========================\n";
        cout << "masukkan nilai x dan y: \n";
        cout << "Panjang: "; cin >> x;
        cout << "Lebar: "; cin >> y;
        cout << "==========================\n";
        cout << "Hasil dari " << x << " * " << y << " = " << persegi_panjang(x, y);
       

    }
    else if (choice == 2) {
        cout << "Rumus : 1/2 x alas x tinggi\n";
        cout << "===============================\n";
        cout << "Enter Value Below:  \n";
        cout << "Alas: "; cin >> x;
        cout << "Tinggi: "; cin >> y;
        cout << "===============================\n";
        cout << "Hasil dari 0.5 x " << x << " x " << y << " = " << luas_segitiga(x, y);
        
    }
    else if (choice == 3) {
        cout << "Enter Value: \n";
        cout << "Diameter: "; cin >> d;
        cout << "Rumus = 22/7 x r2\n";
        luas_lingkaran(d);
        
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}
//==================================================================


//fungsi login
bool login() {
	string username, password, user, pass;

	cout << "Masukkan Username : "; cin >> username;
	cout << "Masukkan Password : "; cin >> password;
	

	ifstream read("./" + username + ".txt");
	getline(read, user);
	getline(read, pass);

	if (user == username && pass == password) {
		return true;
	}
	else {
		return false;
	}
}

//fungsi utama
int main() {
	int choice;
	cout << "-----=====Pilih metode ======-----\n";
	cout << "1. Login\n";
	cout << "2. Registrasi\n";
	cout << "==================================\n";
	cout << "--->>>> : "; cin >> choice; 

	if (choice == 1) 
	{
		bool status = login();
        char i;

		if (!status) {
			cout << "Username atau Password Salah !\n";
            cout << "Try Again? y/n : "; cin >> i;

            if (i == 'y' || i == 'Y') {
                system("CLS");
                main();
            }
            else {
                cout << "Thank You !" << endl;
            }
		}
		else 
		{
			cout << "Berhasil Login !\n";
            system("CLS");
            kalkulator();
		}
		return 0;
	}
	else if (choice == 2) 
	{
		string username, password, pass1;
		cout << "Pilih Username      : "; cin >> username;
		cout << "Pilih Password      : "; cin >> password;
        
        cout << "================================\n";
        cout << "Verifikasi Password : "; cin >> pass1;
        cout << "================================\n";
        
        cout << "Registrasi Berhasil !" << endl;

        if (pass1 == password) 
        {
            ofstream file;
            file.open("./" + username + ".txt");
            file << username << endl << password;
            file.close();

            main();
        }
        else 
        {
            cout << "Password Tidak Cocok ! \n";
        }
		
	}


}
