//
//  main.cpp
//  chapter_4_question_4
//
//  Created by Will Slade on 12/30/19.
//  Copyright © 2019 Will Slade. All rights reserved.
//
/*
 Write a short program to simulate a ball being dropped off of a tower.
 To start, the user should be asked for the height of the tower in meters.
 Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity
 (the ball is not moving to start). Have the program output the height of the
 ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not
 go underneath the ground (height 0).

 Your program should include a header file named constants.h that contains a symbolic
 constant to hold the value of gravity (9.8).

 Use a function to calculate the height of the ball after x seconds. The function can
 calculate how far the ball has fallen after x seconds using the following formula: distance
 fallen = gravity_constant * x_seconds2 / 2
 */

#include <iostream> 
#include "constants.h"
#include "io.h"

int main ()
{
    double towerHeight { getTowerHeight() };
    int seconds { 4 };
    //int towerHeightValid { checkTowerHeight(towerHeight) };

    double distanceFallen { calculateDistanceFallen(towerHeight, seconds) };
    
    std::cout << "At " << seconds << " seconds, the ball is at height: " << towerHeight - distanceFallen << "\n";

    return 0;
}

double calculateDistanceFallen(double towerHeight, double seconds)
{
    //(gravity_constant * (seconds*seconds)) / 2
    
    double distanceFallen { (constants::gravity * (seconds * seconds)) / 2 };
    
    return distanceFallen;
    
}

double getTowerHeight()
{
    std::cout << "Please enter the tower height in meters: " << "\n";
    double tower_height {};
    std::cin  >> tower_height;

    return tower_height;
}

int checkTowerHeight(double tower_height)
{
    int isTowerHeightValid {};
    
    if (tower_height < 0)
        isTowerHeightValid = 0;
    else
        isTowerHeightValid = 1;
    
    return isTowerHeightValid;
}
