#include <iostream>
using namespace std;

class SumNaturalNumbers {
private:
    int n;
    int sum;

public:
    // Default constructor
    SumNaturalNumbers() {
        cout << "Enter the value of n: ";
        cin >> n;
        sum = 0;

        // Calculate the sum of the first n natural numbers
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }

    // Function to display the result
    void displaySum() const {
        cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    // Creating an object of SumNaturalNumbers class
    SumNaturalNumbers obj;
    
    // Displaying the sum
    obj.displaySum();

    return 0;
}
