#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <cstdlib>
#include <unistd.h>
#include "rps.hpp"
using namespace std;
typedef string st;

st comhoice = "Computer Choice Is:";
st WLC = "Welcome To HirbodStudio First Ever Game Made....\n Rock Paper Scissor:)";
st AskRPS = "Rock - Paper - Scissor:";
st askready;
st ready = "YES";
st notready = "NO";
st rps;
st computre;
fucntions f;
void Youlost()
{
    cout << "-----------" << endl;
    cout << "|         "; cout << "|" << "                                      ------------------------" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|                                                        |" << endl;
    cout << "|         "; cout << "|" << "      ------------    " << "-------------" << "   |    "<< endl; 
    cout << "|         "; cout << "|" << "      |          |    " << "|" << endl;
    cout << "|         "; cout << "|" << "      |          |    " << "|" << endl;
    cout << "|         "; cout << "|" << "      |          |    " << "|" << endl;
    cout << "|         "; cout << "|" << "      |          |    " << "|" << endl;
    cout << "|         "; cout << "|" << "      |          |    " << "|" << endl;
    cout << "|         "; cout << "|" << "      ------------    " << "-------------" << endl; 
    cout << "|         "; cout << "-----------                  " << "      |" << endl;
    cout << "|                   |                      " << "  |" << endl;
    cout << "|                   |                      " << "  |" << endl;
    cout << "|                   |                      " << "  |" << endl;
    cout << "---------------------            " << "-------------" << endl; 

    

}
void check(st computre, st rps)
{   
    if (rps == computre)
    {
        cout << "Draw" << endl;
    }
    else if (rps == "Rock" or rps == "rock" or rps == "ROCK" && computre == "Paper" )
    {
        cout << "Paper Wraps Rock" << endl;
        cout << "Computer Won!" << endl;
        Youlost();
    }
    else if (rps == "paper" or rps == "Paper" or rps == "PAPER" && computre == "Rock" )
    {
        cout << "Paper Wraps Rock" << endl;
        cout << "You Won!" << endl;
    }
    else if (rps == "Scissor" or rps == "scissor" or rps == "SCISSOR" && computre == "Rock" )
    {
        cout << "Rock Smash Scissor" << endl;
        cout << "Computer Won!" << endl;
        Youlost();
    }
    else if (rps == "Rock" or rps == "rock" or rps == "ROCK" && computre == "Scissor")
    {
        cout << "Rock Smash Scissor" << endl;
        cout << "You Won!" << endl;
    }
    else if (rps == "Scissor" or rps == "scissor" or rps == "SCISSOR" && computre == "Paper" )
    {
        cout << "Scissor Cuts Paper" << endl;
        cout << "You Won!" << endl;
    }
    else if (rps == "paper" or rps == "Paper" or rps == "PAPER" && computre == "Scissor" )
    {
        cout << "Scissor Cuts Paper" << endl;
        cout << "Computer Won!" << endl;
        Youlost();
    }
    else 
    {
        cout << "Please Enter One Of these \n Rock - Paper - Scissor";
    }
}
void checkrps(st rps)
{
    if (rps == "Rock" or rps == "rock" or rps == "ROCK" or rps == "paper" or rps == "Paper" or rps == "PAPER" or rps == "Scissor" or rps == "scissor" or rps == "SCISSOR")
    {
        cout << "1....." << sleep(1) << "..2" << "..." << sleep(1) << "...3." << sleep(1) << endl;
        cout << "Your Choice Is:" << rps << endl;
        cout << comhoice << computre << endl;
        check(computre,rps);
    }
    else 
    {
        cout << "please enter one of these\n rock-paper-scissor" << endl;
        f.checkready();
        
    }
}
void fucntions::checkready()
{
    cout << endl << "Are Your Ready For Some ROCK-PAPER-SCISSOR?(YES - NO)";
    cin >> askready;
        if (askready == ready)
        {
            cout << AskRPS << endl;
            cin >> rps;
            checkrps(rps);
        }
        else if (askready == notready)
        {
            cout << "okay.... see you later then!";
        }
        else 
        {
            cout << "please enter one of these\n YES - NO";
            f.checkready();
        }
}

int main()
{   
    srand(time(NULL));
    st RPSarray[3] = {"Rock","Paper","Scissor"};
    int RandIndex = rand() % 3;
    computre = RPSarray[RandIndex];
    cout << WLC;
    f.checkready();
    
    
    return 0;
}       