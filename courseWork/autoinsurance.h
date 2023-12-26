#ifndef AUTOINSURANCE_H
#define AUTOINSURANCE_H
#include "Person.h"
#include <ctime>

class AutoInsurance : public Person{
    int userId;
    string carNumber;
    int choiceCurrency;
    int carPrice;
    string carBrand;
    string carModel;
    int carYear;
    int insurancePolicy;
    string carCubicCapacity;
    string insuranceType;
    string technicalPassport;
    int coverageAmount;
    string motoCubicCapacity;
    string numOfPassengers;
    string trailerFor;
    int price;
    string autoType;
    string carryingCapacity;
    time_t warrantyStartDate;
    time_t warrantyEndDate;
public:
    AutoInsurance();
    AutoInsurance(AutoInsurance &other);

    static AutoInsurance& getInstance() {
        static AutoInsurance instance;
        return instance;
    }

    string getTechnicalPassport();
    string getMotoCubicCapacity();
    string getNumOfPassengers();
    string getTrailerFor();

    string getSurname() override;
    string getName() override;
    string getPhoneNumber() override;
    string getCarNumber();
    string getCarModel();
    int getChoiceCurrency();
    int getUserId();
    int getCarPrice();
    string getCarBrand();
    int getCarYear();
    int getInsurancePolicy();
    string getCarCubicCapacity();
    string getCarryingCapacity();
    string getInsuranceType();
    int getCoverageAmount();
    int getPrice();
    string getAutoType();
    time_t getWarrantyStartDate();
    time_t getWarrantyEndDate();



    void setTechnicalPassport(string technicalPassport);
    void setMotoCubicCapacity(string motoCubicCapacity);
    void setNumOfPassengers(string numOfPassengers);
    void setTrailerFor(string trailerFor);
    void setUserId(int userId);
    void setSurname(string surname) override;
    void setName(string name) override;
    void setPhoneNumber(string phoneNumber) override;
    void setCarNumber(string carNumber);
    void setChoiceCurrency(int choiceCurrency);
    void setCarPrice(int carPrice);
    void setCarBrand(string carBrand);
    void setCarModel(string carModel);
    void setCarYear(int carYear);
    void setInsurancePolicy(int insurancePolicy);
    void setCarCubicCapacity(string carCubicCapacity);
    void setCarryingCapacity(string carryingCapacity);
    void setInsuranceType(string insuranceType);
    void setCoverageAmount(int coverageAmount);
    void setPrice(int price);
    void setAutoType(string autoType);
    void setWarrantyStartDate(time_t warrantyStartDate);
    void setWarrantyEndDate(time_t warrantyEndDate);

};

#endif // AUTOINSURANCE_H
