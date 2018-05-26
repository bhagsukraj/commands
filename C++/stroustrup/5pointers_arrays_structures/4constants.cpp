#include <iostream>
using namespace std;

int main(){
    const int c1 = 1;
    cout << c1 << endl;

    // dont know the constant value at compile time
    extern const int c2;
    const int *p = &c1;
    cout << p << endl;
    cout << *p << endl;
};
