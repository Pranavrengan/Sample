#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class game
{
private:
  vector<vector<char>> board = {{'a','a','a','a','a','a','a','a','a','\0'}, {'s', 's', 's', 's', 's', 's', 's', 's', 's', '\0'}, {'0', '0', '0', '0', '0', '0', '0', '0', '0', '\0'}, {'0', '0', '0', '0', '0', '0', '0', '0', '0', '\0'}, {'0', '0', '0', '0', '0', '0', '0', '0', '0', '\0'}, {'0', '0', '0', '0', '0', '0', '0', '0', '0', '\0'}, {'0', '0', '0', '0', '0', '0', '0', '0', '0', '\0'},{'s', 's', 's', 's', 's', 's', 's', 's', 's', '\0'}, {'a','a','a','a','a','a','a','a','a','a','\0'}};
  void displayBoard();
  int row, col;
  void startGame();
  void placeElement(char currentPlayer);
  char player;
  void checkCondition();
  int winner = 0;
  char movingElement;

public:
  void gameMenu();
};

void game ::gameMenu()
{
  int playersChoice;

  cout << "1 Continue Game\n";
  cout << "2 Quit Game\n";
  cout << "Enter your choice(1\\2): ";
  cin >> playersChoice;

  switch (playersChoice)
  {
  case 1:
    startGame();
    break;
  case 2:
    cout << "Game Quitted";
    break;
  default:
    cout << setw(20) << "Error occured" << endl;
    gameMenu();
  }
}

void game ::startGame()
{
  displayBoard();
  for (int i = 1; winner != 1; i++)
  {
    if (i > 5)
    {
      checkCondition();
      if (winner == 1)
      {
        cout << endl;
        displayBoard();
        gameMenu();
        --winner;
        break;
      }
    }
    if (i % 2 == 0)
    {
      player = 'B';
      placeElement(player);       //some bugs
      displayBoard();
    }
    else
    {
      player = 'W';
      placeElement(player);
    }
  }
}

void game::placeElement(char currentPlayer)
{
  int r, c;

  cout << "Choose an element to move: ";
  cin >> row >> col;
  movingElement = board[row][col];
  cout << "Place " << board[row][col] << " at: ";
  cin >> r >> c;
  if (board[r][c] == '0')
  {
    board[row][col] = movingElement;
  }
  else
  {
    cout << "Place is already occupied" << endl;
    cout << "Place " << board[row][col] << " at: ";
    cin >> r >> c;
    if (board[r][c] == '0')       // need to be fix it soon as possible
    {
      board[r][c] = movingElement;
    }
    else
    {
      cout << "Error occured !!!" << endl;
      cout << "Restart the game please" << endl;
      gameMenu();
    }
  }
}


void game :: checkCondition() {
  cout << "Checking condition";
}

void game ::displayBoard()
{

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << setw(3) << board[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  game game1;
  game1.gameMenu();
}