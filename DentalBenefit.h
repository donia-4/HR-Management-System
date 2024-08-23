#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H

#include "benefit.h"
#include <string>

class DentalBenefit : public benefit
{
public:
    DentalBenefit();
    DentalBenefit(double,string);
    virtual ~DentalBenefit();

    double calculateBenefit() const override;
    string displayBenefit() const override;

private:
    string info;
};

#endif // DENTALBENEFIT_H
