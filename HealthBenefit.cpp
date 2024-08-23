#include "HealthBenefit.h"

HealthBenefit::HealthBenefit() : info(""), coverage("") {}

HealthBenefit::HealthBenefit(double amount,string coverage,string info)
{
    this->amount = amount;
    this->coverage = coverage;
    this->info = info;
}

HealthBenefit::~HealthBenefit() {}

double HealthBenefit::calculateBenefit() const
{
    return amount*0.2 ;
}

string HealthBenefit::displayBenefit() const
{
    return benefit::displayBenefit() + ", Info: " + info + ", Coverage: " + coverage;
}

