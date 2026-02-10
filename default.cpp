#include <iostream>
using namespace std;

void greet(string name = "Guest") { // "Guest" is the default argument
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();          // Calls greet() with default argument "Guest"
    greet("Alice");   // Calls greet() with "Alice", overriding the default
    return 0;
}

