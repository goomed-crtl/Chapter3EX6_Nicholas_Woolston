/* Title: Chapter 3 Exerise 6 - Ingredient Adjuster
File Name : Chapter3EX6_Nick_Woolston.cpp
Programmer : Nicholas Woolston
Date : 27 / 09 / 2024
Requirements:Ingredient Adjuster
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar

• 1 cup of butter

• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
using namespace std;
const double sugarRatio = 1.5;
const double butterRatio = 1;
const double flourRatio = 2.75; 
const int originalPortion = 48;
double adjustedSugar;
double adjustedButter;
double adjustedFlour;

int main()
{
    cout << "This cookie recipe makes 48 cookies but can be adjusted to different serving sizes.\nHow many cookies would you like to make? \n";
    int userRatio;
    cin >> userRatio;
    if (userRatio > 0)
    {
        adjustedButter = butterRatio * userRatio / originalPortion;
        adjustedFlour = flourRatio * userRatio / originalPortion;
        adjustedSugar = sugarRatio * userRatio / originalPortion;
        cout << "To make " << userRatio << " cookies you will need: " << adjustedSugar << " cups of sugar, " << adjustedButter << " cups of butter, and " << adjustedFlour << " cups of flour.";
    }
    else
        cout << "You cannot make zero cookies. And to make negative cookies, just eat some! "; 
    // I'm still not entirely familiar with loops but I figured I'd implement and if else statement. Even then it doesn't differentiate between 0 and negative numbers.
}

