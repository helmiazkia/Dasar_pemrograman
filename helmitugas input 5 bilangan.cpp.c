//JUDUL: INPUT 5 BILANGAN
//HELMI AZKIA
//NIM:A11.2022.14733


#include <iostream>
#include <string.h>
using namespace std;

//kamus
    int a, b, c, d, e;

    int r1, r2, r3, r4, r5;

    string ulg;


//deskrupsi
int main(){
    cout << endl;
    cout << "=========================================" << endl;
    cout << "    Program Pengurut 5 Bilangan dari" << endl;
    cout << "    yang terkecil hingga yang terbesar" << endl;
    cout << "        v1.0       Oleh: Maladzi" << endl;
    mainhub:
    cout << "=========================================" << endl << endl;
    cout << "    Masukkan angka pertama = "; cin >> a;
    cout << "    Masukkan angka kedua   = "; cin >> b;
    cout << "    Masukkan angka ketiga  = "; cin >> c;
    cout << "    Masukkan angka keempat = "; cin >> d;
    cout << "    Masukkan angka kelima  = "; cin >> e;

if ((a == b)||(a==c)||(a==d)||(a==e)||(b==c)||(b==d)||(b==e)||(c==d)||(c==e)||(d==e))
{
    r1 = 0;
    r2 = 0;
    r3 = 0;
    r4 = 0;
    r5 = 0;
    cout << endl;
    cout << "=========================================" << endl << endl;
    cout << "        INPUT SALAH! TIDAK BOLEH" << endl;
    cout << "          ADA ANGKA YANG SAMA!" << endl;
}
else{

    if (a > b)
    {
        if (b > c)
        {
            if (c > d)
            {
                //a > b > c > d

                if (d > e)
                {
                    //a > b > c > d > e
                    r1 = a;
                    r2 = b;
                    r3 = c;
                    r4 = d;
                    r5 = e;
                }
                else /*e > d*/
                {
                    if (c > e)
                    {
                        //a > b > c > e > d
                        r1 = a;
                        r2 = b;
                        r3 = c;
                        r4 = e;
                        r5 = d;
                    }
                    else /*e > c*/
                    {
                        if (b > e)
                        {
                            //a > b > e > c > d
                            r1 = a;
                            r2 = b;
                            r3 = e;
                            r4 = c;
                            r5 = d;
                        }
                        else /*e > b*/
                        {
                            if (a > e)
                            {
                                //a > e > b > c > d
                                r1 = a;
                                r2 = e;
                                r3 = b;
                                r4 = c;
                                r5 = d;
                            }
                            else /*e > a*/
                            {
                                //e > a > b > c > d
                                r1 = e;
                                r2 = a;
                                r3 = b;
                                r4 = c;
                                r5 = d;
                            }
                        }
                    }
                }
            }
            else /*d > c*/
            {
                if (b > d)
                {
                    //a > b > d > c

                    if (c > e)
                    {
                        //a > b > d > c > e
                        r1 = a;
                        r2 = b;
                        r3 = d;
                        r4 = c;
                        r5 = e;
                    }
                    else /*e > c*/
                    {
                        if (d > e)
                        {
                            //a > b > d > e > c
                            r1 = a;
                            r2 = b;
                            r3 = d;
                            r4 = e;
                            r5 = c;
                        }
                        else /*e > d*/
                        {
                            if (b > e)
                            {
                                //a > b > e > d > c
                                r1 = a;
                                r2 = b;
                                r3 = e;
                                r4 = d;
                                r5 = c;
                            }
                            else /*e > b*/
                            {
                                if (a > e)
                                {
                                    //a > e > b > d > c
                                    r1 = a;
                                    r2 = e;
                                    r3 = b;
                                    r4 = d;
                                    r5 = c;

                                }
                                else /**/
                                {
                                    //e > a > b > d > c
                                    r1 = e;
                                    r2 = a;
                                    r3 = b;
                                    r4 = d;
                                    r5 = c;
                                }
                            }
                        }
                    }
                }
                else /*d > b*/
                {
                    if (a > d)
                    {
                        //a > d > b > c
                        if (c > e)
                        {
                            //a > d > b > c > e
                            r1 = a;
                            r2 = d;
                            r3 = b;
                            r4 = c;
                            r5 = e;
                        }
                        else /*e > c*/
                        {
                            if (b > e)
                            {
                                //a > d > b > e > c
                                r1 = a;
                                r2 = d;
                                r3 = b;
                                r4 = e;
                                r5 = c;
                            }
                            else /*e > b*/
                            {
                                if (d > e)
                                {
                                    //a > d > e > b > c
                                    r1 = a;
                                    r2 = d;
                                    r3 = e;
                                    r4 = b;
                                    r5 = c;
                                }
                                else /*e > d*/
                                {
                                    if (a > e)
                                    {
                                        //a > e > d > b > c
                                        r1 = a;
                                        r2 = e;
                                        r3 = d;
                                        r4 = b;
                                        r5 = c;
                                    }
                                    else /*e > a*/
                                    {
                                        //e > a > d > b > c
                                        r1 = e;
                                        r2 = a;
                                        r3 = d;
                                        r4 = b;
                                        r5 = c;
                                    }
                                }
                            }
                        }
                    }
                    else /*d > a*/
                    {
                        //d > a > b > c
                        if (c > e)
                        {
                            //d > a > b > c > e
                            r1 = d;
                            r2 = a;
                            r3 = b;
                            r4 = c;
                            r5 = e;
                        }
                        else /*e > c*/
                        {
                            if (b > e)
                            {
                                //d > a > b > e > c
                                r1 = d;
                                r2 = a;
                                r3 = b;
                                r4 = e;
                                r5 = c;
                            }
                            else /*e > b*/
                            {
                                if (a > e)
                                {
                                    //d > a > e > b > c
                                    r1 = d;
                                    r2 = a;
                                    r3 = e;
                                    r4 = b;
                                    r5 = c;
                                }
                                else /*e > a*/
                                {
                                    if (d > e)
                                    {
                                        //d > e > a > b > c
                                        r1 = d;
                                        r2 = e;
                                        r3 = a;
                                        r4 = b;
                                        r5 = c;
                                    }
                                    else /*e > d*/
                                    {
                                        //e > d > a > b > c
                                        r1 = e;
                                        r2 = d;
                                        r3 = a;
                                        r4 = b;
                                        r5 = c;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else /*c > b*/
        {
            if (a > c)
            {
                if (b > d)
                {
                    //a > c > b > d
                    if (d > e)
                    {
                        //a > c > b > d > e
                        r1 = a;
                        r2 = c;
                        r3 = b;
                        r4 = d;
                        r5 = e;
                    }
                    else /*e > d*/
                    {
                        if (b > e)
                        {
                            //a > c > b > e > d
                            r1 = a;
                            r2 = c;
                            r3 = b;
                            r4 = e;
                            r5 = d;
                        }
                        else /*e > b*/
                        {
                            if (c > e)
                            {
                                //a > c > e > b > d
                                r1 = a;
                                r2 = c;
                                r3 = e;
                                r4 = b;
                                r5 = d;
                            }
                            else /*e > c*/
                            {
                                if (a > e)
                                {
                                    //a > e > c > b > d
                                    r1 = a;
                                    r2 = e;
                                    r3 = c;
                                    r4 = b;
                                    r5 = d;
                                }
                                else /*e > a*/
                                {
                                    //e > a > c > b > d
                                    r1 = e;
                                    r2 = a;
                                    r3 = c;
                                    r4 = b;
                                    r5 = d;
                                }
                            }
                        }
                    }
                }
                else /*d > b*/
                {
                    if (c > d)
                    {
                        //a > c > d > b
                        if (b > e)
                        {
                            //a > c > d > b > e
                            r1 = a;
                            r2 = c;
                            r3 = d;
                            r4 = b;
                            r5 = e;
                        }
                        else /*e > b*/
                        {
                            if (d > e)
                            {
                                //a > c > d > e > b
                                r1 = a;
                                r2 = c;
                                r3 = d;
                                r4 = e;
                                r5 = b;
                            }
                            else /*e > d*/
                            {
                                if (c > e)
                                {
                                    //a > c > e > d > b
                                    r1 = a;
                                    r2 = c;
                                    r3 = e;
                                    r4 = d;
                                    r5 = b;
                                }
                                else /*e > c*/
                                {
                                    if (a > e)
                                    {
                                        //a > e > c > d > b
                                        r1 = a;
                                        r2 = e;
                                        r3 = c;
                                        r4 = d;
                                        r5 = b;
                                    }
                                    else /*e > a*/
                                    {
                                        //e > a > c > d > b
                                        r1 = e;
                                        r2 = a;
                                        r3 = c;
                                        r4 = d;
                                        r5 = b;
                                    }
                                }
                            }
                        }
                    }
                    else /*d > c*/
                    {
                        if (a > d)
                        {
                            //a > d > c > b
                            if (b > e)
                            {
                                //a > d > c > b > e
                                r1 = a;
                                r2 = d;
                                r3 = c;
                                r4 = b;
                                r5 = e;
                            }
                            else /*e > b*/
                            {
                                if (c > e)
                                {
                                    //a > d > c > e > b
                                    r1 = a;
                                    r2 = d;
                                    r3 = c;
                                    r4 = e;
                                    r5 = b;
                                }
                                else /*e > c*/
                                {
                                    if (d > e)
                                    {
                                        //a > d > e > c > b
                                        r1 = a;
                                        r2 = d;
                                        r3 = e;
                                        r4 = c;
                                        r5 = b;
                                    }
                                    else /*e > d*/
                                    {
                                        if (a > e)
                                        {
                                            //a > e > d > c > b
                                            r1 = a;
                                            r2 = e;
                                            r3 = d;
                                            r4 = c;
                                            r5 = b;
                                        }
                                        else /*e > a*/
                                        {
                                            //e > a > d > c > b
                                            r1 = e;
                                            r2 = a;
                                            r3 = d;
                                            r4 = c;
                                            r5 = b;
                                        }
                                    }
                                }
                            }
                        }
                        else /*d > a*/
                        {
                            //d > a > c > b
                            if (b > e)
                            {
                                //d > a > c > b > e
                                r1 = d;
                                r2 = a;
                                r3 = c;
                                r4 = b;
                                r5 = e;
                            }
                            else /*e > b*/
                            {
                                if (c > e)
                                {
                                    //d > a > c > e > b
                                    r1 = d;
                                    r2 = a;
                                    r3 = c;
                                    r4 = e;
                                    r5 = b;
                                }
                                else /*e > c*/
                                {
                                    if (a > e)
                                    {
                                        //d > a > e > c > b
                                        r1 = d;
                                        r2 = a;
                                        r3 = e;
                                        r4 = c;
                                        r5 = b;
                                    }
                                    else /*e > a*/
                                    {
                                        if (d > e)
                                        {
                                            //d > e > a > c > b
                                            r1 = d;
                                            r2 = e;
                                            r3 = a;
                                            r4 = c;
                                            r5 = b;
                                        }
                                        else /*e > d*/
                                        {
                                            //e > d > a > c > b
                                            r1 = e;
                                            r2 = d;
                                            r3 = a;
                                            r4 = c;
                                            r5 = b;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else /*c > a*/
            {
                if (b > d)
                {
                    //c > a > b > d
                    if (d > e)
                    {
                        //c > a > b > d > e
                        r1 = c;
                        r2 = a;
                        r3 = b;
                        r4 = d;
                        r5 = e;
                    }
                    else /*e > d*/
                    {
                        if (b > e)
                        {
                            //c > a > b > e > d
                            r1 = c;
                            r2 = a;
                            r3 = b;
                            r4 = e;
                            r5 = d;
                        }
                        else /*e > b*/
                        {
                            if (a > e)
                            {
                                //c > a > e > b > d
                                r1 = c;
                                r2 = a;
                                r3 = e;
                                r4 = b;
                                r5 = d;
                            }
                            else /*e > a*/
                            {
                                if (c > e)
                                {
                                    //c > e > a > b > d
                                    r1 = c;
                                    r2 = e;
                                    r3 = a;
                                    r4 = b;
                                    r5 = d;
                                }
                                else /*e > c*/
                                {
                                    //e > c > a > b > d
                                    r1 = e;
                                    r2 = c;
                                    r3 = a;
                                    r4 = b;
                                    r5 = d;
                                }
                            }
                        }
                    }
                }
                else /*d > b*/
                {
                    if (a > d)
                    {
                        //c > a > d > b
                        if (b > e)
                        {
                            //c > a > d > b > e
                            r1 = c;
                            r2 = a;
                            r3 = d;
                            r4 = b;
                            r5 = e;
                        }
                        else /*e > b*/
                        {
                            if (d > e)
                            {
                                //c > a > d > e > b
                                r1 = c;
                                r2 = a;
                                r3 = d;
                                r4 = e;
                                r5 = b;
                            }
                            else /*e > d*/
                            {
                                if (a > e)
                                {
                                    //c > a > e > d > b
                                    r1 = c;
                                    r2 = a;
                                    r3 = e;
                                    r4 = d;
                                    r5 = b;
                                }
                                else /*e > a*/
                                {
                                    if (c > e)
                                    {
                                        //c > e > a > d > b
                                        r1 = c;
                                        r2 = e;
                                        r3 = a;
                                        r4 = d;
                                        r5 = b;
                                    }
                                    else /*e > c*/
                                    {
                                        //e > c > a > d > b
                                        r1 = e;
                                        r2 = c;
                                        r3 = a;
                                        r4 = d;
                                        r5 = b;
                                    }
                                }
                            }
                        }
                    }
                    else /*d > a*/
                    {
                        if (c > d)
                        {
                            //c > d > a > b
                            if (b > e)
                            {
                                //c > d > a > b > e
                                r1 = c;
                                r2 = d;
                                r3 = a;
                                r4 = b;
                                r5 = e;
                            }
                            else /*e > b*/
                            {
                                if (a > e)
                                {
                                    //c > d > a > e > b
                                    r1 = c;
                                    r2 = d;
                                    r3 = a;
                                    r4 = e;
                                    r5 = b;
                                }
                                else /*e > a*/
                                {
                                    if (d > e)
                                    {
                                        //c > d > e > a > b
                                        r1 = c;
                                        r2 = d;
                                        r3 = e;
                                        r4 = a;
                                        r5 = b;
                                    }
                                    else /*e > d*/
                                    {
                                        if (c > e)
                                        {
                                            //c > e > d > a > b
                                            r1 = c;
                                            r2 = e;
                                            r3 = d;
                                            r4 = a;
                                            r5 = b;
                                        }
                                        else /*e > c*/
                                        {
                                            //e > c > d > a > b
                                            r1 = e;
                                            r2 = c;
                                            r3 = d;
                                            r4 = a;
                                            r5 = b;
                                        }
                                    }
                                }
                            }
                        }
                        else /*d > c*/
                        {
                            //d > c > a > b
                            if (b > e)
                            {
                                //d > c > a > b > e
                                r1 = d;
                                r2 = c;
                                r3 = a;
                                r4 = b;
                                r5 = e;
                            }
                            else /*e > b*/
                            {
                                if (a > e)
                                {
                                    //d > c > a > e > b
                                    r1 = d;
                                    r2 = c;
                                    r3 = a;
                                    r4 = e;
                                    r5 = b;
                                }
                                else /*e > a*/
                                {
                                    if (c > e)
                                    {
                                        //d > c > e > a > b
                                        r1 = d;
                                        r2 = c;
                                        r3 = e;
                                        r4 = a;
                                        r5 = b;
                                    }
                                    else /*e > c*/
                                    {
                                        if (d > e)
                                        {
                                            //d > e > c > a > b
                                            r1 = d;
                                            r2 = e;
                                            r3 = c;
                                            r4 = a;
                                            r5 = b;
                                        }
                                        else /*e > d*/
                                        {
                                            //e > d > c > a > b
                                            r1 = e;
                                            r2 = d;
                                            r3 = c;
                                            r4 = a;
                                            r5 = b;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else /*b > a*/
    {
        if (a > c)
        {
            if (c > d)
            {
                //b > a > c > d
                if (d > e)
                {
                    //b > a > c > d > e
                    r1 = b;
                    r2 = a;
                    r3 = c;
                    r4 = d;
                    r5 = e;
                }
                else /*e > d*/
                {
                    if (c > e)
                    {
                        //b > a > c > e > d
                        r1 = b;
                        r2 = a;
                        r3 = c;
                        r4 = e;
                        r5 = d;
                    }
                    else /*e > c*/
                    {
                        if (a > e)
                        {
                            //b > a > e > c > d
                            r1 = b;
                            r2 = a;
                            r3 = e;
                            r4 = c;
                            r5 = d;
                        }
                        else /*e > a*/
                        {
                            if (b > e)
                            {
                                //b > e > a > c > d
                                r1 = b;
                                r2 = e;
                                r3 = a;
                                r4 = c;
                                r5 = d;
                            }
                            else /*e > b*/
                            {
                                //e > b > a > c > d
                                r1 = e;
                                r2 = b;
                                r3 = a;
                                r4 = c;
                                r5 = d;
                            }
                        }
                    }
                }
            }
            else /*d > c*/
            {
                if (a > d)
                {
                    //b > a > d > c
                    if (c > e)
                    {
                        //b > a > d > c > e
                        r1 = b;
                        r2 = a;
                        r3 = d;
                        r4 = c;
                        r5 = e;
                    }
                    else /*e > c*/
                    {
                        if (d > e)
                        {
                            //b > a > d > e > c
                            r1 = b;
                            r2 = a;
                            r3 = d;
                            r4 = e;
                            r5 = c;
                        }
                        else /*e > d*/
                        {
                            if (a > e)
                            {
                                //b > a > e > d > c
                                r1 = b;
                                r2 = a;
                                r3 = e;
                                r4 = d;
                                r5 = c;
                            }
                            else /*e > a*/
                            {
                                if (b > e)
                                {
                                    //b > e > a > d > c
                                    r1 = b;
                                    r2 = e;
                                    r3 = a;
                                    r4 = d;
                                    r5 = c;
                                }
                                else /*e > b*/
                                {
                                    //e > b > a > d > c
                                    r1 = e;
                                    r2 = b;
                                    r3 = a;
                                    r4 = d;
                                    r5 = c;
                                }
                            }
                        }
                    }
                }
                else /*d > a*/
                {
                    if (b > d)
                    {
                        //b > d > a > c
                        if (c > e)
                        {
                            //b > d > a > c > e
                            r1 = b;
                            r2 = d;
                            r3 = a;
                            r4 = c;
                            r5 = e;
                        }
                        else /*e > c*/
                        {
                            if (a > e)
                            {
                                //b > d > a > e > c
                                r1 = b;
                                r2 = d;
                                r3 = a;
                                r4 = e;
                                r5 = c;
                            }
                            else /*e > a*/
                            {
                                if (d > e)
                                {
                                    //b > d > e > a > c
                                    r1 = b;
                                    r2 = d;
                                    r3 = e;
                                    r4 = a;
                                    r5 = c;
                                }
                                else /*e > d*/
                                {
                                    if (b > e)
                                    {
                                        //b > e > d > a > c
                                        r1 = b;
                                        r2 = e;
                                        r3 = d;
                                        r4 = a;
                                        r5 = c;
                                    }
                                    else /*e > b*/
                                    {
                                        //e > b > d > a > c
                                        r1 = e;
                                        r2 = b;
                                        r3 = d;
                                        r4 = a;
                                        r5 = c;
                                    }
                                }
                            }
                        }
                    }
                    else /*d > b*/
                    {
                        //d > b > a > c
                        if (c > e)
                        {
                            //d > b > a > c > e
                            r1 = d;
                            r2 = b;
                            r3 = a;
                            r4 = c;
                            r5 = e;
                        }
                        else /*e > c*/
                        {
                            if (a > e)
                            {
                                //d > b > a > e > c
                                r1 = d;
                                r2 = b;
                                r3 = a;
                                r4 = e;
                                r5 = c;
                            }
                            else /*e > a*/
                            {
                                if (b > e)
                                {
                                    //d > b > e > a > c
                                    r1 = d;
                                    r2 = b;
                                    r3 = e;
                                    r4 = a;
                                    r5 = c;
                                }
                                else /*e > b*/
                                {
                                    if (d > e)
                                    {
                                        //d > e > b > a > c
                                        r1 = d;
                                        r2 = e;
                                        r3 = b;
                                        r4 = a;
                                        r5 = c;
                                    }
                                    else /*e > d*/
                                    {
                                        //e > d > b > a > c
                                        r1 = e;
                                        r2 = d;
                                        r3 = b;
                                        r4 = a;
                                        r5 = c;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else /*c > a*/
        {
            if (b > c)
            {
                if (a > d)
                {
                    //b > c > a > d
                    if (d > e)
                    {
                        //b > c > a > d > e
                        r1 = b;
                        r2 = c;
                        r3 = a;
                        r4 = d;
                        r5 = e;
                    }
                    else /*e > d*/
                    {
                        if (a > e)
                        {
                            //b > c > a > e > d
                            r1 = b;
                            r2 = c;
                            r3 = a;
                            r4 = e;
                            r5 = d;
                        }
                        else /*e > a*/
                        {
                            if (c > e)
                            {
                                //b > c > e > a > d
                                r1 = b;
                                r2 = c;
                                r3 = e;
                                r4 = a;
                                r5 = d;
                            }
                            else /*e > c*/
                            {
                                if (b > e)
                                {
                                    //b > e > c > a > d
                                    r1 = b;
                                    r2 = e;
                                    r3 = c;
                                    r4 = a;
                                    r5 = d;
                                }
                                else /*e > b*/
                                {
                                    //e > b > c > a > d
                                    r1 = e;
                                    r2 = b;
                                    r3 = c;
                                    r4 = a;
                                    r5 = d;
                                }
                            }
                        }
                    }
                }
                else /*d > a*/
                {
                    if (c > d)
                    {
                        //b > c > d > a
                        if (a > e)
                        {
                            //b > c > d > a > e
                            r1 = b;
                            r2 = c;
                            r3 = d;
                            r4 = a;
                            r5 = e;
                        }
                        else /*e > a*/
                        {
                            if (d > e)
                            {
                                //b > c > d > e > a
                                r1 = b;
                                r2 = c;
                                r3 = d;
                                r4 = e;
                                r5 = a;
                            }
                            else /*e > d*/
                            {
                                if (c > e)
                                {
                                    //b > c > e > d > a
                                    r1 = b;
                                    r2 = c;
                                    r3 = e;
                                    r4 = d;
                                    r5 = a;
                                }
                                else /*e > c*/
                                {
                                    if (b > e)
                                    {
                                        //b > e > c > d > a
                                        r1 = b;
                                        r2 = e;
                                        r3 = c;
                                        r4 = d;
                                        r5 = a;
                                    }
                                    else /*e > b*/
                                    {
                                        //e > b > c > d > a
                                        r1 = e;
                                        r2 = b;
                                        r3 = c;
                                        r4 = d;
                                        r5 = a;
                                    }
                                }
                            }
                        }
                    }
                    else /*d > c*/
                    {
                        if (b > d)
                        {
                            //b > d > c > a
                            if (a > e)
                            {
                                //b > d > c > a > e
                                r1 = b;
                                r2 = d;
                                r3 = c;
                                r4 = a;
                                r5 = e;
                            }
                            else /*e > a*/
                            {
                                if (c > e)
                                {
                                    //b > d > c > e > a
                                    r1 = b;
                                    r2 = d;
                                    r3 = c;
                                    r4 = e;
                                    r5 = a;
                                }
                                else /*e > c*/
                                {
                                    if (d > e)
                                    {
                                        //b > d > e > c > a
                                        r1 = b;
                                        r2 = d;
                                        r3 = e;
                                        r4 = c;
                                        r5 = a;
                                    }
                                    else /*e > d*/
                                    {
                                        if (b > e)
                                        {
                                            //b > e > d > c > a
                                            r1 = b;
                                            r2 = e;
                                            r3 = d;
                                            r4 = c;
                                            r5 = a;
                                        }
                                        else /*e > b*/
                                        {
                                            //e > b > d > c > a
                                            r1 = e;
                                            r2 = b;
                                            r3 = d;
                                            r4 = c;
                                            r5 = a;
                                        }
                                    }
                                }
                            }
                        }
                        else /*d > b*/
                        {
                            //d > b > c > a
                            if (a > e)
                            {
                                //d > b > c > a > e
                                r1 = d;
                                r2 = b;
                                r3 = c;
                                r4 = a;
                                r5 = e;
                            }
                            else /*e > a*/
                            {
                                if (c > e)
                                {
                                    //d > b > c > e > a
                                    r1 = d;
                                    r2 = b;
                                    r3 = c;
                                    r4 = e;
                                    r5 = a;
                                }
                                else /*e > c*/
                                {
                                    if (b > e)
                                    {
                                        //d > b > e > c > a
                                        r1 = d;
                                        r2 = b;
                                        r3 = e;
                                        r4 = c;
                                        r5 = a;
                                    }
                                    else /*e > b*/
                                    {
                                        if (d > e)
                                        {
                                            //d > e > b > c > a
                                            r1 = d;
                                            r2 = e;
                                            r3 = b;
                                            r4 = c;
                                            r5 = a;
                                        }
                                        else /*e > d*/
                                        {
                                            //e > d > b > c > a
                                            r1 = e;
                                            r2 = d;
                                            r3 = b;
                                            r4 = c;
                                            r5 = a;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else /*c > b*/
            {
                if (a > d)
                {
                    //c > b > a > d
                    if (d > e)
                    {
                        //c > b > a > d > e
                        r1 = c;
                        r2 = b;
                        r3 = a;
                        r4 = d;
                        r5 = e;
                    }
                    else /*e > d*/
                    {
                        if (a > e)
                        {
                            //c > b > a > e > d
                            r1 = c;
                            r2 = b;
                            r3 = a;
                            r4 = e;
                            r5 = d;
                        }
                        else /*e > a*/
                        {
                            if (b > e)
                            {
                                //c > b > e > a > d
                                r1 = c;
                                r2 = b;
                                r3 = e;
                                r4 = a;
                                r5 = d;
                            }
                            else /*e > b*/
                            {
                                if (c > e)
                                {
                                    //c > e > b > a > d
                                    r1 = c;
                                    r2 = e;
                                    r3 = b;
                                    r4 = a;
                                    r5 = d;
                                }
                                else /*e > c*/
                                {
                                    //e > c > b > a > d
                                    r1 = e;
                                    r2 = c;
                                    r3 = b;
                                    r4 = a;
                                    r5 = d;
                                }
                            }
                        }
                    }
                }
                else /*d > a*/
                {
                    if (b > d)
                    {
                        //c > b > d > a
                        if (a > e)
                        {
                            //c > b > d > a > e
                            r1 = c;
                            r2 = b;
                            r3 = d;
                            r4 = a;
                            r5 = e;
                        }
                        else /*e > a*/
                        {
                            if (d > e)
                            {
                                //c > b > d > e > a
                                r1 = c;
                                r2 = b;
                                r3 = d;
                                r4 = e;
                                r5 = a;
                            }
                            else /*e > d*/
                            {
                                if (b > e)
                                {
                                    //c > b > e > d > a
                                    r1 = c;
                                    r2 = b;
                                    r3 = e;
                                    r4 = d;
                                    r5 = a;
                                }
                                else /*e > b*/
                                {
                                    if (c > e)
                                    {
                                        //c > e > b > d > a
                                        r1 = c;
                                        r2 = e;
                                        r3 = b;
                                        r4 = d;
                                        r5 = a;
                                    }
                                    else /*e > c*/
                                    {
                                        //e > c > b > d > a
                                        r1 = e;
                                        r2 = c;
                                        r3 = b;
                                        r4 = d;
                                        r5 = a;
                                    }
                                }
                            }
                        }
                    }
                    else /*d > b*/
                    {
                        if (c > d)
                        {
                            //c > d > b > a
                            if (a > e)
                            {
                                //c > d > b > a > e
                                r1 = c;
                                r2 = d;
                                r3 = b;
                                r4 = a;
                                r5 = e;
                            }
                            else /*e > a*/
                            {
                                if (b > e)
                                {
                                    //c > d > b > e > a
                                    r1 = c;
                                    r2 = d;
                                    r3 = b;
                                    r4 = e;
                                    r5 = a;
                                }
                                else /*e > b*/
                                {
                                    if (d > e)
                                    {
                                        //c > d > e > b > a
                                        r1 = c;
                                        r2 = d;
                                        r3 = e;
                                        r4 = b;
                                        r5 = a;
                                    }
                                    else /*e > d*/
                                    {
                                        if (c > e)
                                        {
                                            //c > e > d > b > a
                                            r1 = c;
                                            r2 = e;
                                            r3 = d;
                                            r4 = b;
                                            r5 = a;
                                        }
                                        else /*e > c*/
                                        {
                                            //e > c > d > b > a
                                            r1 = e;
                                            r2 = c;
                                            r3 = d;
                                            r4 = b;
                                            r5 = a;
                                        }
                                    }
                                }
                            }
                        }
                        else /*d > c*/
                        {
                            //d > c > b > a
                            if (a > e)
                            {
                                //d > c > b > a > e
                                r1 = d;
                                r2 = c;
                                r3 = b;
                                r4 = a;
                                r5 = e;
                            }
                            else /*e > a*/
                            {
                                if (b > e)
                                {
                                    //d > c > b > e > a
                                    r1 = d;
                                    r2 = c;
                                    r3 = b;
                                    r4 = e;
                                    r5 = a;
                                }
                                else /*e > b*/
                                {
                                    if (c > e)
                                    {
                                        //d > c > e > b > a
                                        r1 = d;
                                        r2 = c;
                                        r3 = e;
                                        r4 = b;
                                        r5 = a;
                                    }
                                    else /*e > c*/
                                    {
                                        if (d > e)
                                        {
                                            //d > e > c > b > a
                                            r1 = d;
                                            r2 = e;
                                            r3 = c;
                                            r4 = b;
                                            r5 = a;
                                        }
                                        else /*e > d*/
                                        {
                                            //e > d > c > b > a
                                            r1 = e;
                                            r2 = d;
                                            r3 = c;
                                            r4 = b;
                                            r5 = a;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
    //holy shit I fucking did it

    cout << endl;
    cout << "=========================================" << endl << endl;
    cout << "    Berikut hasil pengurutan angka" << endl;
    cout << "    yang telah di-input :" << endl << endl;
    cout << "       " << r5 << " < " << r4 << " < " << r3 << " < " << r2 << " < " << r1 << endl << endl;
    cout << "=========================================" << endl << endl;

    cout << "    Apakah anda ingin menjalankan" << endl;
    cout << "    program ini lagi? (Y/N)" << endl;
    cout << "    >"; cin >> ulg;

    if (ulg == "Y"||ulg == "y")
    {
        goto mainhub;
    }
    else
    {
        return 0;
    }

}
