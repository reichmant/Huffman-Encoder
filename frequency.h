/**
 **  * @author Thomas Reichman
 **  * @version 2015.11.18
 **  *
 **  * This class contains the basic set up for the Graph used to hold URLs
 **  * and the information associated with them, which is used for
 **  * setting up the BreadthFirstSearch method.
 **  *
 **  * This method searches through a website's linked pages to a certain level
 **  * and stops once it has nothing left to search, or has found a specified target.
 **/

#ifndef _FREQUENCY_H
#define _FREQUENCY_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
//#include <

using namespace std;

class frequency
{
public:
    frequency();
    vector<int> getFile(string filename);

private:


};

#endif
