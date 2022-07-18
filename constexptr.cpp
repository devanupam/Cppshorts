using namespace std;

constexpr int add10(int a)
{
  return a + 10;
}

int main()
{
    int a = 50;

    const int varB = add10(a);       // not OK! compilation error
    constexpr int varC = add10(10);   // not OK!
    constexpr int varD = add10(30);   // not OK!
    
    // static_assert(varB > varC, "Should not happen"); // compile error as non constant condtion used i.e. varB
    static_assert(varD > varC, "Should not happen"); // Compile time error if varD < varC

    return 0;
}
