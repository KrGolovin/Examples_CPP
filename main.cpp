#include "iostream"
#include "Car.h"

//class Element;
//
//class List {
//public:
//    int getSize() {
//        return size;
//    }
//    void addElement(int value) {
//        tail = new Element(value);
//        size += 1;
//    }
//    void deleteElement() {
//        size -= 1;
//    }
//
//    Element* head;
//    Element* tail;
//private:
//    int size = 0;
//};
//
//class Element {
//    int value;
//    Element* next;
//};

class Apple {
public:
    explicit Apple(int weight):
        weight_(weight)
    {}
    int getWeight() const {
        return weight_;
    }
private:
    int weight_ = 0;
};


class Bus : public Car {
public:
    Bus(int position, const std::string &personName, int countPersons, const std::string &currentStation):
        Car(position, personName, countPersons),
        currentStation(currentStation)
    {}
    int move(int len) override {
        position = len + 1;
    }

    std::string getCurrentStation() const {
        return currentStation;
    }

private:
    std::string currentStation;
};

class Excavator : public Car {
public:
    Excavator(int position, const std::string &personName, int countPersons, bool ladleState):
            Car(position, personName, countPersons),
            isLadleUp(ladleState)
    {}
    int move(int len) override {
        position = len + 2;
    }

    bool getLadleState() const {
        return isLadleUp;
    }

    void setLadleState(bool state) {
        isLadleUp = state;
    }

private:
    bool isLadleUp = false;
};





struct point_t {
    int x;
    int y;
};

int main() {
    Apple apple(5);
    std::cout << apple.getWeight() << std::endl;
    Bus bus(0, "Nikitiao", 10, "Vaganovo");
    Excavator excavator(0, "Fedos", 1, true);
    Car * cork[2] = {&bus, &excavator};
    Car * singleCar = &bus;
    for (int i = 0; i < 2; ++i) {
        cork[i]->move(0);
        std::cout << cork[i]->getPosition() << std::endl;
    }
    point_t point2 = {2,3};

    int position = 4;
    std::string personName = " Leha";
    int countPersons = 2;

    return 0;
}
