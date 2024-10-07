#include <iostream>
using namespace std;

int main() {
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if(x1 - x == y1 - y){
        cout << "YES";
    } else if (-x1 + x == y1 - y){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
