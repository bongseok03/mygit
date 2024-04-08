#include <iostream>
#include <string>
#include "TicTacToe.h"
using namespace std;

int main()
{
    TicTacToe game;
    int x, y, k, i = 0, j = 0;
    //판초기화

    for (k = 0; k < 9; k++)
    {
        //입력 받기
        cout << "(x,y) 좌표 : ";
        cin >> x >> y;
        //순서 정하기
        game.input(x, y, k);
        //판 만들기
        game.printBoard();
        //승리  gamewin();
        game.GameWin(i, j);
        if (j == 1)
            break;
        //무승부
        game.GameDraw(k);

    }
    return 0;
}
