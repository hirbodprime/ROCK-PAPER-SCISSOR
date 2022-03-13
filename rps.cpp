#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <cstdlib>
#include <unistd.h>
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
    else if (rps == "Rock" && computre == "Paper")
    {
        cout << "Paper Wraps Rock" << endl;
        cout << "Computer Won!" << endl;
        Youlost();
    }
    else if (rps == "Paper" && computre == "Rock")
    {
        cout << "Paper Wraps Rock" << endl;
        cout << "You Won!" << endl;
    }
    else if (rps == "Scissor" && computre == "Rock")
    {
        cout << "Rock Smash Scissor" << endl;
        cout << "Computer Won!" << endl;
        Youlost();
    }
    else if (rps == "Rock" && computre == "Scissor")
    {
        cout << "Rock Smash Scissor" << endl;
        cout << "You Won!" << endl;
    }
    else if (rps == "Scissor" && computre == "Paper")
    {
        cout << "Scissor Cuts Paper" << endl;
        cout << "You Won!" << endl;
    }
    else if (rps == "Paper" && computre == "Scissor")
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

void checkready()
{
    cout << endl << "Are Your Ready For Some ROCK-PAPER-SCISSOR?(YES - NO)";
    cin >> askready;
        if (askready == ready)
        {
            cout << AskRPS << endl;
            cin >> rps;
            cout << "." << sleep(1) << ".." << "..." << sleep(1) << "...." << sleep(1) << endl;
            cout << "Your Choice Is:" << rps << endl;
            cout << comhoice << computre << endl;
            check(computre,rps);
        }
        else if (askready == notready)
        {
            cout << "okay.... see you later then!";
        }
        else 
        {
            cout << "please enter one of these\n YES - NO";
            checkready();
        }
}
int main()
{   
    srand(time(NULL));
    st RPSarray[3] = {"Rock","Paper","Scissor"};
    int RandIndex = rand() % 3;
    computre = RPSarray[RandIndex];
    cout << WLC;
    checkready();
    
    
    return 0;
}       