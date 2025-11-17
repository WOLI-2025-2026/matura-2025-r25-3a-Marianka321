#include <iostream>
#include <fstream>
#include <string>
#include "symbole.txt"
using namespace std;

int znakNaLiczbe(char z) {
    if (z == 'o') return 0;
    if (z == '+') return 1;
    return 2;  // '*'
}

long long policzTrojkowo(const string &s) {
    long long wynik = 0;
    for (int i = 0; i < s.length(); i++) {
        wynik = wynik * 3 + znakNaLiczbe(s[i]);
    }
    return wynik;
}

string naSymbole(long long liczba) {
    if (liczba == 0) return "o";
    string wynik = "";
    while (liczba > 0) {
        int r = liczba % 3;
        if (r == 0) wynik = "o" + wynik;
        else if (r == 1) wynik = "+" + wynik;
        else wynik = "*" + wynik;
        liczba /= 3;
    }
    return wynik;
}

int main() {

    ifstream plik("symbole.txt");
    if (!plik.good()) {
        cout << "Blad otwierania pliku symbole.txt\n";
        return 1;
    }

    string wiersze[2000];
    int ile = 0;

    while (plik >> wiersze[ile]) {
        ile++;
    }

//zadanie2.1
    cout << "Zadanie 2.1 (palindromy):\n";

    for (int i = 0; i < ile; i++) {
        string napis = wiersze[i];
        string odwrocony = "";
        for (int j = napis.length() - 1; j >= 0; j--) {
            odwrocony += napis[j];
        }
        if (napis == odwrocony) {
            cout << napis << "\n";
        }
    }

    cout << "\n";

//zadanie2.2
    cout << "Zadanie 2.2 (kwadraty 3x3):\n";

    int liczbaKwadratow = 0;

    for (int i = 1; i < ile - 1; i++) {
        for (int j = 1; j < 11; j++) {
            char srodek = wiersze[i][j];
            bool wszystkieTakieSame = true;
            for (int a = -1; a <= 1; a++) {
                for (int b = -1; b <= 1; b++) {
                    if (wiersze[i + a][j + b] != srodek) {
                        wszystkieTakieSame = false;
                    }
                }
            }
            if (wszystkieTakieSame) liczbaKwadratow++;
        }
    }

    cout << "Liczba kwadratow: " << liczbaKwadratow << "\n\n";

//zadanie2.3
    cout << "Zadanie 2.3 (najwieksza liczba):\n";

    long long najwieksza = -1;
    string najlepszyWiersz = "";

    for (int i = 0; i < ile; i++) {
        long long wartosc = policzTrojkowo(wiersze[i]);
        if (wartosc > najwieksza) {
            najwieksza = wartosc;
            najlepszyWiersz = wiersze[i];
        }
    }

    cout << "Najwiekszy zapis: " << najlepszyWiersz << "\n";
    cout << "Wartosc dziesietna: " << najwieksza << "\n\n";

//zadanie2.4
    cout << "Zadanie 2.4 (suma wszystkich liczb):\n";

    long long suma = 0;
    for (int i = 0; i < ile; i++) {
        suma += policzTrojkowo(wiersze[i]);
    }

    cout << "Suma dziesietnie: " << suma << "\n";
    cout << "Suma symbolicznie: " << naSymbole(suma) << "\n";

    return 0;
}