#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}
