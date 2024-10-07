#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, sum = 0;
    cin >> x;
    while (x != 0){
        int temp = x % 10;
        sum += temp;
        x /= 10;
    }
    cout << sum;
    return 0;
}
