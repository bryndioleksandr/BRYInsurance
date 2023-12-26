#ifndef TRAVELINSURANCE_H
#define TRAVELINSURANCE_H
#include "Person.h"
#include <ctime>

class TravelInsurance : public Person
{
private:
    int userId;
    string travelPurpose;
    string coverageAmount;
    int price;
    string insuranceType;
    int numberOfPeople;
    int insurancePolicy;
    string warrantyStartDate;
    string warrantyEndDate;

public:
    TravelInsurance();
    int getUserId();
    string getTravelPurpose();
    string getCoverageAmount();
    int getPrice();
    string getInsuranceType();
    int getNumberOfPeople();
    int getInsurancePolicy();
    string getWarrantyStartDate();
    string getWarrantyEndDate();

    void setUserId(int userId);
    void setTravelPurpose(string travelPurpose);
    void setCoverageAmount(string coverageAmount);
    void setPrice(int price);
    void setInsuranceType(string insuranceType);
    void setNumberOfPeople(int numberOfPeople);
    void setInsurancePolicy(int insurancePolicy);
    void setWarrantyStartDate(string warrantyStartDate);
    void setWarrantyEndDate(string warrantyEndDate);
};

#endif // TRAVELINSURANCE_H
