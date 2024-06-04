//checking the number is prime number or no.
#include <iostream>
#include<cmath>
using namespace std;
bool Is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (Is_prime(num)) {
        cout << " is a prime number." << num << endl;
    } else {
        cout << " is not a prime number." << num << endl;
    }
    return 0;
}
