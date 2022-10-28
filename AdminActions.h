#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <array>
#include <algorithm>
#pragma once
#include "player.h"

using namespace std;

Player AddNew(string s)
{
    int i[6];
    float f[6];
    cout<<"How many Points has "<<s<<" made?\n";
    cin>>i[0];
    cout<<"What is his point average?\n";
    cin>>f[0];
    cout<<"How many Three pointers has "<<s<<" made?\n";
    cin>>i[1];
    cout<<"What is his three points average?\n";
    cin>>f[1];
    cout<<"How many Freethrows has "<<s<<" made?\n";
    cin>>i[2];
    cout<<"What is his freethrow average?\n";
    cin>>f[2];
    cout<<"How many Blocks has "<<s<<" made?\n";
    cin>>i[3];
    cout<<"What is his block average?\n";
    cin>>f[3];
    cout<<"How many Steals has "<<s<<" made?\n";
    cin>>i[4];
    cout<<"What is his steal average?\n";
    cin>>f[4];
    cout<<"How many Assists has "<<s<<" made?\n";
    cin>>i[5];
    cout<<"What is his assist average?\n";
    cin>>f[5];
    Player p(s,i[0],f[0],i[1],f[1],i[2],f[2],i[3],f[3],i[4],f[4],i[5],f[5]);
    return p;
}

Player ModifyList(string c)
{
    return AddNew(c);
}