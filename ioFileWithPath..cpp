#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //deklarasi variabel baris dan Namafile
    string baris, Namafile;

    //membuat input untuk menangkap nama file
    cout << "Masukkan nama file : ";
    cin >> Namafile;

    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file dengan ekstens txt
    outfile.open(Namafile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

}
