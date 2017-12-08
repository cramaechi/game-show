//Program that simulates a game show problem in which the contestant randomly
//chooses 1 out of 3 doors //that may contain $1,000,000 in cash. However,
//before the contestant's desired door is revealed, one of the two remaining
//doorsreveals a consolation prize. At this point,the program prompt's the
//contestant (user) whether he or she wants to switch to the remaining door or
//stick with their original choice. The program, then, restarts the game 10,000
//times and documents the total of wins when sticking with the original choice
//and switching for the remaining door.
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

void beginGameShow(int& winsWithStick, int& winsWithSwitch);

int main()
{
    srand(time(NULL));

    int stickingWins = 0, switchingWins = 0;

    //for(int i = 1; i <=10000; i++)
    beginGameShow(stickingWins, switchingWins);

    /*
    if(stickingWins > switchingWins)
    cout<<"\nYou should stick with your choice to optimize your chances of winning.\n";
    else 
       cout<<"\nYou should switch your choice to optimize your chances of winning.\n";
    */

    return 0;
}

void beginGameShow(int& winsWithStick, int& winsWithSwitch)
{
    int remainingDoor1, winningDoor = rand() % 3 + 1;

    do
    {
        remainingDoor1 = rand() % 3 + 1;
    }while(remainingDoor1 == winningDoor);

    int contestantsChoice;

    cout<<"Please randomly select one of the 3 doors: ";
    cin>>contestantsChoice;
    cout<<endl;

    cout<<"Thank you. Door # "<<remainingDoor1<<" contains dishwashing detergent!\n\n";

    cout<<"Would you like to stick with your choice or switch? (stick/switch) ";
    char ans[7];
    cin>>ans;
    cout<<endl;

    if (!strcmp(ans, "stick") && contestantsChoice == winningDoor)
    {
        ++winsWithStick;
        cout<<"Congratulations!!!, you win $1,000,000 in cash!!!\n";
    }
    else if (!strcmp(ans, "stick") && contestantsChoice != winningDoor)
        cout<<"Ohhhhhhhhhhh, sorry you lost!!!\n";
    else if (!strcmp(ans,"switch"))
    {
        cout<<"Please randomly select one of the 3 doors: ";
        cin>>contestantsChoice;
        cout<<endl;

        if (contestantsChoice == winningDoor)
        {
            ++winsWithSwitch;
            cout<<"Congratulations!!!, you win $1,000,000 in cash!!!\n";
        }
        else
            cout<<"Ohhhhhhhhhhh, sorry you lost!!!\n";
    }
}
