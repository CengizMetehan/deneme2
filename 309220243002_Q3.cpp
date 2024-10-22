#include <iostream>
#include <stack>
using namespace std;

bool palindromMu(string kelime) {
    stack<char> karakterYigini;  
    int uzunluk = kelime.length();

    for (int indeks = 0; indeks < uzunluk / 2; indeks++) {
        karakterYigini.push(kelime[indeks]);
    }

    int baslangicIndeksi = (uzunluk % 2 == 0) ? uzunluk / 2 : uzunluk / 2 + 1;

    for (int indeks = baslangicIndeksi; indeks < uzunluk; indeks++) {
        if (kelime[indeks] != karakterYigini.top()) {
            return false;  
        }
        karakterYigini.pop();
    }

    return true;  
}

int main() {
    string girilenKelime;

    cout << "Bir kelime girin: ";
    cin >> girilenKelime;

    if (palindromMu(girilenKelime)) {
        cout << girilenKelime << " bir palindrome." << endl;
    } else {
        cout << girilenKelime << " bir palindrome değil." << endl;
    }

    return 0;
}
