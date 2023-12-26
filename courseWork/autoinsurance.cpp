#include "autoinsurance.h"

AutoInsurance::AutoInsurance() {
    Person();
    carNumber = "";
    carBrand = "";
    carModel = "";
    choiceCurrency = 0;
    carPrice = 0;
    carYear = 0;
    insurancePolicy = 0;
    carCubicCapacity ="";
    technicalPassport = "";
    carryingCapacity = "";
    trailerFor = "";
    numOfPassengers = "";
    insuranceType = "";
    coverageAmount = 0;
    price = 0;
    autoType = "";
    carryingCapacity = "";
    warrantyStartDate = 0;
    warrantyEndDate = 0;
}

AutoInsurance::AutoInsurance(AutoInsurance &other){
    userId = other.userId;
    carNumber = other.carNumber;
    choiceCurrency = other.choiceCurrency;
    carPrice = other.carPrice;
    carBrand = other.carBrand;
    carModel = other.carModel;
    carYear = other.carYear;
    insurancePolicy = other.insurancePolicy;
    carCubicCapacity = other.carCubicCapacity;
    insuranceType = other.insuranceType;
    technicalPassport = other.technicalPassport;
    coverageAmount = other.coverageAmount;
    motoCubicCapacity = other.motoCubicCapacity;
    numOfPassengers = other.numOfPassengers;
    trailerFor = other.trailerFor;
    price = other.price;
    autoType = other.autoType;
    carryingCapacity = other.carryingCapacity;
    warrantyStartDate = other.warrantyStartDate;
    warrantyEndDate = other.warrantyEndDate;
}

string AutoInsurance::getTechnicalPassport(){
    return this->technicalPassport;
}

string AutoInsurance::getMotoCubicCapacity(){
    return this->motoCubicCapacity;
}

string AutoInsurance::getNumOfPassengers(){
    return this->numOfPassengers;
}

string AutoInsurance::getTrailerFor(){
    return this->trailerFor;
}

string AutoInsurance::getSurname(){
    return Person::getSurname();
}

int AutoInsurance::getUserId(){
    return this->userId;
}
string AutoInsurance::getName(){
    return Person::getName();
}

string AutoInsurance::getPhoneNumber(){
    return Person::getPhoneNumber();
}

std::string AutoInsurance::getCarNumber() {
    return carNumber;
}

int AutoInsurance::getChoiceCurrency() {
    return choiceCurrency;
}

int AutoInsurance::getCarPrice() {
    return carPrice;
}

std::string AutoInsurance::getCarBrand() {
    return carBrand;
}

string AutoInsurance::getCarModel(){
    return carModel;
}

int AutoInsurance::getCarYear() {
    return carYear;
}

int AutoInsurance::getInsurancePolicy() {
    return insurancePolicy;
}

string AutoInsurance::getCarCubicCapacity() {
    return carCubicCapacity;
}

string AutoInsurance::getCarryingCapacity() {
    return carryingCapacity;
}

string AutoInsurance::getInsuranceType() {
    return insuranceType;
}

int AutoInsurance::getCoverageAmount() {
    return coverageAmount;
}

int AutoInsurance::getPrice() {
    return price;
}

string AutoInsurance::getAutoType() {
    return autoType;
}

time_t AutoInsurance::getWarrantyStartDate() {
    return warrantyStartDate;
}

time_t AutoInsurance::getWarrantyEndDate() {
    return warrantyEndDate;
}

// Сетери

void AutoInsurance::setTechnicalPassport(string technicalPassport){
    this->technicalPassport = technicalPassport;
}

void AutoInsurance::setMotoCubicCapacity(string motoCubicCapacity){
    this->motoCubicCapacity = motoCubicCapacity;
}

void AutoInsurance::setNumOfPassengers(string numOfPassengers){
    this->numOfPassengers = numOfPassengers;
}

void AutoInsurance::setTrailerFor(string trailerFor){
    this->trailerFor = trailerFor;
}

void AutoInsurance::setSurname(string surname){
    Person::setSurname(surname);
}

void AutoInsurance::setUserId(int userId){
    this->userId = userId;
}

void AutoInsurance::setName(string name){
    Person::setName(name);
}

void AutoInsurance::setPhoneNumber(string phoneNumber){
    Person::setPhoneNumber(phoneNumber);
}

void AutoInsurance::setCarNumber(string carNumber) {
    this->carNumber = carNumber;
}

void AutoInsurance::setChoiceCurrency(int choiceCurrency) {
    this->choiceCurrency = choiceCurrency;
}

void AutoInsurance::setCarPrice(int carPrice) {
    this->carPrice = carPrice;
}

void AutoInsurance::setCarBrand(string carBrand) {
    this->carBrand = carBrand;
}

void AutoInsurance::setCarModel(string carModel){
    this->carModel = carModel;
}

void AutoInsurance::setCarYear(int carYear) {
    this->carYear = carYear;
}

void AutoInsurance::setInsurancePolicy(int insurancePolicy) {
    this->insurancePolicy = insurancePolicy;
}

void AutoInsurance::setCarCubicCapacity(string carCubicCapacity) {
    this->carCubicCapacity = carCubicCapacity;
}

void AutoInsurance::setCarryingCapacity(string carryingCapacity) {
    this->carryingCapacity = carryingCapacity;
}

void AutoInsurance::setInsuranceType(string insuranceType) {
    this->insuranceType = insuranceType;
}

void AutoInsurance::setCoverageAmount(int coverageAmount) {
    this->coverageAmount = coverageAmount;
}

void AutoInsurance::setPrice(int price) {
    this->price = price;
}

void AutoInsurance::setAutoType(string autoType) {
    this->autoType = autoType;
}

void AutoInsurance::setWarrantyStartDate(time_t warrantyStartDate) {
    this->warrantyStartDate = warrantyStartDate;
}

void AutoInsurance::setWarrantyEndDate(time_t warrantyEndDate) {
    this->warrantyEndDate = warrantyEndDate;
}





