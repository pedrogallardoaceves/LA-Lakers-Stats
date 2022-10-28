#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <array>
#include <algorithm>
#pragma once
#include "player.h"
#include <pthread.h>

using namespace std;


void *ShowNames(void * args)
{
    vector<Player>* p = static_cast<vector<Player>*>(args);
    fstream file("Team Members.txt");
    file.open("Team Members.txt",ios::app);
    if(file.fail())
    {
        cout<<"The file couldn't be opened\n";
    }
    for(int i=0; i<p->size(); i++)
    {
        file<<p->at(i).GetName()<<endl;
    }
    cout<<"\n File named Team Members created\n\n";
    file.close();
    pthread_exit(NULL);
}

void *ShowAll(void * args)
{
    vector<Player>* p = static_cast<vector<Player>*>(args);

    fstream file("All Stats.txt");
    file.open("All Stats",ios::app);
    if(file.fail())
    {
        cout<<"The file couldn't be opened\n\n";
    }
    for(int i=0; i<p->size(); i++)
    {
        file<<"Player: "<<p->at(i).GetName()<<endl;
        file<<"Total points in the season: "<<p->at(i).GetTotal_points()<<endl;
        file<<"Points average in the season: "<<p->at(i).GetPoint_average()<<endl<<endl;
        file<<"Total three points in the season: "<<p->at(i).GetTotal_threes()<<endl;
        file<<"Three points average in the season: "<<p->at(i).GetThree_average()<<endl<<endl;
        file<<"Total free throws in the season: "<<p->at(i).GetTotal_frees()<<endl;
        file<<"Free throws average in the season: "<<p->at(i).GetFree_average()<<endl<<endl;
        file<<"Total blocks in the season: "<<p->at(i).GetTotal_blocks()<<endl;
        file<<"Blocks average in the season: "<<p->at(i).GetBlock_average()<<endl<<endl;
        file<<"Total steals in the season: "<<p->at(i).GetTotal_Steals()<<endl;
        file<<"Steal average in the season: "<<p->at(i).GetSteal_average()<<endl<<endl;
        file<<"Total assistance in the season: "<<p->at(i).GetTotal_assistance()<<endl;
        file<<"Assistance average in the season: "<<p->at(i).GetAssistance_average()<<endl<<endl<<endl;
    }
    cout<<"\n File named All Stats created\n\n";
    file.close();
    return;
}




void *ShowPlayer(void * args) 
{
    vector<Player>* p = static_cast<vector<Player>*>(args);
    string* n=static_cast<string*>(args);

    fstream file(n+".txt");
    file.open(n+".txt",ios::app);
    if(file.fail())
    {
        cout<<"The file couldn't be opened\n";
    }
    for(int i=0; i<p->size(); i++)
    {
        if(n==p->at(i).GetName())
        {
            file<<"Player: "<<p->at(i).GetName()<<endl;
            file<<"Total points in the season: "<<p->at(i).GetTotal_points()<<endl;
            file<<"Points average in the season: "<<p->at(i).GetPoint_average()<<endl<<endl;
            file<<"Total three points in the season: "<<p->at(i).GetTotal_threes()<<endl;
            file<<"Three points average in the season: "<<p->at(i).GetThree_average()<<endl<<endl;
            file<<"Total free throws in the season: "<<p->at(i).GetTotal_frees()<<endl;
            file<<"Free throws average in the season: "<<p->at(i).GetFree_average()<<endl<<endl;
            file<<"Total blocks in the season: "<<p->at(i).GetTotal_blocks()<<endl;
            file<<"Blocks average in the season: "<<p->at(i).GetBlock_average()<<endl<<endl;
            file<<"Total steals in the season: "<<p->at(i).GetTotal_Steals()<<endl;
            file<<"Steal average in the season: "<<p->at(i).GetSteal_average()<<endl<<endl;
            file<<"Total assistance in the season: "<<p->at(i).GetTotal_assistance()<<endl;
            file<<"Assistance average in the season: "<<p->at(i).GetAssistance_average()<<endl<<endl;
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
