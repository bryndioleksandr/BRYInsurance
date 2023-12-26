#ifndef USER_H
#define USER_H
#include <iostream>
#include "Person.h"

class User : public Person{
    std::string username;
    std::string password;
    std::string question;
    std::string answear;
    int balance;
public:
    User();
    std::string getUsername();
    std::string getPassword();
    std::string getQuestion();
    std::string getAnswear();
    string getSurname() override;
    string getName() override;
    string getPhoneNumber() override;
    string getBirthDate() override;
    string getPassport() override;
    string getEmail() override;
    string getCity() override;
    int getBalance();

    void setUsername(std::string username);
    void setPassword(std::string password);
    void setQuestion(std::string question);
    void setAnswear(std::string answear);
    void setSurname(string surname) override;
    void setName(string name) override;
    void setPhoneNumber(string phoneNumber) override;
    void setBirthDate(string birthDate) override;
    void setPassport(string passport) override;
    void setEmail(string email) override;
    void setCity(string city) override;
    void setBalance(int balance);

};






#endif // USER_H
