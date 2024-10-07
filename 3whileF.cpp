#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    int counter = 1;
    cin >> x >> y;
    while (x < y) {
        x = x + (x * 0.1);
        counter += 1;
    }
    cout << counter;
    return 0;
}
