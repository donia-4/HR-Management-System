#include "DentalBenefit.h"

DentalBenefit::DentalBenefit() : info("") {}

DentalBenefit::DentalBenefit(double amount,string info)
{
    this->amount=amount;
    this->info = info;
}

DentalBenefit::~DentalBenefit() {}

double DentalBenefit::calculateBenefit() const
{
    return amount*0.1;
}

string DentalBenefit::displayBenefit() const
{
    return benefit::displayBenefit() + ", Info: " + info;
}
