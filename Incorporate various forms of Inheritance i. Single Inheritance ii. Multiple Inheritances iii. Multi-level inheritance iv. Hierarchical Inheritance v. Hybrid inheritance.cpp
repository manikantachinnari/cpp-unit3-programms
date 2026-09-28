#include<iostream>
using namespace std;

class Animal{
public:
void eat(){
cout<<"Animal is eating."<<endl;
}
};

class Dog:public Animal{
public:
void bark(){
cout<<"Dog is barking."<<endl;
}
};

class A{
public:
void displayA(){
cout<<"Class A"<<endl;
}
};

class B{
public:
void displayB(){
cout<<"Class B"<<endl;
}
};

class C:public A,public B{
public:
void displayC(){
cout<<"Class C (derived from A and B)"<<endl;
}
};

class Vehicle{
public:
void move(){
cout<<"Vehicle is moving."<<endl;
}
};

class Car:public Vehicle{
public:
void start(){
cout<<"Car started."<<endl;
}
};

class SportsCar:public Car{
public:
void turbo(){
cout<<"SportsCar in turbo mode!"<<endl;
}
};

class Shape{
public:
void draw(){
cout<<"Drawing a shape."<<endl;
}
};

class Circle:public Shape{
public:
void area(){
cout<<"Area of Circle = pr²"<<endl;
}
};

class Square:public Shape{
public:
void area(){
cout<<"Area of Square = a²"<<endl;
}
};

class Person{
public:
void speak(){
cout<<"Person speaks."<<endl;
}
};

class Student:public Person{
public:
void study(){
cout<<"Student is studying."<<endl;
}
};

class Employee{
public:
void work(){
cout<<"Employee is working."<<endl;
}
};

class WorkingStudent:public Student,public Employee{
public:
void balance(){
cout<<"Working student balances work and study."<<endl;
}
};

int main(){
cout<<"=== Single Inheritance ==="<<endl;
Dog d;
d.eat();
d.bark();

cout<<"\n=== Multiple Inheritance ==="<<endl;
C objC;
objC.displayA();
objC.displayB();
objC.displayC();

cout<<"\n=== Multilevel Inheritance ==="<<endl;
SportsCar sc;
sc.move();
sc.start();
sc.turbo();

cout<<"\n=== Hierarchical Inheritance ==="<<endl;
Circle c;
Square s;
c.draw();
c.area();
s.draw();
s.area();

cout<<"\n=== Hybrid Inheritance ==="<<endl;
WorkingStudent ws;
ws.speak();
ws.study();
ws.work();
ws.balance();

return 0;
}
