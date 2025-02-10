#include <iostream>
using namespace std;

int sum(int limit, int count, int n, int step, int result) {
    if (count == limit) {
        return result;
    }

    cout << n;
    
    if (count < limit - 1) {
        cout << " + ";
    }

    result += n;

    return sum(limit, count + 1, n + step, step, result);
}

int main() {
    int limit, initialCount, initialValue, step;

    cout << "Enter limit: ";
    cin >> limit;

    cout << "Enter initial count: ";
    cin >> initialCount;

    cout << "Enter initial value: ";
    cin >> initialValue;

    cout << "Enter step size: ";
    cin >> step;

    int result = sum(limit, initialCount, initialValue, step, 0);

    cout <<  endl<< "Result: " << result << endl;
    return 0;
}

