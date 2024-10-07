#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, sum = 0;
    cin >> x >> y;
    while (x != 0){
        int temp = x % 10;
        if (temp == y) {
            sum += 1;
        }
        x /= 10;
    }
    cout << sum;
    return 0;
}
