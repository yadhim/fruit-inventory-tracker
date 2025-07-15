cpp
#include <iostream>
using namespace std;


int main() {
// Simple if statement
  int age = 25;
  count << "1. Simple if example:\n";
  if (age >= 18){
    cout << "you are an adult.\n"

}

 // if-else statement
 cout << "\n2. if-else example:\n";
 if (age < 13) {
    cout << "you are a child.\n";
    else  {
        cout << " you are a teenager or adult.\n";

    }

    // if-else if ladder
    cout << "\n3. if-else if ladder example:\n";
    if (age < 13) {
        cout << "Child\n";
    } else if (age < 20) {
        cout << "Teenager\n";
    } else if (age < 65) {
        cout << "Adult\n";
    } else {
        cout << "Senior\n";

    }

    // Ternary operator
    cout <<"n4. Ternary operator example:\n";
    string status = (age >= 18) ? "Can vote" : "Cannot vote";
    count << " Voting status: " << status << "\n.";

    //Nested if statements

 cout << "\n5. Nested if example:\n";
    bool hasLicense = true;
    if (age >= 16) {
        if (hasLicense) {
            cout << "You can drive!\n";
        } else {
            cout << "You're old enough but need a license.\n";
        }
    } else {
        cout << "You're too young to drive.\n";
    }

    return 0;
}}
