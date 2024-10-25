#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor to initialize student details
    Student(string n, int a) : name(n), age(a) {}

    // Inline function to calculate the sum of two numbers
    inline int sum(int a, int b) {
        return a + b;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating a Student object
    Student student("John Doe", 20);
    
    // Displaying student details
    student.displayDetails();

    // Using the inline function to display the sum of two numbers
    int num1 = 15;
    int num2 = 25;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << student.sum(num1, num2) << endl;

    return 0;
}
