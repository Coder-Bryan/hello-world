#include <iostream>
#inlcude <string>

using namespace std;

calss BaseClass
{
private:
    string test = "base";
public:
    BaseClass() { }
}

class DerivedClass : public BaseClass
{
private:
    string test = "derived";
public:
    DerivedClass() { }
}

void test_method(BaseClass* ptr)
{
    cout << ptr->test << endl;
}

int main()
{
    BaseClass* base = new BaseClass();
    DerivedClass* derived = new DerivedClass();

    test_method(derived);

    return 0;
}
