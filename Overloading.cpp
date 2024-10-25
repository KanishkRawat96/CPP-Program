#include <iostream>
using namespace std;

class SumValues {
public:

    SumValues(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }
    SumValues(float a, float b) {
        cout << "Sum of floats: " << (a + b) << endl;
    }
    SumValues(char a, char b) {
        cout << "Concatenation of characters: " << a << b << endl;
    }
};

int main() {
    SumValues ob(1,2);
    SumValues ob1(1.9,2.7);
    SumValues ob2('A','M');
    return 0;
}
