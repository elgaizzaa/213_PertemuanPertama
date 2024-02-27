// PertemuanPertama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Begin
    //Numeric nAlas,nTinggi,nLuas
    //Display 'Masukan Alas ='
    //Accept nAlas
    //Display 'Masukan Tinggi ='
    //Accept nTinggi
    //Compute nLuas = nAlas*nTinggi/2
    //Display 'luasnya = ' + nLUAS 
    //End

    float nAlas, nTinggi, nLuas;
    cout << "Masukan Alas = ";
    cin >> nAlas;
    cout << "Masukan Tinggi = ";
    cin >> nTinggi;
    nLuas = nAlas * nTinggi / 2;
    cout << "luasnya = " << nLuas;

    int Panjang, Lebar, Luas;
    cout << "Masukan Panjang = ";
    cin >> Panjang;
    cout << "Masukan Lebar = ";
    cin >> Lebar;
    Luas = Panjang * Lebar;
    cout << "Luas persegi panjang adalah = " << Luas;

        

      
}


