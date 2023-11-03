#include <iostream>

using namespace std;

class ClassOne {
    private:
        string name;
        int age;
    public:
        ClassOne(string n, int a) {
            name = n;
            age = a;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
};

class ClassTwo {
    private:
        string name;
        int age;
    public:
        ClassTwo(ClassOne obj) {
            name = obj.getName();
            age = obj.getAge();
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    ClassOne obj1("John", 25);
    ClassTwo obj2 = obj1; // Conversion from ClassOne to ClassTwo
    obj2.display();
    return 0;
}

