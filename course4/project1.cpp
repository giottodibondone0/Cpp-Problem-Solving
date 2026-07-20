  #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

enum enGameChoice { Rock = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player = 1, Computer = 2, Draw = 3 };
struct stRoundInfo {
    short RoundNumber;
    enGameChoice PlayerChoice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    enWinner FinalWinner;
};

short HowManyGames() {
    short UserInput;
    cout << "How Manny Games Do You Want To Play ? ";
    cin >> UserInput;

    return  UserInput;
}

enWinner WhoIsTheWinner(short UserInput,short ComputerInput ) {
        if (UserInput == ComputerInput) {
            return enWinner::Draw;
        }
        if (UserInput == Rock and ComputerInput == Scissors
            or UserInput == Scissors and ComputerInput == Paper
            or UserInput == Paper and ComputerInput == Rock ) {
            return enWinner::Player;
            }
    return enWinner::Computer;
    }

short RandomNumber(int From, int To){
        int randNum = rand() % (To - From + 1) + From;
        return randNum;
    }

enGameChoice GetUserChoice() {
    int UserInput;

    cout << "Enter Your Choice : ( 1 for rock , 2 for paper 3 for scissors ) "<<endl;
    cin >>UserInput;

    return static_cast<enGameChoice>(UserInput);
}

enGameChoice GetComputerChoice() {
    int RandomNum = RandomNumber(1, 3);

    return static_cast<enGameChoice>(RandomNum);
}

string GetWinnerName(enWinner Winner) {
    string arrWinnerName[3] = { "Player", "Computer", "Draw" };

    return arrWinnerName[Winner - 1];
}
string GetChoiceName(enGameChoice Choice) {
    string arrChoiceName[3] = { "Rock", "Paper", "Scissors" };
    return arrChoiceName[Choice - 1];
}

enWinner GetFinalWinner(short UserWins, short ComputerWins) {
    if (UserWins > ComputerWins) {
        return enWinner::Player;
    }
    else if (ComputerWins > UserWins) {
        return enWinner::Computer;
    }
    else {
        return enWinner::Draw;
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    short PlayerWins = 0;
    short ComputerWins = 0;
    short DrawTimes = 0;
    stRoundInfo RoundInfo = {};
    bool WannaPlayAgain;

do {
    short Rounds = HowManyGames();
    for (short GameRound = 1; GameRound <= Rounds; GameRound++) {


        RoundInfo.RoundNumber = GameRound;

        RoundInfo.PlayerChoice = GetUserChoice();

        RoundInfo.ComputerChoice = GetComputerChoice();

        RoundInfo.Winner = WhoIsTheWinner(RoundInfo.PlayerChoice, RoundInfo.ComputerChoice);

        if (RoundInfo.Winner == enWinner::Player) {
            PlayerWins++;
        }
        else if (RoundInfo.Winner == enWinner::Computer) {
            ComputerWins++;
        }
        else {
            DrawTimes++;
        }

        cout << "-----------------------\n";
        cout << "Player Choice  : " << GetChoiceName(RoundInfo.PlayerChoice) << endl;
        cout << "Computer Choice: " << GetChoiceName(RoundInfo.ComputerChoice) << endl;
        cout << "Round Winner   : " << GetWinnerName(RoundInfo.Winner) << endl;
        cout << "-----------------------\n";

    }

    enWinner GameWinner = GetFinalWinner(PlayerWins, ComputerWins);
    cout << "\n======= GAME OVER =======\n";
    cout << "Player Won: " << PlayerWins << " times\n";
    cout << "Computer Won: " << ComputerWins << " times\n";
    cout << "Draws: " << DrawTimes << " times\n";
    cout << "Final Winner is: " << GetWinnerName(GameWinner) << "\n";
    cout << "=========================\n";

    cout << "Do you wanna play again ?( 0 / 1 ) ";
    cin >> WannaPlayAgain;
} while (WannaPlayAgain);
    return 0;
}