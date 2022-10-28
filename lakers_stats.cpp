#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <array>
#include <algorithm>
#include "player.h"
//#include "file_creator.h"
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


void ShowPlayer(vector <Player> p, string n) 
{
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
        cout<<"Write the full name of the player of which you want to know the stat\t example 'Lebron James'\n";
        cin.ignore();
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
                            cout<<"Thank you, come back soon!!\n";
                            break;
                        default:
                            cout<<"Invalid option, try again";
                            break;
                    }
                }while(op!=13);
                file.close();
                cout<<"\n File named "+n+" created\n\n";
            }
        }
        cout<<"Type '1' if you would you like to write another player?\t else, type a '0'\n";
        cin>>s;
    }while(s==1);
    return;
}


void ShowMostPoints(vector <Player> p)
{
    int aux=0;
    for(int i=0; i<p.size(); i++)
    {
        if(p.at(i).GetTotal_points()>aux)
        {
            aux=p.at(i).GetTotal_points();
        }
    }
    for(int i=0; i<p.size(); i++)
    {
        if(p.at(i).GetTotal_points()==aux)
        {
            ShowPlayer(p, p.at(i).GetName());
        }
    }
    return;
}


void ShowTop5(vector <Player> p)
{
    int arr[p.size()];
    for(int i=0; i<p.size(); i++)
    {
        arr[i]=p.at(i).GetTotal_points();
    }
    sort(arr, arr+p.size());


    fstream file("Top 5.txt");
    file.open("Top 5.txt",ios::app);
    if(file.fail())
    {
        cout<<"The file couldn't be opened\n";
    }
    for(int i=p.size(); i>=p.size()-5; i--)
    {
        for(int j=0; j<p.size(); j++)
        {
            if(arr[i]==p.at(j).GetTotal_points())
            {
                file<<"Player: "<<p.at(j).GetName()<<endl;
                file<<"Ponts: "<<p.at(j).GetTotal_points()<<endl<<endl;
            }
        }
    }
    cout<<"\nFile names 'Top 5' created\n";
    return;
}



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


int main()
{
    string CorA, x;
    char cad;
    //Name, points, threes, FT, blocks, steals, assists
    Player Anthony ("Anthony Davis", 74, 24.7, 2, 0.66, 16, 5.3, 7, 2.3, 8, 2.7, 3, 1);
    Player Austin ("Austin Reaves", 14, 4.7, 2, 0.7, 4, 1.3, 0, 0, 1, .3, 4, 1.3);
    Player Damian("Damian Jones", 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1);
    Player Juan("Juan Toscano", 12, 4, 1, 0.3, 1, 0.3, 0, 0, 2, 0.7, 3, 1);
    Player Kendrick("Kendrick Nunn", 13, 4.3, 3, 1, 0, 0, 1, 0.3, 1, 0.3, 5, 1.7);
    Player Lebron ("Lebron James", 82, 27.3, 7, 2.3, 8, 5.7, 4, 1.33, 3, 1, 22, 7.3);
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

    do{
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
                cout<<"5 --\tShow the player with the most points in the season\n";
                cout<<"6--\tShow the top 5 players in the team\n";
                cout<<"7--\tEXIT\n\n";
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
                        cout<<"Write the full name of the player of which you want to know the stats\t example 'Lebron James'\n";
                        cin.ignore();
                        getline(cin,x);
                        ShowPlayer(players, x);
                        break;
                    case 4:
                        ShowSpecific(players);
                        break;
                    case 5:
                        ShowMostPoints(players);
                        break;
                    case 6:
                        ShowTop5(players);
                        break;
                    case 7:
                        cout<<"\nThank you, come back soon!!\n\n";
                        break;
                    default:
                        cout<<"Invalid option, try again\n\n";
                        break;
                }
            }while(op!=7);
        }
        else if(CorA=="potato")
        {
            string y;
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
                        cout<<"What is the name of the new player?\n";
                        cin.ignore();
                        getline(cin,y);
                        players.push_back(AddNew(y));
                        break;
                    case 2:
                        cout<<"Write the name of the player thet you want to modify\n";
                        cin.ignore();
                        getline(cin,y);
                        for(int i=0; i<players.size(); i++) if(y==players.at(i).GetName())players.erase(players.begin()+i-1);
                        players.push_back(ModifyList(y));
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
        cout<<"Type a 'y' if you want to keep browsing, if not, type 'n'\n";
        cin>>cad;
    }while(cad!='n' || cad!='N');
    return 0;
}
