#include <iostream>

int main()
{
    int c;
    std::cout << "Geben Sie ein Zahl" << std::endl;
    std::cin >> c;
    
    for (int i = c; i > 0; i--)
    {
        std::cout << i << "\n";
    }

}
