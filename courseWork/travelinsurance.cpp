#include "travelinsurance.h"

TravelInsurance::TravelInsurance()
{
    userId = 0;
    travelPurpose = "";
    coverageAmount = "";
    price = 0;
    insuranceType = "";
    numberOfPeople = 0;
    insurancePolicy = 0;
    warrantyStartDate = "";
    warrantyEndDate = "";
}

int TravelInsurance::getUserId(){
    return userId;
}

string TravelInsurance::getTravelPurpose(){
    return travelPurpose;
}

string TravelInsurance::getCoverageAmount(){
    return coverageAmount;
}

int TravelInsurance::getPrice(){
    return price;
}

string TravelInsurance::getInsuranceType(){
    return insuranceType;
}

int TravelInsurance::getNumberOfPeople(){
    return numberOfPeople;
}

int TravelInsurance::getInsurancePolicy(){
    return insurancePolicy;
}

string TravelInsurance::getWarrantyStartDate(){
    return warrantyStartDate;
}

string TravelInsurance::getWarrantyEndDate(){
    return warrantyEndDate;
}

void TravelInsurance::setUserId(int userId){
    this->userId = userId;
}

void TravelInsurance::setTravelPurpose(string travelPurpose){
    this->travelPurpose = travelPurpose;
}

void TravelInsurance::setCoverageAmount(string coverageAmount){
    this->coverageAmount = coverageAmount;
}

void TravelInsurance::setPrice(int price){
    this->price = price;
}

void TravelInsurance::setInsuranceType(string insuranceType){
    this->insuranceType = insuranceType;
}

void TravelInsurance::setNumberOfPeople(int numberOfPeople){
    this->numberOfPeople = numberOfPeople;
}

void TravelInsurance::setInsurancePolicy(int insurancePolicy){
    this->insurancePolicy = insurancePolicy;
}

void TravelInsurance::setWarrantyStartDate(string warrantyStartDate){
    this->warrantyStartDate = warrantyStartDate;
}

void TravelInsurance::setWarrantyEndDate(string warrantyEndDate){
    this->warrantyEndDate = warrantyEndDate;
}
