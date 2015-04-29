#include <iostream>

void fib(int n)
{
    int preOld = 1;
    int old = 1;    
    int result;
    std::cout << "1\n1\n";
    for (int i = 2; i < n; i++)
    {
        result = old +preOld;
        preOld = old;
        old = result;
        std::cout << result << "\n";
    }
}

int main()
{
    int n;    
    std::cout << "Bitte geben Sie ein Zahl" << std::endl;
    std::cin >> n;
    fib(n);   
}
