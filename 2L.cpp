#include <iostream>
using namespace std;

int main() {
    int x, y, k;
    cin >> x >> y >> k;
    if (k > x * y){
        cout << "NO";
    } else if (k % x == 0 || k % y == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
