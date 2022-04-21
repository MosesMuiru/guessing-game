#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main()
{
cout<<"**----****WELCOME****-----"<<endl<<endl;
    cout<<"\t\t\twelcome to the world greatest game ever made";
    cout<<"\t\tyou have limited chances of guessing your number"<<endl<<"you have to choose a number 1-100"<<endl;

    while(true)
    {
        cout<<"\t ENTER YOUR LEVEL OF HARDNESS"<<endl;
        cout<<"1. easy"<<endl
        <<"2. medium level" <<endl
        << "3. hardest"<<endl;

        int difflevel;
        cin>>difflevel;

        //getting the secretnumber
        //srand(time(0));
		//int secretNumber = 1 + (rand() % 100);
		//int playerChoice;

        srand(time(0));
        int secretnumber = 1 + (rand() %100);
        int playerchoice;

        //the player has to enter the secret number


        if(difflevel == 1)
        {
            cout<<endl<<"you have 10choices left"<<endl;


            int choiceleft;
            for(choiceleft = 10;choiceleft>1;choiceleft--)
            {
                cout<<"enter your secret number"<<endl;
            cin>>playerchoice;

                if(playerchoice==secretnumber)
                {
                    cout<<"victory!!!!!!!!!YOU WIN THE GAME";
                    break;
                }
                else
                {
                    if(playerchoice > secretnumber)
                    {
                        cout<<"the number is greater"<<endl;
                        cout<<"choices left are"<<choiceleft<<endl;
                    }
                    else
                    cout<<"the number is smaller"<<endl;
                    cout<<"choices left are "<<choiceleft<<endl;
                }




            }
            cout<<"end or your chances";
        }

        //this is the medium level
        if(difflevel==2)
        {
            cout<<"****WELCOME TO THE MEDIUM LEVEL HARDNESS**\n*ENJOY***"<<endl;
            cout<<"****you have 6 chances to gues the number*******"<<endl;
            cout<<endl<<"ENTER YOUR NUMBER HERE--->";

            int choiceleft;
            for(choiceleft= 6;choiceleft>0;choiceleft--)
            {
                cin>>playerchoice;

                if(secretnumber == playerchoice)
                {
                    cout<<"*****VICTORY***YOUR GUESS IS RIGHT***"<<endl;
                    cout<<playerchoice<<"is the seccret number"<<endl;
                }

                else
                {
                    if(secretnumber < playerchoice)
                    {
                        cout<<"the secret number is less than your guess"<<endl<<"please guess a lower number"<<endl;

                    }

                    else
                    cout<<"the number is greater than your guess";

                }
            }

            cout<<endl<<"******YOUR GUESSES ARE OVER SON*********";
        }

    }




return 0;
}
