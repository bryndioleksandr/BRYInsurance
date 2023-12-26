#include "Person.h"

Person::Person(){
    this->surname = "";
    this->name = "";
    this->phoneNumber = "";
    this->city = "";
    this->birthDate = "";
    this->passport = "";
    this->email = "";
}
string Person::getSurname() {
    return surname;
}

string Person::getName() {
    return name;
}

string Person::getPhoneNumber() {
    return phoneNumber;
}

string Person::getBirthDate() {
    return birthDate;
}

string Person::getCity() {
    return city;
}

string Person::getPassport(){
    return passport;
}

string Person::getEmail(){
    return email;
}

void Person::setSurname(string surname) {
    this->surname = surname;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Person::setBirthDate(string birthDate) {
    this->birthDate = birthDate;
}

void Person::setCity(string city) {
    this->city = city;
}

void Person::setPassport(string passport){
    this->passport = passport;
}

void Person::setEmail(string email){
    this->email = email;
}
