#include <iostream>
#include <string>

int main()
{
    int ika;
    std::string nimi;

    std::cout << "Anna nimesi: ";
    std::cin >> nimi;   // lukee vain yhden sanan

    std::cout << "Anna ikasi: ";
    std::cin >> ika;

    std::cout << "Hei " << nimi << ", olet " << ika << " vuotta vanha." << std::endl;

    return 0;
}