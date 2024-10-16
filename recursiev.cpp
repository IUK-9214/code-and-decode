#include <iostream>
using namespace std;

int F(int n) {
    if (n <= 1) {
        return n;
    } else {
        return F(n - 1) + F(n - 2);
    }
}

int main() {
    int result = F(19);
    cout << result << endl;
    return 0;
}

