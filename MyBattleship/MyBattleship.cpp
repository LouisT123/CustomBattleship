/*
 * Project: MyBattleship
 * File: MyBattleship.cpp
 * Author: Louis Taing
 * Date: 03/27/2020
 * Description: Main function
 */

#include <iostream>
using namespace std;

//functions
void PlayGrid();

int main()
{
    cout << "Custom Battleship by Louis Taing" << endl << endl;

    //intro 
    cout << "Welcome to Battleship Captain!\n" << endl;
    cout << "You will have three ships at your disposal" << endl;
    cout << "The aircraft carrier (5 spaces), the Battleship (4 spaces) and the Submarine (3 spaces)" << endl << endl;
    string temp;
    cout << "Press enter to continue" << endl;
    cin.ignore();

    cout << endl << "The playfield is a 6 x 6 grid labeled by 2 digit numbers to represent the spaces" << endl;
   
    cout << "Rules:" << endl;
    cout << "When placing a ship, the coordinates must adjacent to the previous coordinate's direction (either vertically or horizontally)" << endl;
    cout << "For example ( 00 01 02 or 00 06 12 for the submarine)" << endl;
    cout << "vertical or horizontal ship placements only" << endl <<endl << endl;

    string temp2;
    cout << "Press enter to continue" << endl;
    cin.ignore();
    //game startu
    //display grid
    PlayGrid();
    //Aircraft carrier placement (CONCEPTUAL work in progress)
    cout << endl << "Ok! Where would you like to place your aircraft carrier? (5 spaces)" << endl;
  
    int carrierSpaces = 5;
    while (carrierSpaces > 0)
    {
        cout << "Please type the intial coordinates according to key (ie 02 or 30)" << endl;
        int aircraftCarrierPlacement;
        cin >> aircraftCarrierPlacement;
        if (aircraftCarrierPlacement >= 0 && aircraftCarrierPlacement < 36)
        {
            //Perform adjacent check here (function) (series all vert/all horiz as well as adjacent aka no snake ships)
            cout << "You have placed the part of the carrier at " << aircraftCarrierPlacement << endl;
            //fill play grid
            carrierSpaces--;
        }
        else
        {
            cout << "valid integer in the range of 00 to 35 please" << endl;
            //terminate temporary 
            return 0;
        }
       
    }
   
    
}
void PlayGrid()
{

    cout << "Key: " << endl;
    cout << " 00 | 01 | 02 | 03 | 04 | 05 " << endl;
    cout << "----------------------------" << endl;
    cout << " 06 | 07 | 08 | 09 | 10 | 11 " << endl;
    cout << "----------------------------" << endl;
    cout << " 12 | 13 | 14 | 15 | 16 | 17 " << endl;
    cout << "----------------------------" << endl;
    cout << " 18 | 19 | 20 | 21 | 22 | 23 " << endl;
    cout << "----------------------------" << endl;
    cout << " 24 | 25 | 26 | 27 | 28 | 29 " << endl;
    cout << "----------------------------" << endl;
    cout << " 30 | 31 | 32 | 33 | 34 | 35 " << endl;
    cout << endl << endl;

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
