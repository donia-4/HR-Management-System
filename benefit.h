#ifndef BENEFIT_H
#define BENEFIT_H

#include <string>

using namespace std;

class benefit
{
public:
    benefit();
    benefit(string,double);
    virtual ~benefit();

    virtual double calculateBenefit() const = 0;

    virtual string displayBenefit() const;

protected:
    string planType;
    double amount;
};

#endif // BENEFIT_H

