//Meter Unit Length Converter
#include <iostream>
#include <string>

using namespace std;

void converter(float length, string UnitLength)
{
    if (UnitLength == "km"){
        cout << "Satuan panjang anda dalam km adalah: " << (length*0.001) << " km" << endl;
    }
    else if (UnitLength == "hm"){
        cout << "Satuan panjang anda dalam hm adalah: " << (length*0.01) << " hm" << endl;
    }
    else if (UnitLength == "dam"){
        cout << "Satuan panjang anda dalam dam adalah: " << (length*0.1) << " dam" << endl;
    }
    else if (UnitLength == "dm"){
        cout << "Satuan panjang anda dalam dm adalah: " << (length*10) << " dm" << endl;
    }
    else if (UnitLength == "cm"){
        cout << "Satuan panjang anda dalam cm adalah: " << (length*100) << " cm" << endl;
    }
    else if (UnitLength == "mm"){
        cout << "Satuan panjang anda dalam mm adalah: " << (length*1000) << " mm" << endl;
    }
    else{
        cout << "Nilai satuan panjang yang diinput tidak valid";
    }
    cout << "\n---------------------------------------" << endl;
    cout << "\ningin melakukan konversi satuan panjang lagi?" << endl;
}

int main()
{
    float length;
    string SatuanPanjang;
    bool ans, ans2;
    
    cout << "--------SELAMAT DATANG DI KONVERTER SATUAN PANJANG---------" << endl;
    cout << "\nMasukkan panjang suatu unit dalam meter (m): ";
    cin >> length;
    cout << "\n";
    cout << "Pilih unit satuan yang diinginkan \n(km/hm/dam/dm/cm/mm): ";
    cin >> SatuanPanjang;
    cout << "\n";
    converter(length, SatuanPanjang);
    
    cout << "\nKetik 1 untuk melanjutkan konversi\n" << endl;
    cin >> ans2;
    
    while (ans2 == 1){
        cout << "\n----------------------------------------" << endl;
        cout << "\nKetik 1 untuk konversi\n\nKetik 0 untuk keluar" << endl;
        cin >> ans;
        
        if (ans == 1){
            cout << "\n-------------------------------------------" << endl;
            cout << "Masukkan panjang suatu unit dalam meter (m): ";
            cin >> length;
            cout << "\n";
            cout << "Pilih unit satuan yang diinginkan \n(km/hm/dam/dm/cm/mm): ";
            cin >> SatuanPanjang;
            cout << "\n";
            converter(length, SatuanPanjang);
        } 
        else {
            break;
        }
        
        cout << "\nKetik 1 untuk melanjutkan konversi panjang\n" << endl;
        cin >> ans2;
    }
    cout << "\n------------------------------------TERIMA KASIH-------------------------" << endl;
    return 0;
}