//judul : palindrom

#include <iostream>
using namespace std;
//kamus
string kata;
int i, n;
bool palindrom;
//deskripsi
int main()
{

    cout << "===========program mengecek kata-kalimat Palindrom atau bukan======="<<endl<<endl;
    cout << "Masukan kata: ";
    getline(cin, kata);
    n = kata.length();
    palindrom = true;
    /*
    i=0;
    while(i<n)
    {
        if(kata[i] != kata[n-i-1])
        {
            palindrom = false;
        }
        i++;
    }*/

    cout << "Apakah palindrome/bukan palindrome: ";
    if (palindrom == true)
        cout<< "Yes ini Palindrome";
    else
        cout<< "Bukan palindrome";
    cin.ignore();


    return 0;
}
