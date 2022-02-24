
#include <random>

constexpr int getRandomNo(int a)
{
  return a + 10;
}

int main()
{
    int a;
    const int varB = getRandomNo(a);       // OK
    constexpr int varC = getRandomNo(10);   // not OK! compilation error

    return 0;
}