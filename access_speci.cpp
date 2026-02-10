#include <iostream>
using namespace std;

class MyClass {
private:
    int privateData; // Can only be accessed from within MyClass
public:
    int publicData; // Can be accessed from anywhere

    void displayData() {
        privateData = 10; // Accessible within the class
        cout << "Private data: " << privateData << endl;
        cout << "Public data: " << publicData << endl;
    }
};

int main() {
    MyClass obj;
    obj.publicData = 20; // Allowed: Accessing public member
    obj.displayData();

    // The following line would cause a compile-time error:
    // obj.privateData = 30; // Not allowed: Cannot access private member directly
return 0;
}
