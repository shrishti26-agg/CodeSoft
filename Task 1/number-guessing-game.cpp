#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int numberToGuess,userGuessNumber;
     srand(time(0));
     numberToGuess = rand() % 100+1;
     cout<<"Welcome to the number Guessing Game! "<<endl;
     cout<<"numbers between 1 to 100"<<endl;

     do{
        cout<<"Enter your Guess:";
        cin>>userGuessNumber;

        if(userGuessNumber > numberToGuess){
            cout<<"Too high! Try again"<<endl;
        }
        else if(userGuessNumber < numberToGuess){
            cout<<"Too low! Try again"<<endl;
        }

        else{
            cout<<"congratulations! you guessed the correct number:"<< numberToGuess<<endl;

        }

     }
     while(userGuessNumber != numberToGuess);
     return 0;
}
 






