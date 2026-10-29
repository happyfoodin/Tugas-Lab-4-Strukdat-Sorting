#include <iostream>
#include <vector>
using namespace std;

void cetak(vector<string> &data){
    for (int i = 0; i < data.size(); i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Jumlah kata: ";
    cin >> n;

    vector<string> data(n);
    for (int i = 0; i < n; i++){
        cout << "Kata ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << endl;
    cout << "Data awal: ";
    cetak(data);

    for (int i = 1; i < n; i++){
        string kata = data[i];
        int j = i - 1;

        cout << endl;
        cout << "Langkah " << i << " (kata = " << kata << ")" << endl;

        while (j >= 0 && data[j] > kata){
            data[j + 1] = data[j];
            cout << "  geser " << data[j] << " ke posisi " << j + 1 << " : ";
            cetak(data);
            j--;
        }
        data[j + 1] = kata;
        cout << "  sisipkan " << kata << " di posisi " << j + 1 << " : ";
        cetak(data);
    }

    cout << endl;
    cout << "Hasil Insertion Sort: ";
    cetak(data);

    return 0;
}