#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//just function
void choises() {
    cout << "1. Luas Persegi Panjang\n";
    cout << "2. Luas Segitiga\n";
    cout << "3. Luas Lingkaran (diketahui diameter) \n";
    cout << "4. Luas Lingkaran (diketahui jari-jari)\n";
    cout << "=================================\n";
}

/* RUMUS MENCARI JARI-JARI

float cari_jariJari(float diameter) {
    float r = diameter * 0.5;
    return 0;
}
*/

//----------------------------------------------

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
    int pi = 22/7;
    int r = d * 0.5;
    int rTwo = r * r;
    int hasil = 22/7 * r * r;
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

//function Luas Lingkaran (diketahui jari")
float luas_lingkaranR (float r) {
    return 3.14 * r * r;
}

//-------------------------------------------------------------

//main function
int main()
{
    cout << "calculation program" << endl;
    
    cout << "=========================\n";

    //var persegi, triangel
    int choice,x,y;

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
        cout << "Hasil dari " << x << " * " << y << " = " << persegi_panjang(x, y);

    }
    else if (choice == 2) {
        cout << "Rumus : 1/2 x alas x tinggi\n";
        cout << "===============================\n";
        cout << "Enter Value Below:  \n";
        cout << "Alas: " ; cin >> x;
        cout << "Tinggi: "; cin >> y;
        cout << "Hasil dari 0.5 x " << x << " x " << y << " = " << luas_segitiga(x, y);
    }
    else if (choice == 3) {
        cout << "Enter Value: \n";
        cout << "Diameter: "; cin >> d;

        cout << "Rumus = 22/7 x r2\n";
        luas_lingkaran(d);
    }
    else if (choice == 4) {
        cout << "Enter Value: \n";
        cout << "Jari - Jari: "; cin >> r;
        cout << "Rumus: 3.14 x r^2\n";
        luas_lingkaranR(r);

    }
}

