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
//rng
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

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
    //fill player board w/ restrictions
    ShipPlacement();

    //Use rng to fill enemy board with 3 ships (see old textbook)
    //place ship and show on grid

    //gameplay starts
}
void Rng()
{
   
}

void PlayGrid()
{


    cout << "key: " << endl;
    cout << " " << "00" << " | " << "01" << " | " << "02" << " | " << "03" << " | " << "04" << endl;
    cout << "-------------------" << endl;
    cout << " " << "05" << " | " << "06" << " | " << "07" << " | " << "08" << " | " << "09" << endl;
    cout << "-------------------" << endl;
    cout << " " << "10" << " | " << "11" << " | " << "12" << " | " << "13" << " | " << "14" << endl;
    cout << "-------------------" << endl;
    cout << " " << "15" << " | " << "16" << " | " << "17" << " | " << "18" << " | " << "19" << endl;
    cout << "-------------------" << endl;
    cout << " " << "20" << " | " << "21" << " | " << "22" << " | " << "23" << " | " << "24" << endl;
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
    //Move to gameplay?
    string markerHit = "H";
    string markerMiss = "M";

    //(CONCEPTUAL work in progress)

    int battleshipShipSpace = 4;

    while (battleshipShipSpace > 0)
    {
        cout << endl << "Ok! Where would you like to place your battleship? (4 spaces)" << endl;
        cout << "Please type the intial coordinates according to key (integer 0 - 24)" << endl;
        int userPlacement;
        cin >> userPlacement;

        
        //if (userPlacement <= 25 && userPlacement >= 0) perform int range check and duplicate input check (userplacement != old userplacement)

        //if (userPlacement)
        //{
        //Perform adjacent check here (function) (series all vert/all horiz as well as adjacent aka no snake ships)

        //fill play grid
        input[userPlacement] = markerPlace;
        PlayGrid();
        battleshipShipSpace--;
 

    }
    cout << "Well placed captain!" << endl;
    cout << "Now for the Submarine" << endl;

    int subShipSpace = 3;
    while (subShipSpace > 0)
    {
        cout << endl << "Ok! Where would you like to place your Submarine? (3 spaces)" << endl;
        cout << "Please type the intial coordinates according to key (integer 0 - 24)" << endl;
        int userPlacement;
        cin >> userPlacement;

        //if (userPlacement < 0 || userPlacement > 25) perform int range check
        //if (userPlacement)
        //{
        //Perform adjacent check here (function) (series all vert/all horiz as well as adjacent aka no snake ships)

        //fill play grid
        input[userPlacement] = markerPlace;
        PlayGrid();
        subShipSpace--;

    }

    cout << "Well placed captain!" << endl;
    cout << "Now for the Destroyer" << endl;

    int destroyerShipSpace = 2;
    while (destroyerShipSpace > 0)
    {
        cout << endl << "Ok! Where would you like to place your destroyer? (2 spaces)" << endl;
        cout << "Please type the intial coordinates according to key (integer 0 - 24)" << endl;
        int userPlacement;
        cin >> userPlacement;

        //if (userPlacement < 0 || userPlacement > 25) perform int range check
        //if (userPlacement)
        //{
        //Perform adjacent check here (function) (series all vert/all horiz as well as adjacent aka no snake ships)

        //fill play grid
        input[userPlacement] = markerPlace;
        PlayGrid();
        destroyerShipSpace--;

    }
    cout << "Well placed captain!" << endl;
    cout << "Now its time to play!" << endl;
}