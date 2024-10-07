#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int a = max(x, y);
    a = max(a, z);
    cout << a;
    return 0;
}
