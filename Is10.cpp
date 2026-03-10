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

void insertionsort (){// procedur insertion sort
    int temp;
    int j;

    for (int i = 0; i < n;i++)
    {
        temp = arr [i];
        j = i-1;
        while (j >= 0 && arr [j] > temp)
        {
            arr [j + i] = arr[j];
            j--;
        }
        arr [j + 1] = temp;
        
        }
    }
int main (){
}