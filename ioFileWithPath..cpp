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

    //unlimited loop untuk menulis file
    while (true)
    {
        cout <<"-";
        //mendapat setiap karakter dalam satu baris 
        getline(cin, baris);
        //kondisi false jika baris hanya berisi karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari variabel baris ke dalam file 
        outfile << baris << endl;
    }
    //menutup file setelah penulisan selesai
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk ke sebuah file
    infile.open(Namafile + ".txt", ios::in);

}
