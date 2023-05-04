#include <iostream>
#include <memory>
#include <string>
#include <vector>

class VirtualPet {
public:
    VirtualPet(const std::string& name) : name_(name), happiness_(50), hunger_(50) {}
    virtual ~VirtualPet() = default;

    virtual void feed(int amount) { hunger_ -= amount; }
    virtual void play(int amount) { happiness_ += amount; }

    std::string getName() const { return name_; }
    int getHappiness() const { return happiness_; }
    int getHunger() const { return hunger_; }

protected:
    std::string name_;
    int happiness_;
    int hunger_;
};

class Dog : public VirtualPet {
public:
    Dog(const std::string& name) : VirtualPet(name) {}

    void feed(int amount) override {
        hunger_ -= amount * 2;
    }

    void play(int amount) override {
        happiness_ += amount * 2;
    }
};

class Cat : public VirtualPet {
public:
    Cat(const std::string& name) : VirtualPet(name) {}

    void feed(int amount) override {
        hunger_ -= amount;
    }

    void play(int amount) override {
        happiness_ += amount * 1.5;
    }
};

int main() {
    std::unique_ptr<VirtualPet> pet = std::make_unique<Dog>("Buddy");
    pet->feed(20);
    pet->play(10);

    std::cout << "Pet Name: " << pet->getName() << "\nHappiness: " << pet->getHappiness() << "\nHunger: " << pet->getHunger() << std::endl;

    pet = std::make_unique<Cat>("Fluffy");
    pet->feed(20);
    pet->play(10);

    std::cout << "Pet Name: " << pet->getName() << "\nHappiness: " << pet->getHappiness() << "\nHunger: " << pet->getHunger() << std::endl;

    return 0;
}
