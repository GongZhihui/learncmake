#include <iostream>

struct A 
{
    char c;
    int i;
    short s;
    long long t;
};

int main()
{
    auto n = sizeof(A);
    n = sizeof(long long);
    std::cin.get();
    return 0;
}