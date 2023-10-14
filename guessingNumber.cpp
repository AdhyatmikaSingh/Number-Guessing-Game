#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    
    cout<<"****************************************************"<<endl;
    cout<<"\t\tWELCOME TO THE GAME"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Guess a number between 1 and 100. You'll have limited choices "<<endl;
    
    srand(time(0));
    int secretNumber = 1+(rand()%100);
    int playerChoice;
    cout<<"\nYou have 10 choices for finding the secret number between 1 and 100";
    int choicesLeft =10;
    for(int i=1;i<=10;i++){
        cout<<"\nEnter the number\n";
        cin>>playerChoice;
        if(playerChoice ==secretNumber) {
            cout<<"well played! You won"<<playerChoice<<"is the secret number"<<endl;
            cout<<"\t\t Thanks for playing...."<<endl;
            cout<<"play again!\n\n"<<endl;
            break;
            
        }
            else {
                cout<<"nope "<<playerChoice<<" is not the right number"<<endl;
            }
            choicesLeft--;
            cout<<choicesLeft<<"choices left."<<endl;
            if (choicesLeft==0){
                cout<<"you couldn't find the secret number";
            }
        }
    cout<<secretNumber;
    return 0;
}
