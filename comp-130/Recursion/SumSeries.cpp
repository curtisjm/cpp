
#include <iostream>
#include <iomanip>

using namespace std;

double sumSeries(int n) {
    if(n == 1) {
        return 1;
    } else {
        return 1.0 / n + sumSeries(n - 1);
    }
}

int main() {
    for(int i = 1; i <= 10; i++) {
        cout << "[" << i << "]: " << setprecision(3) << sumSeries(i) << endl;
    }

    return 0;
}