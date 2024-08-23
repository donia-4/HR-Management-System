#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H

#include "benefit.h"

class HealthBenefit : public benefit
{
public:
    HealthBenefit();
    HealthBenefit(double,string,string);
    virtual ~HealthBenefit();

    double calculateBenefit() const override;
    string displayBenefit() const override;

private:
    string info;
    string coverage;
};

#endif // HEALTHBENEFIT_H

