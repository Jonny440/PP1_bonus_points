#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, i = 1;
    cin >> x;
    while (i <= x) {
        cout << i << " ";
        i *= 2;
    }
    return 0;
}
