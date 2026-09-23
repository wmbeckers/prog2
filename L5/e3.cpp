#include <iostream>

using namespace std;

int main() {
    int val = 50;
    int* ptr = &val;

    *ptr = 100;

    cout << "val diretamente = " << val << endl;
    cout << "val por meio de *ptr = " << *ptr << endl;

    return 0;
}