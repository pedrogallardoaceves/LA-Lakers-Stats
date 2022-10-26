#include <iostream>
#include "player.h"
#include <vector>
#include <string>
//#include <pthread> 

using namespace std;


Player::Player(){}
Player::Player(string _Name, int Tpoints, float Apoints, int Tthrees, float Athrees, int Tfree, float Afree, int Tblocks, float Ablocks, int Tsteals, float Asteals, int Tassistance, float Aassistance)
{
    SetPlayer(_Name, Tpoints, Apoints, Tthrees, Athrees, Tfree, Afree, Tblocks, Ablocks, Tsteals, Asteals, Tassistance, Aassistance);
}

void Player::SetPlayer(string _Name, int Tpoints, float Apoints, int Tthrees, float Athrees, int Tfree, float Afree, int Tblocks, float Ablocks, int Tsteals, float Asteals, int Tassistance, float Aassistance)
{
    name=_Name;
    total_points=Tpoints;
    point_average=Apoints;
    total_threes=Tthrees;
    threes_average=Athrees;
    total_free=Tfree;
    free_average=Afree;
    total_blocks=Tblocks;
    blocks_average=Ablocks;
    total_steals=Tsteals;
    steals_average=Asteals;
    total_assistance=Tassistance;
    assistance_average=Aassistance;
}

void Player::PrintPlayer()
{
    cout<<"Player: "<<name<<endl<<endl;

    cout<<"Total points in the season: "<<total_points<<endl;
    cout<<"Points average in the season: "<<point_average<<endl<<endl;

    cout<<"Total three points in the season: "<<total_threes<<endl;
    cout<<"Three points average in the season: "<<threes_average<<endl<<endl;

    cout<<"Total free throws in the season: "<<total_free<<endl;
    cout<<"Free throws average in the season: "<<free_average<<endl<<endl;

    cout<<"Total blocks in the season: "<<total_blocks<<endl;
    cout<<"Blocks average in the season: "<<blocks_average<<endl<<endl;

    cout<<"Total steals in the season: "<<total_steals<<endl;
    cout<<"Steal average in the season: "<<steals_average<<endl<<endl;

    cout<<"Total assistance in the season: "<<total_assistance<<endl;
    cout<<"Assistance average in the season: "<<assistance_average<<endl<<endl;
}

    /*
    Lebron James*
    Anthony Davis
    Austin Reaves
    Damian Jones
    Dennis Schroder
    Juan Toscano
    Kendrick Nunn
    Lonnie Walker
    Max Christie
    Patrick Beverly
    Russel Westbrook
    Thomas Bryant
    Troy Brown
    Wenyen Gabriel
    */

int main()
{
    string CorA;

    Player a("Lebron James", 81,27.3,7,4,7,5,4,2,1,5,4,7);
    a.PrintPlayer();

    cout<<"Type a 'c' if your are a client or the password if you are the administrator\n";//the password is potato
    cin>>CorA;
    if(CorA=="c" || CorA=="C")
    {
        cout<<"You are a client";

    }
    else if(CorA=="potato")
    {
        cout<<"You are the admin";

    }
    else
    {
        cout<<"Invalid input, try again\n\n";
        main();
    }

    return 0;
}
