#include <iostream>
using namespace std;

int arr [20];       // membuat array dengan panjang data 20
int n;              // membuat variable inputan n

void InputData (){ //procedur input
    while (true){
        cout << "MAsukkan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else {
            cout << "\nArray Tidak Boleh Lebih Dari 20\n";
        }
    }
}

int main (){
}