#include <iostream>
#include <string>
#include <vector>

class African {
public:
    virtual void Sleep() {};
};
class Animal {
public:
    virtual void Speak() { std::cout << "Animal speaks." << std::endl; }
    virtual void Jump() { std::cout << "Animal jumps." << std::endl; }
};
class Tiger : public Animal {
public:
    virtual void Speak() override { std::cout << "Tiger speaks." << std::endl; }
    virtual void Jump() { std::cout << "Tiger jumps." << std::endl; }
};
class Lion : public Animal {
public:
    virtual void Speak() override { std::cout << "Lion speaks." << std::endl; }
    virtual void Jump() { std::cout << "Lion jumps." << std::endl; }
};

int main() {
    Animal* object = nullptr;

    object = new Animal;
    object->Speak();

    object = new Tiger;
    object->Speak();

    object = new Lion;
    object->Speak();

    return 0;
}
