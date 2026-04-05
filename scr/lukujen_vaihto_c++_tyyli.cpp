#include <iostream>

void vaihda(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int main() {
    int x = 10, y = 20;

    std::cout << "Ennen: x=" << x << " y=" << y << std::endl;

    vaihda(x, y);

    std::cout << "Jälkeen: x=" << x << " y=" << y << std::endl;

    return 0;
}