#include <iostream>
#include "player.h"
#include <vector>
#include <string>
#include <fstream>
//#include <pthread.h> 

using namespace std;


void ShowNames(vector <Player> p)
{
    fstream file("Team Members.txt");
    file.open("Team Members.txt",ios::app);
    if(file.fail())
    {
        cout<<"The file couldn't be opened\n";
    }
    for(int i=0; i<p.size(); i++)
    {
        file<<p.at(i).GetName()<<endl;
    }
    cout<<"\n File named Team Members created\n\n";
    file.close();
    return;
}


void ShowAll(vector <Player> p)
{
    fstream file("All Stats.txt");
    file.open("All Stats",ios::app);
    if(file.fail())
    {
        cout<<"The file couldn't be opened\n\n";
    }
    for(int i=0; i<p.size(); i++)
    {
        file<<"Player: "<<p.at(i).GetName()<<endl;
        file<<"Total points in the season: "<<p.at(i).GetTotal_points()<<endl;
        file<<"Points average in the season: "<<p.at(i).GetPoint_average()<<endl<<endl;
        file<<"Total three points in the season: "<<p.at(i).GetTotal_threes()<<endl;
        file<<"Three points average in the season: "<<p.at(i).GetThree_average()<<endl<<endl;
        file<<"Total free throws in the season: "<<p.at(i).GetTotal_frees()<<endl;
        file<<"Free throws average in the season: "<<p.at(i).GetFree_average()<<endl<<endl;
        file<<"Total blocks in the season: "<<p.at(i).GetTotal_blocks()<<endl;
        file<<"Blocks average in the season: "<<p.at(i).GetBlock_average()<<endl<<endl;
        file<<"Total steals in the season: "<<p.at(i).GetTotal_Steals()<<endl;
        file<<"Steal average in the season: "<<p.at(i).GetSteal_average()<<endl<<endl;
        file<<"Total assistance in the season: "<<p.at(i).GetTotal_assistance()<<endl;
        file<<"Assistance average in the season: "<<p.at(i).GetAssistance_average()<<endl<<endl<<endl;
    }
    cout<<"\n File named All Stats created\n\n";
    file.close();
    return;
}


void ShowPlayer(vector <Player> p) 
{
    string n;
    cout<<"Write the name of the player of which you want to know the stats\n";
    getline(cin,n);
    fstream file(n+".txt");
    file.open(n+".txt",ios::app);
    if(file.fail())
    {
        cout<<"The file couldn't be opened\n";
    }
    for(int i=0; i<p.size(); i++)
    {
        if(n==p.at(i).GetName())
        {
            file<<"Player: "<<p.at(i).GetName()<<endl;
            file<<"Total points in the season: "<<p.at(i).GetTotal_points()<<endl;
            file<<"Points average in the season: "<<p.at(i).GetPoint_average()<<endl<<endl;
            file<<"Total three points in the season: "<<p.at(i).GetTotal_threes()<<endl;
            file<<"Three points average in the season: "<<p.at(i).GetThree_average()<<endl<<endl;
            file<<"Total free throws in the season: "<<p.at(i).GetTotal_frees()<<endl;
            file<<"Free throws average in the season: "<<p.at(i).GetFree_average()<<endl<<endl;
            file<<"Total blocks in the season: "<<p.at(i).GetTotal_blocks()<<endl;
            file<<"Blocks average in the season: "<<p.at(i).GetBlock_average()<<endl<<endl;
            file<<"Total steals in the season: "<<p.at(i).GetTotal_Steals()<<endl;
            file<<"Steal average in the season: "<<p.at(i).GetSteal_average()<<endl<<endl;
            file<<"Total assistance in the season: "<<p.at(i).GetTotal_assistance()<<endl;
            file<<"Assistance average in the season: "<<p.at(i).GetAssistance_average()<<endl<<endl;
        }
    }
    file.close();
    cout<<"\n File named "+n+" created\n\n";
    return;
}

