#include "MyString.h"


int main()
{
    MyString c = "hello";
    MyString c1("friend");

    std::cout << "Before: \n";
    std::cout << "c1: " << c1 << "\n";
    std::cout << "c: " << c<< "\n";

    c.StrSwap(c1);

    std::cout << "After: \n";
    std::cout << "c1: " << c1 << "\n";
    std::cout << "c: " << c<< "\n";

    return 0;
}