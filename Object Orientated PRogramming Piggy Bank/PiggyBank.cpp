#include "PiggyBank.h"
#include <iostream>
#include <iomanip>
using namespace std;

PiggyBank::PiggyBank()
{
    
}



// Method that prints savings statement
void PiggyBank::savingsStaement()
{
// Running preresiqute methods first in order to get proper amounts

    userName();
    userPennies();
    userNickles();
    userDimes();
    userQuarters();
    userWeeks();
    chart();
    userGrandTotal();
    userWeeklyAvergae();
    userYearlyTotal();
    userFiveYearTotal();


    // Outputing savings statement now
    cout << name << ", you have saved an average of $" << setprecision(2) << fixed << weeklyAverage << " per week. Congrats!\n";
    cout << "You have/will save(d) $" << setprecision(2) << fixed << yearlyTotal << " in a year. That's amazing, " << name << endl;
    cout << name << ", your current balance is $" << setprecision(2) << fixed << grandTotal << ". Congrats!\n";
    cout << "In five years, your balance will be $" << setprecision(2) << fixed << fiveYearTotal << " " << name << ", if you \n keep up the same rate of saving!\n";
}


// method that takes user's name
void PiggyBank::userName()
{
    cout << "Hello user! Please enter your name:\n";
      cin >> name;
}

// Method Takes input and stores it into pennies
void PiggyBank::userPennies() 
{
    int temp;
    while (true)
    {
        cout << "Enter the amount of pennies you have\n";
        cin >> temp;
        if (temp >= 0)
        {
            break;
        }
        else
        {
            cout << "The number must be a positive number. Please try again.\n";
        }
    }
    pennies = temp;
}

// Method that takes input and stores it as quarters
void PiggyBank::userQuarters()
{
    int temp;
    while (true)
    {
        cout << "Enter the amount of quarters you have\n";
        cin >> temp;
        if (temp >= 0)
        {
            break;
        }
        else
        {
            cout << "The number must be a positive number. Please try again.\n";
        }
    }
    quarters = temp;
}

// Method that takes input and stores it as nickles
void PiggyBank::userNickles()
{
    int temp;
    while (true)
    {
        cout << "Enter the amount of nickels you have\n";
        cin >> temp;
        if (temp >= 0)
        {
            break;
        }
        else
        {
            cout << "The number must be a positive number. Please try again.\n";
        }
    }
    nickles = temp;
}

// Method that takes input and stores it in as dimes
 void PiggyBank::userDimes()
{
    int temp;
    while (true)
    {
        cout << "Enter the amount of dimes you have\n";
        cin >> temp;
        if (temp >= 0)
        {
            break;
        }
        else
        {
            cout << "The number must be a positive number. Please try again.\n";
        }
    }
    dimes = temp;
}

// method that takes input and stores it into weeks
void PiggyBank::userWeeks()
{
    int temp;
    while (true)
    {
        cout << "Enter the amount of weeks you have been saving for\n";
        cin >> temp;
        if (temp > 52)
        {
            cout << "You entered more then 52 weeks. That is more than a year. Would you like to continue or enter a new number?\n Enter continue to proceed or anything else to enter a new number\n";
            string choice;
            cin >> choice;
            if (choice == "continue" || choice == "Continue")
            {
                break;
            }
            else
            {
                cout << "You have selected to enter in a new number\n";
                continue;
            }
        }
        if (temp >= 0)
        {
            break;
        }
        else
        {
            cout << "The number must be a positive number. Please try again.\n";
        }
    }
   weeks = temp;
}


// Method that calculates the grand total based off of previous outputs
void PiggyBank::userGrandTotal()
{
    double total = pennies * .01;
    total = total + (quarters * .25);
    total = total + (nickles * .05);
    total = total + (dimes * .1);
    grandTotal = total;
}


// Method that prints a chart with user inputs
void PiggyBank::chart()
{
    //  Cout that prints the header for the chart
    cout << setw(20) << "Name" << setw(20) << "Weeks saving" << setw(20) << "Quarters" << setw(20) << "Dimes" << setw(20) << "Nickels" << setw(20) << "Pennies" << endl;
    // Cout statement that prints values of coins
    cout << setw(20) << name << setw(20) << weeks << setw(20) << quarters << setw(20) << dimes << setw(20) << nickles << setw(20) << pennies << endl;
    cout << endl;
}

// A method that calculates how much a user has been saving on average per week
void PiggyBank::userWeeklyAvergae()
{
    double average = grandTotal/weeks;
    weeklyAverage = average;
}

// Method that calculates the potential total after a year using the weekly average
void PiggyBank::userYearlyTotal()
{
    yearlyTotal = weeklyAverage * 52;
    
}

// Method that calculates the potential savings after five years
void PiggyBank::userFiveYearTotal()
{
    double fiveYears;
    fiveYears = yearlyTotal * 5;
    fiveYearTotal = fiveYears;
}