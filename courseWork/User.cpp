#include "User.h"

User::User(){
    this->username = "";
    this->password = "";
    this->question = "";
    this->answear = "";
    this->balance = 0;
}
std::string User::getUsername(){
    return this->username;
}
std::string User::getPassword(){
    return this->password;
}

std::string User::getQuestion(){
    return this->question;
}

std::string User::getAnswear(){
    return this->answear;
}

string User::getSurname(){
    return Person::getSurname();
}

string User::getName(){
    return Person::getName();
}

string User::getPhoneNumber(){
    return Person::getPhoneNumber();
}
string  User::getBirthDate(){
    return Person::getBirthDate();
}

string  User::getPassport(){
    return Person::getPassport();
}

string  User::getEmail(){
    return Person::getEmail();
}

string  User::getCity(){
    return Person::getCity();
}

int User::getBalance(){
    return balance;
}


void User::setUsername(std::string username){
    this->username = username;
}

void User::setPassword(std::string password){
    this->password = password;
}

void User::setQuestion(std::string question){
    this->question = question;
}

void User::setAnswear(std::string answear){
    this->answear = answear;
}

void User::setSurname(string surname){
    Person::setSurname(surname);
}

void User::setName(string name){
    Person::setName(name);
}

void User::setPhoneNumber(string phoneNumber){
    Person::setPhoneNumber(phoneNumber);
}

void User::setBirthDate(string birthDate){
    Person::setBirthDate(birthDate);
}

void User::setPassport(string passport){
    Person::setPassport(passport);
}

void User::setEmail(string email){
    Person::setEmail(email);
}

void User::setCity(string city){
    Person::setCity(city);
}

void User::setBalance(int balance){
    this->balance = balance;
}




