#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, i = 1, counter = 0;
    cin >> x;
    if(x <= 1){
        cout << 0;
        return 0;
    }
    while (i < x) {
        i *= 2;
        counter += 1;
    }
    cout << counter;
    return 0;
}