void ShowSpecific(vector <Player> p)
{
    string n;
    int op, s;
    do{
        cout<<"Write the name of the player of which you want to know the stat \n";
        getline(cin,n);
        for(int i=0; i<p.size(); i++)
        {
            if(n==p.at(i).GetName())
            {
                fstream file(n+".txt");
                file.open(n+".txt",ios::app);
                if(file.fail())
                {
                    cout<<"The file couldn't be opened\n";
                }
                do{
                    cout<<"Select the option of the stat you want to know\n";
                    cout<<"1 - Total points\n";
                    cout<<"2 - Point average\n\n";
                    cout<<"3 - Total threes\n";
                    cout<<"4 - Three average\n\n";
                    cout<<"5 - Total freethrows\n";
                    cout<<"6 - Freethrow average\n\n";
                    cout<<"7 - Total blocks\n";
                    cout<<"8 - Blocks average\n\n";
                    cout<<"9 - Total steals\n";
                    cout<<"10 - Steal average\n\n";
                    cout<<"11 - Total assists\n";
                    cout<<"12 - Assist average\n\n";
                    cout<<"13 - EXIT\n\n";
                    cin>>op;
                    switch (op)
                    {
                        file<<"Player: "<<p.at(i).GetName()<<endl;
                        case 1:
                            file<<"Total points in the season: "<<p.at(i).GetTotal_points()<<endl;
                            break;
                        case 2:
                            file<<"Points average in the season: "<<p.at(i).GetPoint_average()<<endl;
                            break;
                        case 3:
                            file<<"Total three points in the season: "<<p.at(i).GetTotal_threes()<<endl;
                            break;
                        case 4:
                            file<<"Three points average in the season: "<<p.at(i).GetThree_average()<<endl;
                            break;
                        case 5:
                            file<<"Total free throws in the season: "<<p.at(i).GetTotal_frees()<<endl;
                            break;
                        case 6:
                            file<<"Free throws average in the season: "<<p.at(i).GetFree_average()<<endl;
                            break;
                        case 7:
                            file<<"Total blocks in the season: "<<p.at(i).GetTotal_blocks()<<endl;
                            break;
                        case 8:
                            file<<"Blocks average in the season: "<<p.at(i).GetBlock_average()<<endl;
                            break;
                        case 9:
                            file<<"Total steals in the season: "<<p.at(i).GetTotal_Steals()<<endl;
                            break;
                        case 10:
                            file<<"Steal average in the season: "<<p.at(i).GetSteal_average()<<endl;
                            break;
                        case 11:
                            file<<"Total assistance in the season: "<<p.at(i).GetTotal_assistance()<<endl;
                            break;
                        case 12:
                            file<<"Assistance average in the season: "<<p.at(i).GetAssistance_average()<<endl;
                            break;
                        case 13:
                            cout<<"See you soon!!\n";
                            break;
                        default:
                            cout<<"Invalid option, try again";
                            break;
                    }
                }while(op!=13);
                file.close();
                cout<<"\n File named "+n+" created\n\n";
                return;
            }
        }
        cout<<"Type '1' if you would you like to write another player?\n";
        cin>>s;
    }while(s==1);
}






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
    Anthony Davis
    Austin Reaves
    Damian Jones
    Juan Toscano
    Kendrick Nunn
    Lebron James
    Lonnie Walker
    Max Christie
    Patrick Beverley
    Troy Brown
    Russel Westbrook
    Wenyen Gabriel
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

    vector<Player> players;
    players.push_back(Anthony);players.push_back(Austin);players.push_back(Damian);
    players.push_back(Juan);players.push_back(Kendrick);players.push_back(Lebron);
    players.push_back(Lonnie);players.push_back(Max);players.push_back(Patrick);
    players.push_back(Troy);players.push_back(Russel);players.push_back(Wenyen);


    cout<<"Type a 'c' if your are a client or the password if you are the administrator\n";//the password is potato
    cin>>CorA;
    if(CorA=="c" || CorA=="C")
    {
        int op;
        do
        {
            cout<<"\n-------------USERS MENU--------------\n";
            cout<<"Select one option only: \n";
            cout<<"1 --\tShow all the team mebers in a file\n";
            cout<<"2 --\tShow all the team mebers and their stats in a file\n";
            cout<<"3 --\tShow all the stats of a specific player\n";
            cout<<"4 --\tShow specific stats from a player or players \n";
            cout<<"5 --\tShow which team mebers have the highest stats\n";
            cout<<"6 --\tShow the player with the most points in the season\n";
            cout<<"7--\tShow the top 5 players in the team\n";
            cout<<"8--\tEXIT\n\n";
            cin>>op;
            switch(op)
            {
                case 1:
                    ShowNames(players);
                    break;
                case 2:
                    ShowAll(players);
                    break;
                case 3:
                    ShowPlayer(players);
                    break;
                case 4:
                    ShowSpecific(players);
                    break;
                case 5:
                    //ShowHighest();
                    break;
                case 6:
                    //ShowMostPoints();
                    break;
                case 7:
                    //ShowTop5();
                    break;
                case 8:
                    cout<<"\nThank you, come back soon!!\n\n";
                    break;
                default:
                    cout<<"Invalid option, try again\n\n";
            }
        }while(op!=8);
    }
    else if(CorA=="potato")
    {
        int op;
        do{
            cout<<"\n-------------ADMIN MENU--------------\n";
            cout<<"Select one option only: \n";
            cout<<"1 --\tAdd a new team player\n";
            cout<<"2 --\tModify a player's information\n";
            cout<<"3 --\tEXIT\n";
            cin>>op;
            switch(op)
            {
                case 1:
                    //AddNew();
                    break;
                case 2:
                    //ModifyList();
                    break;
                case 3:
                    cout<<"\nThank you, come back soon!!\n\n";
                    break;
                default:
                    cout<<"Invalid option, try again\n\n";
                    break;
            }
        }while(op!=3);

    }
    else
    {
        cout<<"Invalid input, try again\n\n";
        main();
    }

    return 0;
}
