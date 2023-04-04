#include <iostream>
#include "Student.h";
#include "Hogwarts.h";
#include "Power.h";

Power::Power(const std::string& name, int damage) {
    this->name = name;
    this->damage = damage;
}
const std::string& Power::getName() {
    return this->name;
}

bool Power::operator<(const Power& other) {
    if (damage < other.damage) {
        return true;
    }
    return false;
};
int Power::getDamage() {
    return damage;
}
Student::Student() {
    name = "";
    house = "";
    power = nullptr;
    health = 0;
}
Student::Student(const std::string& name) {
    this->name = name;
    house = "";
    power = nullptr;
    health = 0;
}
const std::string& Student::getName() {
    return name;
}
const std::string& Student::getHouse() {
    return house;
}
void Student::setHouse(const std::string& house) {
    this->house = house;
}
int Student::getHealth() {
    return health;
}
void Student::takeDamage(int damage) {
    health = health - damage;
}
void Student::setPower(const Power* power) {
    this->power = power;
}
int Student::attack() {
    return
}
const Power* Student::getPower() {
    return power;
}
bool Student::isAlive() {
    if (health > 0) {
        return true;
    }
    return false;
}
Hogwarts::Hogwarts() {
    students = nullptr;
    size = 0;
}
Hogwarts::Hogwarts(const Hogwarts& other) {
    if (other.students == nullptr) {
        students = nullptr;
    }
    else {
        size = other.size;
        delete[] students;
        students = new Student[size];
        for (int i = 0; i < size; i++)
        {
            students[i] = other.students[i];
        }
    }
}
Hogwarts::Hogwarts(Hogwarts && other) {
    if (other.students == nullptr) {
        students = nullptr;
    }
    else {
        size = other.size;
        delete[] students;
        students = new Student[size];
        for (int i = 0; i < size; i++)
        {
            students[i] = std::move(other.students[i]);
        }
    }
}
Hogwarts& Hogwarts::operator=(const Hogwarts& other) {
    if (other.students == nullptr) {
        students = nullptr;
    }
    else {
        size = other.size;
        delete[] students;
        students = new Student[size];
        for (int i = 0; i < size; i++)
        {
            students[i] = other.students[i];
        }
    }
    return *this;
}
Hogwarts& Hogwarts::operator=(Hogwarts&& other) {
    if (other.students == nullptr) {
        students = nullptr;
    }
    else {
        size = other.size;
        delete[] students;
        students = new Student[size];
        for (int i = 0; i < size; i++)
        {
            students[i] = std::move(other.students[i]);
        }
    }
    return *this;
}
Hogwarts::~Hogwarts() {
    delete[] students;
}
void Hogwarts::addStudent(const Student& student) {
    size++;
    students[size] = student;
}
void Hogwarts::assignHouse(const std::string& studentName, const std::string& house) {
    for (int i = 0; i < size; i++)
    {
        if (students[i].getName() == studentName) {
            students[i].setHouse(house);
        }
    }
}
void Hogwarts::givePower(const std::string& name, const Power& power) {

}


int main()
{
    std::cout << "Hello World!\n";
}