#ifndef GADGETINSURANCE_H
#define GADGETINSURANCE_H
#include "Person.h"

class GadgetInsurance : public Person
{
    string gadgetBrand;
    string gadgetModel;
    int gadgetPrice;
    string phoneInsuranceNumber;
    string insuranceType;
    string coverageType;
    int insurancePrice;
    int insurancePolicy;
    int userId;
    string warrantyStartDate;
    string warrantyEndDate;
public:
    GadgetInsurance();

    static GadgetInsurance& getInstance() {
        static GadgetInsurance instance;
        return instance;
    }

    int getUserId();
    string getPhoneInsuranceNumber();
    string getGadgetBrand();
    string getGadgetModel();
    string getInsuranceType();
    int getGadgetPrice();
    int getInsurancePrice();
    int getInsurancePolicy();

    void setUserId(int userId);
    void setGadgetBrand(string gadgetBrand);
    void setGadgetModel(string gadgetModel);
    void setPhoneInsuranceNumber(string phoneInsuranceNumber);
    void setInsuranceType(string insuranceType);
    void setInsurancePrice(int insurancePrice);
    void setInsurancePolicy(int insurancePolicy);
    void setGadgetPrice(int gadgetPrice);
    string getCoverageType();
    void setCoverageType(string newCoverageType);
    string getWarrantyStartDate();
    void setWarrantyStartDate(string newWarrantyStartDate);
    string getWarrantyEndDate();
    void setWarrantyEndDate( string newWarrantyEndDate);
};

#endif // GADGETINSURANCE_H
