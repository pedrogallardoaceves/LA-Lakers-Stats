#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include "player.h"
#include "file_creator.h"
#include "AdminActions.h"
#include <pthread.h>
//#include <stdlib.h>

using namespace std;


int main()
{
    string CorA, x;
    char cad;
    pthread_t my_thread;

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

        cout<<"                                                                                                                   \n";
        cout<<"                                                                                                                   \n";
        cout<<"\n\n";
        cout<<"LLLLLLLLLLL                               kkkkkkkk                                                                 \n";
        cout<<"L:::::::::L                               k::::::k                                                                 \n";
        cout<<"L:::::::::L                               k::::::k                                                                 \n";
        cout<<"LL:::::::LL                               k::::::k                                                                 \n";
        cout<<"  L:::::L                 aaaaaaaaaaaaa    k:::::k    kkkkkkk eeeeeeeeeeee    rrrrr   rrrrrrrrr       ssssssssss   \n";
        cout<<"  L:::::L                 a::::::::::::a   k:::::k   k:::::kee::::::::::::ee  r::::rrr:::::::::r    ss::::::::::s  \n";
        cout<<"  L:::::L                 aaaaaaaaa:::::a  k:::::k  k:::::ke::::::eeeee:::::eer:::::::::::::::::r ss:::::::::::::s \n";
        cout<<"  L:::::L                          a::::a  k:::::k k:::::ke::::::e     e:::::err::::::rrrrr::::::rs::::::ssss:::::s\n";
        cout<<"  L:::::L                   aaaaaaa:::::a  k::::::k:::::k e:::::::eeeee::::::e r:::::r     r:::::r s:::::s  ssssss \n";
        cout<<"  L:::::L                 aa::::::::::::a  k:::::::::::k  e:::::::::::::::::e  r:::::r     rrrrrrr   s::::::s      \n";
        cout<<"  L:::::L                a::::aaaa::::::a  k:::::::::::k  e::::::eeeeeeeeeee   r:::::r                  s::::::s   \n";
        cout<<"  L:::::L         LLLLLLa::::a    a:::::a  k::::::k:::::k e:::::::e            r:::::r            ssssss   s:::::s \n";
        cout<<"LL:::::::LLLLLLLLL:::::La::::a    a:::::a k::::::k k:::::ke::::::::e           r:::::r            s:::::ssss::::::s\n";
        cout<<"L::::::::::::::::::::::La:::::aaaa::::::a k::::::k  k:::::ke::::::::eeeeeeee   r:::::r            s::::::::::::::s \n";
        cout<<"L::::::::::::::::::::::L a::::::::::aa:::ak::::::k   k:::::kee:::::::::::::e   r:::::r             s:::::::::::ss  \n";
        cout<<"LLLLLLLLLLLLLLLLLLLLLLLL  aaaaaaaaaa  aaaakkkkkkkk    kkkkkkk eeeeeeeeeeeeee   rrrrrrr              sssssssssss    \n";
        cout<<"                                                                                                                   \n";
        cout<<"                                                                                                                   \n";


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
                        pthread_create(&my_thread,NULL,ShowNames,&players);
                        pthread_join(my_thread,NULL);
                        //ShowNames(players);
                        break;
                    
                    case 2:
                        pthread_create(&my_thread,NULL,ShowAll,&players);
                        pthread_join(my_thread,NULL);
                        //ShowAll(players);
                        break;
                    case 3:
                        cout<<"Write the full name of the player of which you want to know the stats\t example 'Lebron James'\n";
                        cin.ignore();
                        getline(cin,x);
                        pthread_create(&my_thread,NULL,ShowPlayer,&(players,x));
                        pthread_join(my_thread,NULL);
                        //ShowPlayer(players, x);
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
                cout<<"3 --\t Erase a player from the team\n";
                cout<<"4 --\tEXIT\n";
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
                        cout<<"Write the name of the player that you want to modify\n";
                        cin.ignore();
                        getline(cin,y);
                        for(int i=0; i<players.size(); i++) if(y==players.at(i).GetName()) players.erase(players.begin()+i);
                        players.push_back(ModifyList(y));
                        cout<<"Changes applied correctly\n";
                        break;
                    case 3:
                        cout<<"Write the name of the player that you want to erase\n";
                        cin.ignore();
                        getline(cin,y);
                        for(int i=0; i<players.size(); i++) if(y==players.at(i).GetName()) players.erase(players.begin()+i);
                        cout<<"Player erased\n";
                        break;
                    case 4:
                        cout<<"\nThank you, come back soon!!\n\n";
                        break;
                    default:
                        cout<<"Invalid option, try again\n\n";
                        break;
                }
            }while(op!=4);

        }
        else
        {
            cout<<"Invalid input, try again\n\n";
            main();
        }
        cout<<"Type a 'y' if you want to keep browsing, if not, type 'n'\n";
        cin>>cad;
    }while(cad!='n');
    cout<<"\nThank you, come back soon!!\n\n";
    return 0;
}
