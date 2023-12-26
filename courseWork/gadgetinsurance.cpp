#include "gadgetinsurance.h"

string GadgetInsurance::getWarrantyStartDate()
{
    return warrantyStartDate;
}

void GadgetInsurance::setWarrantyStartDate(string newWarrantyStartDate)
{
    warrantyStartDate = newWarrantyStartDate;
}

string GadgetInsurance::getWarrantyEndDate()
{
    return warrantyEndDate;
}

void GadgetInsurance::setWarrantyEndDate(string newWarrantyEndDate)
{
    warrantyEndDate = newWarrantyEndDate;
}

GadgetInsurance::GadgetInsurance()
{

}

int GadgetInsurance::getUserId(){
    return this->userId;
}

string GadgetInsurance::getPhoneInsuranceNumber(){
    return this->phoneInsuranceNumber;
}

string GadgetInsurance::getGadgetBrand() {
    return gadgetBrand;
}

string GadgetInsurance::getGadgetModel() {
    return gadgetModel;
}

int GadgetInsurance::getGadgetPrice(){
    return gadgetPrice;
}

string GadgetInsurance::getInsuranceType() {
    return insuranceType;
}

string GadgetInsurance::getCoverageType()
{
    return coverageType;
}

int GadgetInsurance::getInsurancePrice() {
    return insurancePrice;
}

int GadgetInsurance::getInsurancePolicy() {
    return insurancePolicy;
}



void GadgetInsurance::setUserId(int userId){
    this->userId = userId;
}

void GadgetInsurance::setPhoneInsuranceNumber(string phoneInsuranceNumber){
    this->phoneInsuranceNumber = phoneInsuranceNumber;
}

void GadgetInsurance::setGadgetBrand(string gadgetBrand) {
    this->gadgetBrand = gadgetBrand;
}

void GadgetInsurance::setGadgetModel(string gadgetModel) {
    this->gadgetModel = gadgetModel;
}

void GadgetInsurance::setGadgetPrice(int gadgetPrice){
    this->gadgetPrice = gadgetPrice;
}

void GadgetInsurance::setInsuranceType(string insuranceType) {
    this->insuranceType = insuranceType;
}

void GadgetInsurance::setCoverageType(string coverageType)
{
    this->coverageType = coverageType;
}

void GadgetInsurance::setInsurancePrice(int insurancePrice) {
    this->insurancePrice = insurancePrice;
}

void GadgetInsurance::setInsurancePolicy(int insurancePolicy) {
    this->insurancePolicy = insurancePolicy;
}
