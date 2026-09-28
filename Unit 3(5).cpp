#include <iostream>
using namespace std;


class Address {
public:
    string city;
    int pincode;

    Address(string c, int p) {
        city = c;
        pincode = p;
    }

    void show() {
        cout << "City: " << city
             << ", Pincode: " << pincode << endl;
    }
};

class Person {
private:
    string name;
    Address addr;

public:
    Person(string n, string c, int p)
        : name(n), addr(c, p) {}

    void display() {
        cout << "Name: " << name << endl;
        addr.show();
    }
};

class Number {
private:
    int value;

public:
    void set(int v) {
        value = v;
    }

    void show() {
        cout << "Value: " << value << endl;
    }
};

// this Pointer
class Counter {
private:
    int count;

public:
    Counter(int count) {
        this->count = count;
    }

    void display() {
        cout << "Count is: " << this->count << endl;
    }
};

// Virtual Base Class
class A {
public:
    void display() {
        cout << "Class A display()" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    Person p("Alice", "Mumbai", 400001);
    p.display();

    Number n;
    Number* ptr = &n;
    ptr->set(100);
    ptr->show();

    Counter c(10);
    c.display();

    D d;
    d.display();

    return 0;
}
