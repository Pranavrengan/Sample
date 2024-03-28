
#include <iomanip>
#include <iostream>
using namespace std;

class game
{
private:
  char board[4][4] = {{'0', '0', '0'}, {'0', '0', '0'}, {'0', '0', '0'}};
  void displayBoard();
  void startGame();
  void placeElement(char currentPlayer);
  void checkCondition();
  char player;
  int winner = 0;

public:
  void gameMenu();
};

void game::gameMenu()
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
    cout << setw(20) <<"Error occured" << endl;
    gameMenu();
  }
}

void game::startGame()
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
      player = 'O';
      placeElement(player);
      displayBoard();
    }
    else
    {
      player = 'X';
      placeElement(player);
    }
  }
}

void game::displayBoard()
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j < 2)
      {
        cout << " " << board[i][j] << " | ";
      }
      else
      {
        cout << " " << board[i][j] << endl;
      }
    }
    if (i < 2)
    {
      for (int k = 0; k < 13; k++)
      {
        cout << "-";
      }
      cout << endl;
    }
  }
}

void game::checkCondition()
{
  cout << "Checking condition" << endl;

  for (int i = 0; i < 3; i++)
  {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
    {
      cout << player << " is the winner";
      ++winner;
      break;
    }

    else if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
    {
      cout << player << " is the winner";
      ++winner;
      break;
    }

    else if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
      cout << player << " is the winner";
      ++winner;
      break;
    }

    else if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
      cout << player << " is the winner";
      ++winner;
      break;
    }
  }
}

void game::placeElement(char currentPlayer)
{
  int r, c;

  cout << "Place " << currentPlayer << " at: ";
  cin >> r >> c;
  if (board[r][c] == '0')
  {
    board[r][c] = currentPlayer;
  }
  else
  {
    cout << "Place is already occupied" << endl;
    cout << "Place " << currentPlayer << " at: ";
    cin >> r >> c;
    if (board[r][c] == '0')
    {
      board[r][c] = currentPlayer;
    }
    else
    {
      cout << "Error occured !!!" << endl;
      cout << "Restart the game please" << endl;
      gameMenu();
    }
  }
}

int main()
{
  game game1;
  game1.gameMenu();
}
