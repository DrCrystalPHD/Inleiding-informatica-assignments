#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            std::cout << "Player Wins!" << std::endl;
            break;
        }
        if(checkTie(spaces)){
            std::cout << "It's a Tie.." << std::endl;
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces){
    std::cout << std::endl;
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  "  << spaces[1] << "  |  "  << spaces[2] << "  " << '\n'; 
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  "  << spaces[4] << "  |  "  << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  "  << spaces[7] << "  |  "  << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << std::endl;
}

void playerMove(char *spaces, char player){

    int number;

    do{
        std::cout << "Enter a spot to place a marker (1-9)";
        std::cin >> number;
        number = number - 1;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    } while(!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer){

}

bool checkWinner(char *spaces, char *player, char *computer){
    return 0;
}

bool checkTie(char *spaces){
    return 0;
}