#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int hours = x / 60;
    while (hours >= 24) {
        hours -= 24;
    }
    cout << hours << " " << x % 60;
    return 0;
}
