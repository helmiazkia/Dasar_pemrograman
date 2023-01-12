//judul: membuat krs khs
//Helmi azkia
//A11.2022.14733
#include <iostream>

using namespace std;
string nama;
string nim;
string m1,m2,m3,m4,m5,m6,m7;
int s1,s2,s3,s4,s5,s6,s7,n1,n2,n3,n4,n5,n6,n7;
char menu,yt;
int main()
{

    awal:
        cout << "A.KARTU RENCANA STUDY [KRS]"<<endl;
        cout << "B.KARTU HASIL STUDY [KHS]"<<endl;
        cout << "Masukan menu: ";
        cin>>menu;
        cout << ""<<endl;
    switch (toupper(menu))
    {
    case 'A' :

        cout << "            ==========================================================="<<endl;
        cout << "                          KARTU RENCANA STUDI MAHASISWA"<<endl;
        cout << "                         PROGRAM STUDI TEKNIK INFORMATIKA"<<endl;
        cout << "                           UNIVERSITAS DIAN NUSWANTORO"<<endl<<endl;
        cout << "No.    Kode Mata Kuiah     Kelompok    Mata Kuliah                             SKSS    Status"<<endl;
        cout << "1.     A11.54101           A11.4119    KALKULUS1                               4       B "<<endl;
        cout << "2.     A11.54205           A11.4119    DASAR PEMROGRAMAN                       4       B "<<endl;
        cout << "3.     A11.54302           A11.4119    MATEMATIKA DISKRIT                      3       B "<<endl;
        cout << "4.     A11.54314           A11.4119    PEMROGRAMAN BERBASIS WEB                2       B "<<endl;
        cout << "5.     A11.54403           A11.4119    ORGANISASI DAN ARSITEKTUR KOMPUTER      3       B "<<endl;
        cout << "6.     AF201704            A11.4119    DASAR DASAR KOMPUTASI                   2       B "<<endl;
        cout << "7.     U201704             A11.4119    PENGANTAR TEKNOLOGI INFORMASI           2       B "<<endl;
    case 'B' :
        cin.ignore();
        cout << "NAMA MAHASISWA: ";
        getline(cin,nama);
        cout << ""<<endl;
        cout << "MASUKAN NIM: ";
        getline(cin,nama);

        cout << "           ============================================================"<<endl;
        cout << "                            KARTU HASIL STUDI MAHASISWA"<<endl;
        cout << "                           PROGARAM STUDI TEKNIK INFORMATIKA"<<endl;
        cout << "                             UNIVERSITAS DIAN NUSWANTORO"<<endl<<endl;
        cout << "       Nama Mata Kuliah                        SKS     Nilai"<<endl;
        cout << "       KALKULUS1"; cin>>s1;cin>>n1;
        cout << "       DASAR PEMROGRAMAN"; cin>>s2;cin>>n2;
        cout << "       MATEMATIKA DISKRIT"; cin>>s3;cin>>n3;
        cout << "       PEMROGRAMAN BERBASIS WEB"; cin>>s4;cin>>n4;
        cout << "       ORGANISASI DAN ARSITEKTUR KOMPUTER";cin>>s5;cin>>n5;
        cout << "       DASAR DASAR KOMPUTASI";cin>>s6;cin>>n6;
        cout << "       PENGANTAR TEKNOLOGI INFORMASI";cin>>s7;cin>>n7;
        cout << "           ============================================================"<<endl;
        cout << "                                               TOTAL NILAI: "<<n1+n2+n3+n4+n5+n6+n7<<endl;
        cout << "                                               TOTAL SKS  : "<<s1+s2+s3+s4+s5+s6+s7<<endl;
        cout << "                                               RATA RATA N: "<<n1+n2+n3+n4+n5+n6+n7<<endl;
    }

    cout << "Apakah anda ingin mengulangi lagi (Y/T): ";
    cin>> yt;
    cout <<endl;
    if (yt=='Y'||yt=='y')
    {
        goto awal;
    }

    if (yt=='T'||yt=='t')
    {
        goto akhir;
    }
    akhir:
    return 0;

}
