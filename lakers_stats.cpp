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
    Anthony Davis*
    Austin Reaves*

    Damian Jones*

    Juan Toscano*

    Kendrick Nunn*

    Lebron James*
    Lonnie Walker*

    Max Christie*

    Patrick Beverley*

    Troy Brown*

    Russel Westbrook*

    Wenyen Gabriel*
    */

int main()
{
    string CorA;
    //Name, points, threes, FT, blocks, steals, assists
    Player Anthony ("Anthony Davis", 74, 24.7, 2, 0.66, 16, 5.3, 7, 2.3, 8, 2.7, 3, 1);
    Player Austin ("Austin Reaves", 14, 4.7, 2, 0.7, 4, 1.3, 0, 0, 1, .3, 4, 1.3);
    Player Damian("Damian Jones", 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1);
    Player Juan("Juan Toscano", 12, 4, 1, 0.3, 1, 0.3, 0, 0, 2, 0.7, 3, 1);
    Player Kendrick("Kendrick Nunn", 13, 4.3, 3, 1, 0, 0, 1, 0.3, 1, 0.3, 5, 1.7);
    Player Lebron ("Lebron James", 82, 27.3, 7, 0.259, 8, 5.7, 4, 1.33, 3, 1, 22, 7.3);
    Player Lonnie("Lonnie Walker", 46, 15.3, 3, 1, 7, 2.3, 2, 0.7, 4, 1.3, 9, 3);
    Player Max("Max Christie", 9, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0);
    Player Patrick("Patrick Beverley", 15, 5, 3, 1, 6, 2, 4, 1.3, 7, 2.3, 8, 2.7);
    Player Troy("Troy Brown", 12, 4, 0, 0, 0, 0, 0, 0, 3, 1, 3, 1);
    Player Russel("Russel Westbrook", 31, 10.3, 1, 0.3, 8, 2.7, 0, 0, 6, 2, 13, 4.3);
    Player Wenyen("Wenyen Gabriel", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1);






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
