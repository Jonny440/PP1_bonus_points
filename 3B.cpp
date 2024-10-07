#include <iostream>
using namespace std;

int main() {
    int x, y, z, a;
    cin >> x >> y >> z >> a;
    for(int i = x; i <= y; i++){
        if (i % a == z){
            cout << i << " ";
        }
    }
    return 0;
}
