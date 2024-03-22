//soal tipe B
// pass 1 menggunakan perbandingan sebanyak 4x
//1. menggunakan array yang berisi 5 elemen [5,2,6,7,3] 
// membandingkan index 0 dan index 1 jika angkanya tidak berurutan maka tukar index 1 ke index 0 menjadi [2,5,6,7,3]
// membandingkan index 1 dan index 2 jika angka di index 1 lebih besar dari index 2 maka ditukar [2,5,6,7,3] (no change)
// membandingkan index 2 dan index 3 jika angka di index 2 lebih besar dari index 3 maka ditukar [2,5,6,7,3] (no change)
// membandingkan index 3 dan index 4 jika angka di index 3 lebih besar dari index 4 maka ditukar, index 3 lebih  besar daripada index 4 maka ditukar [2,5,6,3,7]
//2. bekerja dengan cara membagi array menjadi sub-array dan melakukan insertion sort pada setiap sub-array
//membagi menjadi 2 list, contoh list 1 dengan index 0,2,4,6,8,10 list 2 dengan index 1,3,5,7,9
// kemudian mengurutkan angka dari yang terkecil dengan menukar index satu dengan lainnya
//3. selection sort karena diurutkan dari data yang terkecil dan menggunakan scanning dengan diurutkan dengan langsung memilih data paling kecil kemudian di taruh di space yang benar

#include <iostream>
using namespace std;
int arjun[20];
int n;

void selectionSort(int arr[], int n)
{

    int i, j, min_idx;


    for (i = 0; i < n - 1; i++) {


        min_idx = i;

        for (j = i + 1; j < n; j++) {

            if (arjun[j] < arjun[min_idx])

                min_idx = j;
        }
        }

        if (min_idx != i)

            swap(arjun[min_idx], arjun[i]);

    }
}

void input() {
    while (true) {

        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> a[i];

    }
}

int main()
{

    int arjun [] = { 64, 25, 12, 22, 11 };

    int n = sizeof (arjun) / sizeof(arjun[0]);

    selectionSort(arjun, n);

    cout << "Masukan nilai array \n";

    cout << "Masukan nilai array /\n "(arjun, n);

    return 0;
}

void display() {
    cout << endl;
    cout << "========================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "========================" << endl;
    for (int j = 0; j < n; j++) {
        cout << a[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {

    input();
    bubbleSortArray();
    display();
    system("pause");

    return 0;
}