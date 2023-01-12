//JUDUL : PROGRAM DETEKSI PENYAKIT
//      : HELMI AZKIA
//      : 7 OKTOBER 2022
//      : A11.2022.14741
//      : Dasar pemprograman

//KAMUS
#include <iostream>
#include <string.h>
using namespace std;

int kodepenyakit;
string nama;
char gejala[5];

//DISKRIPSI ALGORITM
main()
{
    cout <<"--> Program deteksi diagnosa penyakit <-- \n";
    cout <<"| 1 = Influenza  | 4 = Hepatitis \n";
    cout <<"| 2 = Tipes      | 5 = Muntaber \n";
    cout <<"| 3 = Tubercolosis \n";
    cout <<"Input nama anda : ";
    getline(cin,nama);
    cout <<"Input kode penyakit : ";
    cin >> kodepenyakit;

    switch(kodepenyakit)
    {
        case 1:
        cout <<"--> Berikut terdapat data gejala penyakit Influenza \n";
        cout <<"| A = Hidung meler \n";
        cout <<"| B = Tenggorokan sakit \n";
        cout <<"| C = Batuk batuk \n";
        cout <<"Input gejala : ";
        cin >> gejala;

        if(strcmp(gejala,"Hidung")==0 || strcmp(gejala,"Tenggorokan")==0 || strcmp(gejala,"Batuk")==0)
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Terdiagnosa penyakit Influenza \n";
            cout <<"--> Segera periksa ke Rumah sakit atau Klinik terdekat untuk pengobatan lebih lanjut \n";
        }else
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Anda tidak terdiagnosa penyakit dalam artian sehat jasmani rohani \n";
        }
        break;

        case 2:
        cout <<"--> Berikut terdapat data gejala penyakit Tipes \n";
        cout <<"| A = Demam tinggi \n";
        cout <<"| B = Nafsu makan berkurang \n";
        cout <<"| C = Keringat berlebih \n";
        cout <<"Input gejala : ";
        cin >> gejala;

        if(strcmp(gejala,"Demam")==0 || strcmp(gejala,"Nafsu")==0 || strcmp(gejala,"Keringat")==0)
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Terdiagnosa penyakit Tipes \n";
            cout <<"--> Segera periksa ke Rumah sakit atau Klinik terdekat untuk pengobatan lebih lanjut \n";
        }else
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Anda tidak terdiagnosa penyakit dalam artian sehat jasmani rohani \n";
        }
        break;

        case 3:
        cout <<"--> Berikut terdapat data gejala penyakit Tubercolosis \n";
        cout <<"| A = Nyeri dada saat bernafas \n";
        cout <<"| B = Berat badan turun \n";
        cout <<"| C = Batuk berkelanjutan \n";
        cout <<"Input gejala : ";
        cin >> gejala;

        if(strcmp(gejala,"Nyeri")==0 || strcmp(gejala,"Berat")==0 || strcmp(gejala,"Batuk berkelanjutan")==0)
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Terdiagnosa penyakit Tubercolosis / TBC \n";
            cout <<"--> Segera periksa ke Rumah sakit atau Klinik terdekat untuk pengobatan lebih lanjut \n";
        }else
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Anda tidak terdiagnosa penyakit dalam artian sehat jasmani rohani \n";
        }
        break;

        case 4:
        cout <<"--> Berikut terdapat data gejala penyakit Hepatitis \n";
        cout <<"| A = Mual mual dan muntah \n";
        cout <<"| B = Demam \n";
        cout <<"| C = Fese berwarna pucat \n";
        cout <<"Input gejala : ";
        cin >> gejala;

        if(strcmp(gejala,"Mual")==0 || strcmp(gejala,"Demam")==0 || strcmp(gejala,"Fese")==0)
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Terdiagnosa penyakit Hepatitis \n";
            cout <<"--> Segera periksa ke Rumah sakit atau Klinik terdekat untuk pengobatan lebih lanjut \n";
        }else
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Anda tidak terdiagnosa penyakit dalam artian sehat jasmani rohani \n";
        }
        break;

        case 5:
        cout <<"--> Berikut terdapat data gejala penyakit Muntaber \n";
        cout <<"| A = Lemas \n";
        cout <<"| B = Diare \n";
        cout <<"| C = Sakit Kepala \n";
        cout <<"Input gejala : ";
        cin >> gejala;

        if(strcmp(gejala,"Lemas")==0 || strcmp(gejala,"Diare")==0 || strcmp(gejala,"Kepala")==0)
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Terdiagnosa penyakit Muntaber \n";
            cout <<"--> Segera periksa ke Rumah sakit atau Klinik terdekat untuk pengobatan lebih lanjut \n";
        }else
        {
            cout <<"--> Tuan/Nyonya " <<nama <<" Anda tidak terdiagnosa penyakit dalam artian sehat jasmani rohani \n";
        }
        break;
        default:
        {
        cout <<"Mohon maaf, kode penyakit tidak diketahui! \n";
        break;
        }
    }

}
