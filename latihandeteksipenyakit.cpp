/*Judul = DIAGNOSA PENYAKIT
13 Okt 2022
A11.2022.14733
Helmi azkia */
#include <iostream>
#include <string.h>
using namespace std;
//kamus
int kode_tg;//tanda gejala AWAL
string nama;
char gejala [2];
//deskripsi
main ()
{
    cout << "==============DIAGNOSA PENYAKIT=============="<<endl;
    cout << " 1.Mendiagnosa penyakit"<<endl;
    cout << " MASUKAN NAMA ANDA : ";
    getline(cin,nama);
    cout << " Masukan angka 1 untuk memulai : ";
    cin>> kode_tg;

    switch(kode_tg)
    {
    case 1:
        cout << "===========GEJALA YANG SERING DIALAMI=========="<<endl;
        cout << "| A.Nafsu makan berkurang | I.Berat badan turun"<<endl;
        cout << "| B.Batuk berkelanjutan   | J.Face berewarna pucat"<<endl;
        cout << "| C.Demam                 | K.Lemas"<<endl;
        cout << "| D.Tenggorokan sakit     | L.Sakit kepala"<<endl;
        cout << "| E.Hidung meler          | M.Nyeri dada saat bernafas"<<endl;
        cout << "| F.Keringat berlebih     | N.Batuk batuk"<<endl;
        cout << "| G.Demam tinggi          | O.Diare"<<endl;
        cout << "| H.Mual mual"<<endl;
        cout << " INPUT KODE GEJALA  : ";
        cin>>gejala;

        if (strcmp(gejala, "E")==0 || strcmp (gejala, "D")==0 || strcmp (gejala, "N")==0)
            {
                cout << "Bapak/ibu " << nama << " Terdiagnosa Penyakit Influenza"<<endl;
            }else if (strcmp(gejala, "G")==0 || strcmp (gejala, "A")==0 || strcmp (gejala, "F")==0)
            {
                cout << "Bapak/ibu " << nama << " Terdiagnosa Penyakit Tipes"<<endl;
            }else if (strcmp(gejala, "K")==0 || strcmp (gejala, "O")==0 || strcmp (gejala, "L")==0)
            {
                cout << "Bapak/ibu " << nama << " Terdiagnosis Penyakit Muntaber"<<endl;
            }else if (strcmp(gejala, "H")==0 || strcmp (gejala, "C")==0 || strcmp (gejala, "J")==0)
            {
                cout << "Bapak/ibu " << nama << " Terdiagnosa Penyakit Hepatitis"<<endl;
            }else if (strcmp(gejala, "B")==0 || strcmp (gejala, "I")==0 || strcmp (gejala, "M")==0)
            {
                cout << "Bapak/ibu " << nama << " Terdiagnosa Penyakit TBC"<<endl;
            }else
            {
                cout << "Bapak/ibu" << nama << "Penyakit tidak terdeteksi"<<endl;
            }
            break;
    }

    return 0;
}
