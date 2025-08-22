#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Hangman
{
    public :
            void  input_output()
            {
                cout<< "input output function is called\n "<<endl;
            }
            void  game_logic()
            {
                cout<< "game logic function is called\n "<<endl;
            }
            void word_handler()
            {
                cout<< "word handler function is called\n "<<endl;
            }
   // intially i have called all functions as void type for testing purpose 
   
   //the person assigned with each fuction create a file and implement the logic or define the function there 
};

int main()
{    
    Hangman player;
    string choice;
    cout<< "------Welcome to Hangman Game!------ \n A word guessing game...\n"<<endl;
    while (true) {
        cout<< "Do you want to play the game? (yes/no): ";
        cin>>choice;

       if(choice =="yes" || choice =="YES")
       {
         player.input_output();
         player.game_logic();
         player.word_handler();
       }
       else if(choice == "no" || choice == "NO")
       {
        cout<<"Good Bye....."<<endl;
        return 0;
       }
       else 
       {
          cout<<"Invalid option"<<endl;
       }
    }
  
    
    return 0;
}
