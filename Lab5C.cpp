#include <iostream>
using namespace std;
double calculate_Sn(int n) {
    if (n == 0) {
        return 0.0;
    }
    double sign = 1.0;
    if (n % 2 == 0) {
        sign = -1.0;
    }
    return (sign / n) + calculate_Sn(n - 1);
}
int main() {
    int n;
    cout << "--- Question 4: Sn Calculator ---" << endl;
    cout << "Enter the value for n: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        double result = calculate_Sn(n);
        cout << "Result: " << result << endl;
    }
    return 0;
}