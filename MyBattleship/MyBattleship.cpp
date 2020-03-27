// MyBattleship.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//functions
void PlayGrid();

int main()
{
    //intro 
    cout << "Welcome to Battleship Captain!\n" << endl;
    cout << "You will have three ships at your disposal" << endl;
    cout << "The aircraft carrier (5 spaces), the Battleship (4 spaces) and the Submarine (3 Holes)" << endl << endl;
    string temp;
    cout << "Press enter to continue" << endl;
    cin.ignore();

    cout << endl << "The playfield is a 6 x 6 grid labeled a-f for the x axis and 1-6 for the y axis" << endl;
   
    cout << "Rules:" << endl;
    cout << "When placing a ship, the coordinates must be in consecutive order (either vertically or horizontally)" << endl;
    cout << "For example (a4, a5, a6) or (a2, b2, c2) for the submarine)" << endl;
    cout << "vertical or horizontal ship placements only" << endl <<endl << endl;

    string temp2;
    cout << "Press enter to continue" << endl;
    cin.ignore();
    //game startu
    //display grid
    PlayGrid();
    //Aircraft carrier placement
    cout << endl << "Ok! Where would you like to place your aircraft carrier? (5 spaces)" << endl;
    cout << "Please type an intial coordinate according to key" << endl;
    int carrierSpaces = 5;
    while (carrierSpaces > 0)
    {
        string aircraftCarrier;
        cin >> aircraftCarrier;
        cout << "You have placed the part of the carrier at " + aircraftCarrier << endl;

        //perform syntax check here (place into array after syntax check?)
        carrierSpaces--;
    }
   

    //Battleship Placement
    //Make sure you cannot assign duplicate
    cout << "Ok! Where would you like to place your battleship? (4 spaces)" << endl;
    cout << "Please type an intial coordinate according to key'" << endl;
    int battleshipSpaces = 4;
    while (battleshipSpaces > 0)
    {
        string battleship;
        cin >> battleship;
        cout << "You have placed part of the battleship at " + battleship << endl;
        //perform syntax check here 
        battleshipSpaces--;
    }
 
    
}
void PlayGrid()
{

    cout << "Key: " << endl;
    cout << " 0 | 1 | 2 " << endl;
    cout << "-----------" << endl;
    cout << " 3 | 4 | 5 " << endl;
    cout << "-----------" << endl;
    cout << " 6 | 7 | 8 " << endl;
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
