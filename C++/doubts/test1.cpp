#include <iostream>
#include<string>

using namespace std;

bool isPower(int x, long int y) {
    if (x == 1) return (y == 1);
    if(y==1) return true;
    long int pow = x, i = 1;

    while (pow < y) {
        pow *= pow; 
        i *= 2;
    }

    if (pow == y) return true;

    long int low = x, high = pow;
    while (low <= high) {
        long int mid = low + (high - low) / 2;
        long int result = powl(x, int(log2(mid) / log2(x)));

        if (result == y) return true;
        if (result < y) low = mid + 1;
        else high = mid - 1;
    }

    return false;
}

int main() {
    cout << boolalpha;
    cout << isPower(10, 1) << endl;
    cout << isPower(1, 20) << endl;
    cout << isPower(2, 128) << endl;
    cout << isPower(2, 30) << endl;
    return 0;
}