#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void nextMove(char[][3], int&, int&);
void firstMove(char[][3], int&, int&);
bool checkWin(char[][3]);
bool checkTie(char[][3]);
void printBoard(char[][3]);
int main(){
    int fool = 1;
    char keepPlaying;
    do              //The do-while loop continues until the player does not want to play anymore
    {
    char board[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
    while(true)      //This while loop continues until the player or computer wins.
    {
        int rowX=0, colX=0, rowO, colO, repeat; //Computer play
        if (fool < 2){
            firstMove(board, rowX, colX); //this makes the first move always in the middle.
    }
        else {
            nextMove(board, rowX, colX); //this calls the nextMove function using call by reference.
    }
        fool += 1;
        board[rowX][colX]='X';   //this puts the X in the correct spot.
        printBoard(board);  //This calls the printBoard function using call by value.
        if (checkWin(board)) //The if statement checks if the computer won and breaks out
        {
            cout << "computer wins \n ";
        break;
    };
        if (checkTie(board))
        {
            cout << "There is a tie \n";
        break;
    };
    //This section prompts the user to input a row and column to place and O.
    {
        repeat=1;
        while (repeat==1) //check legal inputs
            {
            cout << "What row (0, 1, or 2) would you like to place your O in?" << endl;
            cin >> rowO;
            cout << "What column (0, 1, or 2) would you like to place your O in?" << endl;
            cin >> colO;
            if (board[rowO][colO]=='X')
            {
                repeat=1;
                cout << "That spot is already taken. Please choose another row and column."<< endl;
        }
            else if (board[rowO][colO]=='O')
            {
                repeat=1;
                cout << "That spot is already taken. Please choose another row and column."<< endl;
        }
            else if (rowO>2||colO>2||rowO<0||colO<0)
            {
                repeat=1;
                cout << "You must choose either 0, 1, or 2. Please enter another row and column." << endl;
        }
            else
                repeat=0;
    } //end of lgal input check
    board[rowO][colO]='O';    //This places an O in the correct stop.
    printBoard(board);        //This prints the board again.

        if (checkWin(board)){
            cout << "You win " << endl;          //This checks if the player has won.
        break;
    };
        if (checkTie(board)){
            cout << "There is a tie " << endl;
        break;
    }
    } //end of user play
    } //end of while(true)
        cout << "Do you want to play again? (Y/N)?" << endl;;
        cin >> keepPlaying;
    } while(keepPlaying=='Y');
    return 0;
}
void nextMove (char board[][3], int &row, int &col){
    int repeat=1;
    while(repeat==1){
        srand(time(0));
        row=rand()%3;
        col=rand()%3;
        if (board[row][col]=='X')
            repeat=1;
        else if (board[row][col]=='O')
            repeat=1;
        else
            repeat=0;
}
}
void firstMove (char board[][3], int &row, int &col){
    int repeat=1;
    while(repeat==1){
        srand(time(0));
        row=1;
        col=1;
        if (board[row][col]=='X')
            repeat=1;
        else if (board[row][col]=='O')
            repeat=1;
        else
            repeat=0;
}
}
bool checkWin(char board[][3]){
    bool win = false;
    for (int i = 0; i <= 2; i++){
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X')  
            win = true; else
        if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O')  
            win = true; else
        if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X')  
            win = true; else
        if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O')  
            win = true;
}
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')  
        win = true; else
    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')  
        win = true;
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')  
        win = true; else
    if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')  
        win = true;
//cout << " win in check function " << win << endl;
return win;
}
void printBoard(char board[][3])  {    //This function prints the board.
    cout << endl;
    for(int row=0; row <=2; row++){
        for(int col=0; col <=2; col++){
            cout << board[row][col];
    }
        cout << endl;
    }
    cout << endl;
}
bool checkTie(char board[][3])  {     //This function checks tie.
    int count = 0;
    for(int row=0; row <=2; row++){
        for(int col=0; col <=2; col++){
            if ((board [row][col] == 'O') || (board [row][col] == 'X'))  
                count++ ;
    }
    }
    if (count == 9) return true; 
    else return false;
}
