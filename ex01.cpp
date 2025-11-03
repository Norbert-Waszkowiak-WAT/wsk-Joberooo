#include <iostream>

int main() {
    // 1) Deklaracja zmiennej
    int x = 42;

    // 2) Utworzenie wskaźnika na x
    int* p = &x;

    // 3) Wypisanie adresu (dwa równoważne sposoby) i wartości przez wskaźnik
    std::cout << "Adres x (p):    " << p << "\n";
    std::cout << "Adres x (&x):   " << &x << "\n";
    std::cout << "Wartosc *p:     " << *p << "\n";

    // 4) Zmiana wartości przez dereferencję
    *p = 100;

    // 5) Weryfikacja zmiany
    std::cout << "Nowa wartosc x: " << x << "\n";

    return 0;
}