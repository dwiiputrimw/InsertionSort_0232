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
    cout << endl;
    cout << "==============================================";
    cout << "===========Masukkan Element Array=============";
    cout << "==============================================";

    for (int i = 0; i < n; i++ )
    {
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr [i];
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
        cout << "\nStep" << i << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        
        }
    }
}

void display (){ //procedur display
    cout << endl;
    cout << "\n==========================";
    cout << "\n=========Element Array" << endl;
    cout << "\n==========================";

    for (int j = 0; j < n; j++)
    {
        cout << arr [j] << endl;
    }
    cout << endl;
}

int main (){
    InputData();
    insertionsort();
    display();
    system( "pause");
}