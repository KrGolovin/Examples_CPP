#ifndef EXCJU_CAR_H
#define EXCJU_CAR_H
#include "iostream"

class Car
{
public:
    Car(int position, std::string personName, int countPersons):
            position(position),
            personName(personName),
            countPersons(countPersons)
    {}

    virtual ~Car() = default;

    virtual int move(int len) = 0;

    int getPosition() const;
//    {
//        return position;
//    }
    int getCountPersons() const;
//    {
//        return countPersons;
//    }
    void setCountPersons(int count) {
        assert(count >= 0 && count <= 5);
        countPersons = count;
    }
    std::string getPersonName() {
        return personName;
    }
protected:
    int position = 0;
    std::string personName;
    int countPersons;
};


#endif //EXCJU_CAR_H
