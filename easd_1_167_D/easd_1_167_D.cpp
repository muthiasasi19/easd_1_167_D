/*1. Algoritma dibutuhkan untuk menyelesaikan suatu masalah, karena algoritma itu merupakan urutan langkah-langkah logis yang disusun atau dirancang untuk menyelesaikan masalah dengan cepat dan efisien.
  2. - Statis (Array)
	 - Dinamis (Linked List)
  3. Faktor yang memepengaruhi program:
	- Size of th einput (ukuran input)
	- Compiler (penerjemah)
	- Speed of machine
	- operating system
  4. Merge sort merupakan algoritma sorting yang memiliki kapasitas atau ukuran yang paling besar dr algoritma sorting lainnya 
  5. Quadratic : bubble sort, insertion sort, dan selection sort
     Loglinear : merge sort, quick sort, dan shell sort(dalam beberapa kondisi)*/

#include <iostream>
using namespace std;

int main() {
    const int MAX = 87; // hasil dari 67 + 20 -2 x 15 + 10 + 20
    int sasi[MAX], n;
}
void input(int sasi[], int n) {
    cout << "Masukkan " << n << " data:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> sasi[i];
    }
}

void selection_sort(int sasi[], int n) {
    int min_index;
    for (int MS = 0; MS < n - 1; MS++) {
        min_index = MS;
        for (int i = MS + 1; i < n; i++) {
            if (sasi[i] < sasi[min_index]) {
                min_index = i;
            }
            int temp = sasi[MS];
            sasi[MS] = sasi[min_index];
            sasi[min_index] = temp;
        }
    }


    void display(int sasi[], int n); {
        cout << "Data setelah diurutkan:" << endl;
        for (int i = 0; i < n; i++) {
            cout << sasi[i] << " ";
        }
        cout << endl;
    }

    int main(); {
        const int MAX = 87;
        int sasi[MAX], n;

    }