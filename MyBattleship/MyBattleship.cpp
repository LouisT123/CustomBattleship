/*
 * Project: MyBattleship
 * File: MyBattleship.cpp
 * Author: Louis Taing
 * Date: 03/27/2020
//Overview:
//1.) Placement of 3 ships, checking for overlap, illegal shapes and directions
//3.) Randomly generate enemy board
//2.) Gameplay: Hitting/missing enemy ships and your ships getting hit/missed
//3.) if fleetNumber = 0, closes program with win/loss
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Global vector
vector<string> input(25);

//functions
void PlayGrid();
void ShipPlacement();

int main()
{
 
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
    cout << "The Destroyer (2 spaces), the Battleship (4 spaces) and the Submarine (3 spaces)" << endl;
    cout << "The playfield is a 5 x 5 grid labeled by 2 digit numbers to represent the spaces" << endl << endl;

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
    //place ship and show on grid
    ShipPlacement();
}
void PlayGrid()
{

    cout << "key: " << endl;
    cout << " " << "a" << " | " << "b" << " | " << "c" << " | " << "d" << " | " << "e" <<  endl;
    cout << "-------------------" << endl;
    cout << " " << "f" << " | " << "g" << " | " << "h" << " | " << "i" << " | " << "j" << endl;
    cout << "-------------------" << endl;
    cout << " " << "k" << " | " << "l" << " | " << "m" << " | " << "n" << " | " << "o" << endl;
    cout << "-------------------" << endl;
    cout << " " << "p" << " | " << "q" << " | " << "r" << " | " << "s" << " | " << "t" << endl;
    cout << "-------------------" << endl;
    cout << " " << "u" << " | " << "v" << " | " << "w" << " | " << "x" << " | " << "y" << endl;
    cout << "-------------------" << endl;
    cout << endl << endl;

    //Custom board needs alignment
    cout << "Battlefield: " << endl;
    cout << " " << input[0] << " | " << input[1] << " | " << input[2] << " | " << input[3] << " | " << input[4] << endl;
    cout << "--------------" << endl;
    cout << " " << input[5] << " | " << input[6] << " | " << input[7] << " | " << input[8] << " | " << input[9] << endl;
    cout << "--------------" << endl;
    cout << " " << input[10] << " | " << input[11] << " | " << input[12] << " | " << input[13] << " | " << input[14] << endl;
    cout << "--------------" << endl;
    cout << " " << input[15] << " | " << input[16] << " | " << input[17] << " | " << input[18] << " | " << input[19] << endl;
    cout << "--------------" << endl;
    cout << " " << input[20] << " | " << input[21] << " | " << input[22] << " | " << input[23] << " | " << input[24] << endl;
    cout << "--------------" << endl;


}

void ShipPlacement()
{
    //marker
    string markerPlace = "S";
    string markerHit = "H";
    string markerMiss = "M";

    //Battleship Placement (CONCEPTUAL work in progress)
   

    //int battleshipSpaces = 5;
    //////declare battleship and sub spaces and add to while
    //while (battleshipSpaces > 0)
    //{
        cout << endl << "Ok! Where would you like to place your battleship? (4 spaces)" << endl;
        cout << "Please type the intial coordinates according to key (ie a)" << endl;
        int userPlacement;
        cin >> userPlacement;

        //if (userPlacement)
        //{
        //Perform adjacent check here (function) (series all vert/all horiz as well as adjacent aka no snake ships)

        //fill play grid
        input[userPlacement] = markerPlace;
        PlayGrid();
      /*  battleshipSpaces--;*/
    //    }
    //else
    //    {
    //    cout << "valid integer in the range of 0 to 25 please" << endl;
    //    //terminate if wrong
    //    return;
    //    }

    //}


}