[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=21441382)
# matura-2025 — start

## 📁 Struktura repozytorium

```
.
├── src/
│   └── main.cpp                # główny plik źródłowy — tu realizujesz kolejne zadania
│
├── zalaczniki-2025/            # pliki tekstowe z danymi do zadań maturalnych
│
├── arkusz-2025.pdf             # pełny arkusz egzaminacyjny zadań maturalnych
├── odpowiedzi-2025.pdf         # klucz odpowiedzi lub przykładowe rozwiązania
├── CMakeLists.txt              # konfiguracja projektu CMake (budowanie, testy)
├── .gitignore                  # wykluczenia plików przy commitowaniu
└── README.md                   # ten plik — opis projektu
```

---

## 🧭 Opis

Repozytorium zawiera komplet materiałów i danych do zadań maturalnych z informatyki (rok 2025).
Celem jest implementacja kolejnych zadań w języku **C++** w pliku `src/main.cpp`.

---

## ⚙️ Jak uruchomić

W środowisku Codespaces lub lokalnie:

```bash
cmake -S . -B build
cmake --build build
./build/app
```

Program odczytuje pliki z folderu `zalaczniki-2025`, więc struktura katalogów musi pozostać niezmieniona.

## Warunki oceniania
Plik main c++ zacznij od zakomentowanego imienia i nazwiska!

Wyniki poszczegolnych zadan powinny byc zapisywane w nastepujacych plikach:

`wynik{numer-zadania}_{numer-podzadania}.txt`

np. dla zadania 2.1 

`wynik2_1.txt`

Dodatkowo zadania nalezy rozwiazywać w pliku `main.cpp` realizujac zadania poprzez deklaracje kolejnych metod o nazwie i sygnaturze zgodnej ponizej:

`Zadanie{numer-zadania}_{numer-podzadania}()`

np. dla zadnia 2.1

`Zadanie2_1()`

Program powinien realizować zadania w taki sposób aby funkcja wypisywała ten sam stumień wyjściowy do pliku wynikowego, jak równiez na ekran konsoli (standardowy strumień wyjściowy)

np. dla zadnaia 2.1

```
cout << result ;
wynik << result; //wynik jest ofstream do pliku wynik2_1
```


