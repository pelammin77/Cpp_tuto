#include <iostream>

int palauta_tulos(int luku1, int luku2)
{
    return luku1 + luku2;
}

// Osoittimilla: kasvatetaan molempia arvoja
void osoitin_funktio(int *luku1, int *luku2)
{
    (*luku1)++;  // kasvatetaan arvoa
    (*luku2)++;
}

// Referensseillä: tehdään sama ilman dereferointia
void refe_funktio(int &luku1, int &luku2)
{
    luku1++;
    luku2++;
}

int main()
{
    int a = 2;
    int b = 4;


     // Palauttava funktio
    std::cout << "Summa: " << palauta_tulos(a, b) << std::endl;

    std::cout << "Alku: a=" << a << " b=" << b << std::endl;

    // Osoitinversio
    osoitin_funktio(&a, &b);
    std::cout << "Osoitin funktion jalkeen: a=" << a << " b=" << b << std::endl;

    // Referenssiversio
    refe_funktio(a, b);
    std::cout << "Referenssi funktion jalkeen: a=" << a << " b=" << b << std::endl;

   

    return 0;
}