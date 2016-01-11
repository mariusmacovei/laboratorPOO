#include <iostream>
using namespace std;

class A{};

class B{
public:
    //conversie din A -constructor
    explicit B(const A& x) {}

    //conversie din A - atribuire
    B& operator= (const A& x) {return *this;}

    //conversie catre A
    operator A() {return A();}
};
void fn (B x) {}

int main()
{
    A foo;
    B bar (foo);
    bar = foo;
    foo = bar;
    fn (bar);
    return 0;
}
