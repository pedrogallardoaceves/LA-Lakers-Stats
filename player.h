#include <string>

using namespace std;

class Player
{
    private:
        string name;
        int total_points;
        float point_average;
        int total_threes;
        float threes_average;
        int total_free;
        float free_average;
        int total_blocks;
        float blocks_average;
        int total_steals;
        float steals_average;
        int total_assistance;
        float assistance_average;
    public:
        Player();
        Player(string _Name, int Tpoints, float Apoints, int Tthrees, float Athrees, int Tfree, float Afree, int Tblocks, float Ablocks, int Tsteals, float Asteals, int Tassistance, float Aassistance);
        void SetPlayer(string _Name, int Tpoints, float Apoints, int Tthrees, float Athrees, int Tfree, float Afree, int Tblocks, float Ablocks, int Tsteals, float Asteals, int Tassistance, float Aassistance);
        void PrintPlayer();

        string GetName(){return name;}

        int GetTotal_points(){return total_points;}
        float GetPoint_average(){return point_average;}

        int GetTotal_threes(){return total_threes;}
        float GetThree_average(){return threes_average;}

        int GetTotal_frees(){return total_free;}
        float GetFree_average(){return free_average;}

        int GetTotal_blocks(){return total_blocks;}
        float GetBlock_average(){return blocks_average;}

        int GetTotal_Steals(){return total_steals;}
        float GetSteal_average(){return steals_average;}

        int GetTotal_assistance(){return total_assistance;}
        float GetAssistance_average(){return assistance_average;}
};