#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x % 4 == 0){
        cout << "YES";
    } else if (x == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
