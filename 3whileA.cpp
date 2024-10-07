#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, i = 1;
    cin >> x;
    while (i <= x) {
        int j = sqrt(i);
        if (j * j == i){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
