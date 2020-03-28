/*
 * Project: MyBattleship
 * File: MyBattleship.cpp
 * Author: Louis Taing
 * Date: 03/27/2020
 * Description: Main function
 */

#include <iostream>
#include <vector>
using namespace std;

//Global vector
vector<string> input(36);

//functions
void PlayGrid();

int main()
{
    //marker
    string markerPlace = "SP";
    string markerHit = "HT";
    string markerMiss = "MT";


    cout << "Custom Battleship by Louis Taing" << endl << endl;
    cout << "Welcome to Battleship Captain!\n" << endl;

    string temp3;
    cout << "Press enter to continue" << endl;
    cin.ignore();

    cout << "How to play:" << endl;
    cout << "Sink you opponent's fleet before they sink yours by taking turns calling coordinates" << endl;
    cout << "HT represents a hit and MS represents a miss" << endl;
    cout << "Your ships may look something like this when placed on the grid: SP SP SP" << endl;
    cout << "You will have three ships at your disposal" << endl;
    cout << "The aircraft carrier (5 spaces), the Battleship (4 spaces) and the Submarine (3 spaces)" << endl;
    cout << "The playfield is a 6 x 6 grid labeled by 2 digit numbers to represent the spaces" << endl << endl;

    string temp;
    cout << "Press enter to continue" << endl;
    cin.ignore();

   
    cout << "Game rules:" << endl;
    cout << "When placing a ship, the coordinates must adjacent to the previous coordinate's direction (either vertically or horizontally)" << endl;
    cout << "For example ( 00 01 02 or 00 06 12 for the submarine)" << endl;
    cout << "vertical or horizontal ship placements only" << endl <<endl;

    string temp2;
    cout << "Ready? Press enter to start!" << endl;
    cin.ignore();
    //game startu

    //display grid
    PlayGrid();
    //Aircraft carrier placement (CONCEPTUAL work in progress)
    cout << endl << "Ok! Where would you like to place your aircraft carrier? (5 spaces)" << endl;
    cout << "Please type the intial coordinates according to key (ie 02 or 30)" << endl;
    int userPlacement;
    cin >> userPlacement;

    //int carrierSpaces = 5;
    ////declare battleship and sub spaces and add to while
    //while (carrierSpaces > 0)
    //{
    //    
        if (userPlacement >= 0 && userPlacement < 36)
        {
            //Perform adjacent check here (function) (series all vert/all horiz as well as adjacent aka no snake ships)

            //fill play grid
            input[userPlacement] = markerPlace;
            PlayGrid();
          /*  carrierSpaces--;*/
        }
        else
        {
            cout << "valid integer in the range of 0 to 35 please" << endl;
            //terminate temporary 
            return 0;
        }
       
   //}
   
    
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

    //Custom board needs alignment
    cout << "Battlefield: " << endl;
    cout << "  " << input[0] << " | " << input[1] << " | " << input[2] << " | " << input[3] << " | " << input[4] << " | " << input[5] << endl;
    //cout << " 06 | 07 | 08 | 09 | 10 | 11 " << endl;
    //cout << "----------------------------" << endl;
    //cout << " 12 | 13 | 14 | 15 | 16 | 17 " << endl;
    //cout << "----------------------------" << endl;
    //cout << " 18 | 19 | 20 | 21 | 22 | 23 " << endl;
    //cout << "----------------------------" << endl;
    //cout << " 24 | 25 | 26 | 27 | 28 | 29 " << endl;
    //cout << "----------------------------" << endl;
    //cout << " 30 | 31 | 32 | 33 | 34 | 35 " << endl;

}

