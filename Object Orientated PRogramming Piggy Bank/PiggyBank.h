#pragma once
#include <iostream>
#include <string>

class PiggyBank
{
public:    
    PiggyBank();
    void savingsStaement();
private:
    int pennies;
    int quarters;
    int nickles;
    int dimes;
    int weeks;
    std::string name;
    double grandTotal,weeklyAverage,yearlyTotal,fiveYearTotal;
    void userName();
    void userPennies();
    void userQuarters();
    void userNickles();
    void userDimes();
    void userWeeks();
    void chart();
    void userGrandTotal();
    void userWeeklyAvergae();
    void userYearlyTotal();
    void userFiveYearTotal();
    

};

