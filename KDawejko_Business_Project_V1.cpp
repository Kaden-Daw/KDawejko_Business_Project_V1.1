// KDawejko_ProjectV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Kaden Dawejko
// 9.27.26
// Business Project V1: This program will be used to order smoothies and smoothie bowls from the Sweetest Smoothie Stand. 
// User will be promted to choose between smoothie or smoothie bowl, and will then choose their desired flavor.
// The program will then perfom calculations to determine the price based off of their order.

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;

// Declare Constant Variables

const int SMOOTHIE_PRICE = 7;
const int SMOOTHIE_BOWL_PRICE = 10;
const int TAX_RATE = .1;

int main()
{

    // Declare Variables

    char orderType;
    int smoothieFlavor;
    int smoothieBowlFlavor;
    int subtotal = 0;
    int total = 0;
    int taxCost;

    // Business Menu

    //Add Setw
    cout << "Welcome to The Sweetest Smoothie Stand!\n";
    cout << "Where every bite is Naturally Sweet and Perfectly Blended!" << endl;
    cout << "****************************************************************************" << endl;
    cout << "What would you like to order today? We have: " << endl << endl;
    cout << "                        Smoothie Flavors (S):                             \n";
    cout << "    1. Strawberry Banana     2. Mango Pineapple    3. Triple Berry       " << endl << endl;
    cout << "                    Smoothie Bowl Flavors (B): " << endl;
    cout << "            1. Acai   2. Pink Dragon Friut   3. Triple Berry" << endl << endl;
    cout << "****************************************************************************" << endl << endl;
    cout << "Will you be having a Smoothie or Smoothie Bowl today?" << endl;
    cout << "(Please enter as 'S' or 'B'): " << endl;
    cin >> orderType;

    // 
    
    if (orderType == 'S' || orderType == 's')
    {  
        subtotal = subtotal + SMOOTHIE_PRICE;
        cout << "What flavor of smoothie would you like?" << endl;
        cout << "We have Strawberry Banana, Mango Pineapple, and Triple Berry." << endl;
        cin.ignore();
        cout << "(Please enter as 1,2, or 3)" << endl;
        cin >> smoothieFlavor;
        if (!cin)
        {
            cout << "You entered invalid data. Please enter as an interger: 1, 2 or 3." << endl;
            cout << "Program is terminating" << endl;
            return 1;
        }
        else if (smoothieFlavor == 1) 
        {
            cout << "You have ordered a Strawberry Banana smoothie!" << endl;
        }
        else if (smoothieFlavor == 2)
        {
            cout << "You have ordered a Mango Pineapple smoothie!" << endl;
        }
        else if (smoothieFlavor == 3)
        {
            cout << "You have ordered a Triple Berry smoothie!" << endl;
        }
        else if (smoothieFlavor < 1 || smoothieFlavor > 3)
        {
            cout << "You entered invalid data. Please enter as 1, 2 or 3." << endl;
            cout << "Program is terminating" << endl;
            return 1;
        }
        else
        {
            cout << "Please enter valid smoothie bowl flavor" << endl;
        return 1;
        }
    }
    else if (orderType == 'B' || orderType == 'b')
    {
        subtotal = subtotal + SMOOTHIE_BOWL_PRICE;
        cout << "What flavor of smoothie bowl would you like?" << endl;
        cout << "(Please enter as 1,2, or 3)" << endl;
        cin.ignore();
        cout << "We have Acai, Pink Dragon Fruit, and Triple Berry" << endl;
        cin >> smoothieBowlFlavor;
        if (!cin)
        {
            cout << "You entered invalid data. Please enter as 1, 2 or 3." << endl;
            cout << "Program is terminating" << endl;
            return 1;
        }
        else if (smoothieBowlFlavor == 1)
        {
            cout << "You have ordered an Acai smoothie bowl!" << endl;
        }
        else if (smoothieBowlFlavor == 2)
        {
            cout << "You have ordered a Pink Dragon Fruit smoothie bowl!" << endl;
        }
        else if (smoothieBowlFlavor == 3)
        {
            cout << "You have ordered a Triple Berry smoothie bowl!" << endl;
        }
        else if (smoothieBowlFlavor < 1 || smoothieBowlFlavor > 3)
        {
            cout << "You entered invalid data. Please enter as 1, 2 or 3." << endl;
            cout << "Program is terminating" << endl;
            return 1;
        }
        else
        {
            cout << "Please enter valid smoothie bowl flavor" << endl;
            return 1;
        }
    }
    else
    {
        cout << "Please enter valid option." << endl;
        return 1;
    }

    // Price Calculations

    taxCost = subtotal * TAX_RATE;
    total = total + (total + TAX_RATE);
    //setprecision(2);
    //fixed
    //showpoint

    // Output Receipt to console

    //Add Columns with setw

    cout << "*****************************************************************" << endl;
    cout << "Your subtotal is $" << subtotal << endl;
    cout << "Tax cost: $" << taxCost << endl;
    cout << "Your total is $" << total << endl;
    cout << "Thank you for eating with The Sweetest Smoothie Stand, enjoy!" << endl;
    cout << "*****************************************************************" << endl;

    return 0;

}
