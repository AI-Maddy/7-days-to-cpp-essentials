#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age = 0;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;

    cout << "Hello " << name << ", you are " << age << " years old.\n";
    return 0;
}
