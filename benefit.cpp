#include "benefit.h"

benefit::benefit() : planType(""), amount(0.0) {}

benefit::~benefit() {}

benefit::benefit(string planType,double amount): planType(planType),amount(amount){}

string benefit::displayBenefit() const
{
    return "Plan Type: " + planType + ", Amount: " + to_string(amount);
}

