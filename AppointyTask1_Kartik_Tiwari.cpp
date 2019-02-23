#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

void main(){
    vector<int> stats;
    int choice = 1;
    cout<<"Welcome to Rock/Paper/Scissor";
    while(choice==1 || choice==2){
    if(choice == 1){
    string userChoice;
    cout<<"Enter First Choice(Rock/Paper/Scissor)";
    cin>>userChoice;
    int firstResult = play(userChoice);
    stats.push_back(firstResult);
    cout<<"Press 1 to play again, 2 to show stats, 3 to exit";
    cin>>choice;
    }
    else if(choice == 2){
        showStats(stats);
    }
    else exit();
    cout<<"Press 1 to play again, 2 to show stats, 3 to exit";
    cin>>choice;
    }
    }   
}

int play(string userChoice){
    string textArray[3] = {'rock','paper','scissor'};
    for(int i=0;i<userChoice.size();i++){
        userChoice[i]=tolower(userChoice[i]);
    }
     srand (time(NULL));
     temp = rand() % 2;
     string compChoice = textArray[temp];
    }
    checkResult(userChoice, compChoice);
    clrscr;
    cout<<"Press 1 to play again, 2 to show stats, 3 to exit";
    cin>>choice;
  	system ("CLS");
}

int checkResult(string userChoice, string compChoice){
    switch(userChoice){
        case 'rock': if(compChoice = 'rock') return -1;
                     else if(compChoice = 'scissor') return 1;
                     else return 0; 
                     break;  
        case 'paper': if(compChoice = 'paper') return -1;
                     else if(compChoice = 'rock') return 1;
                     else return 0; 
                     break;     
        case 'scissor': if(compChoice = 'scissor') return -1;
                     else if(compChoice = 'paper') return 1;
                     else return 0; 
                     break;
        default: return -1;                                       
    }
}
void showStats(vector<int> stats){
    for(int i=0;i<stats.size(); i++{
    if(stats[i] == 0){
        cout<<"Game "<<i+1<<": LOSE";
    }    
    else if(stats[i] == 1){
        cout<<"Game "<<i+1<<": WIN";
    }    
    else cout<<"Game "<<i+1<<": TIE";
    }
    }
}
