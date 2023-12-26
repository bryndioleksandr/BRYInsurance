#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person{
    string surname;
    string name;
    string phoneNumber;
    string birthDate;
    string passport;
    string email;
    string city;
public:
    Person();
    virtual string getSurname();
    virtual string getName();
    virtual string getPhoneNumber();
    virtual string getBirthDate();
    virtual string getPassport();
    virtual string getEmail();
    virtual string getCity();

    virtual void setSurname(string surname);
    virtual void setName(string name);
    virtual void setPhoneNumber(string phoneNumber);
    virtual void setBirthDate(string birthDate);
    virtual void setPassport(string passport);
    virtual void setEmail(string email);
    virtual void setCity(string city);
};

#endif // PERSON_H
