#include <iostream>
#include <ctime>
using namespace std;

int main(){

    srand(time(NULL));
    int ans = rand() % 101;
    cout << ans << endl;
    int tries = 0;
    int difficulty;
    int guess;
    int chances;



    cout << "*****************NUMBER GUESSING GAME*****************\n" << endl;
    cout << "I'm thinking of a number between 1 and 100.\n" << endl;
    cout << "Please select the difficulty level:\n\t1. Easy (10 chances)\n\t2. Medium (5 chances)\n\t3. Hard (3 chances)\n" << endl;
    cout << "\nEnter your choice: " << endl;
    cin >> difficulty;

    switch(difficulty){

        // EASY DIFFICULTY
        case 1:
            cout << "Great! You have selected the Easy difficulty level!\nLet's Start the game!\n";
            chances = 10;
            do{
                cout << "Attempts remaining: " << chances << '\n';
                cout << "Enter your guess: ";
                cin >> guess;
                tries++;
                chances--;

                if(guess != ans && chances == 0){
                        cout << "You have run out of attempts! Restart the program!\n";
                        break;
                }
                else{
                    if(guess > ans){
                    cout << "Incorrect! The answer is less than " << guess << '\n';
                    }
                    else if(guess < ans){
                    cout << "Incorrect! The answer is greater than " << guess << '\n';
                    }
                    else if(guess == ans){
                    cout << "Congratulations! You guessed the correct number in " << tries << " attempts!\n";
                    break;
                    }
                }
            }while(chances != 0 || ans != guess);
            break;

        // MEDIUM DIFFICULTY
        case 2:
            cout << "Great! You have selected the Medium difficulty level!\nLet's Start the game!\n";
            chances = 5;
            do{
                cout << "Attempts remaining: " << chances << '\n';
                cout << "Enter your guess: ";
                cin >> guess;
                tries++;
                chances--;

                if(chances == 0 && guess != ans){
                        cout << "You have run out of attempts! Restart the program!\n";
                        break;
                }
                else{
                    if(guess > ans){
                    cout << "Incorrect! The answer is less than " << guess << '\n';
                    }
                    else if(guess < ans){
                    cout << "Incorrect! The answer is greater than " << guess << '\n';
                    }
                    else if(guess == ans){
                    cout << "Congratulations! You guessed the correct number in " << tries << " attempts!\n";
                    break;
                    }
                }
            }while(chances != 0 || ans != guess);
            break;
        
        // HARD DIFFICULTY
        case 3:
            cout << "Great! You have selected the Hard difficulty level!\nLet's Start the game!\n";
            chances = 3;
            do{
                cout << "Attempts remaining: " << chances << '\n';
                cout << "Enter your guess: ";
                cin >> guess;
                tries++;
                chances--;

                if(chances == 0 && guess != ans){
                        cout << "You have run out of attempts! Restart the program!\n";
                        break;
                }
                else{
                    if(guess > ans){
                    cout << "Incorrect! The answer is less than " << guess << '\n';
                    }
                    else if(guess < ans){
                    cout << "Incorrect! The answer is greater than " << guess << '\n';
                    }
                    else if(guess == ans){
                    cout << "Congratulations! You guessed the correct number in " << tries << " attempts!\n";
                    break;
                    }
                }
            }while(chances != 0 || ans != guess);
            break;
        
        default: cout << "Invalid entry, please run the program again\n";
    }

    return 0;
}