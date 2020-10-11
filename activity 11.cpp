// activity 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*//Author:       Christopher Parker, cjp5907, Lab Day & Time
//Class :       CMPSC121
//Experiment:   02
//File:         P:/compsc121/experiments/exp02.cpp
//Purpose:      Division modulo division

Academic Integrity Affidavit

I certify that, this program code is my work.  Others may have
assited me with planning and concepts, but the coe was written,
solely, by me.

I understand that submitting code which is totally or partially
the product of other individuals is a violation of the Academic
Integrity Policy and accepted ethical precepts. falsified
execution results are also results of improper activities. Such
violations may result in zero credit for the assignment, reduced
credit for the assignment, or course failure.
*/



/*Write a program to read the parts.txt file and display the 
cost of inventory for each of the part classes.  The file 
contains parts of class A, B, C and D. A typical line in the 
file would be:

P-11191 A 10 34.29

This is part number P-11191, a class A part, of which there are 10 in stock and each costs $34.29.  Your program, therefore, would add 342.90 to class A inventory.

The parts file is on Canvas in this week’s module in .zip format. After downloading it, right click and choose Extract.
*/


#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    
    int aParts, bParts, cParts, dParts, unkown, counts;

    string orderID; 
    char orderType; 

    int amountOfPartsOrderedA;
    int amountOfPartsOrderedB;
    int amountOfPartsOrderedC;
    int amountOfPartsOrderedD;
    double costOfEachPart; 


        double valueOfInventory;

        ifstream ourFile; 
        ourFile.open("parts.txt");

        //example of how object ourFile works. 
        ourFile >> orderID; 
        ourFile >> orderType; 
        ourFile >> amountOfPartsOrderedA;
        ourFile >> costOfEachPart;

        ourFile >> orderID1;

        double costOfEachPartA;
        double costOfEachPartB;
        double costOfEachPartC;
        double costOfEachPartD;
        double costOfEachPartUnknown;

        double totalCostPartsA = 0; 
        double totalCostPartsB = 0;
        double totalCostPartsC = 0;
        double totalCostPartsD = 0;
        double oneLineCost; 


        switch (orderType) {
        case 'A': {

            oneLineCost = amountOfPartsOrderedA * costOfEachPartA; 
            totalCostPartsA += oneLineCost; 


            break; 
        }
        case 'B': {

            oneLineCost = amountOfPartsOrderedB * costOfEachPartB;
            totalCostPartsB += oneLineCost;

            break; 
        }
        case 'C': {

            oneLineCost = amountOfPartsOrderedC * costOfEachPartC;
            totalCostPartsC += oneLineCost;

            break; 

        }
        case 'D': {

            oneLineCost = amountOfPartsOrderedD * costOfEachPartD;
            totalCostPartsD += oneLineCost;

            break; 
        }
        default: { //this is for e and f cases or "unknown" 




            break; 
        }


          






        }

        cout << " case 'A'  " << endl;
        cout << " case 'B'  " << endl;
        cout << " case 'C'  " << endl;
        cout << " case 'D'  " << endl;
        cout << "default'  " << endl;







        ourFile.close(); 
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
