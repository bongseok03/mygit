#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
   char Tictactoe[3][3];
   int x, y, k, i;
   
   for (x = 0; x < 3; x++)
       
       for (y = 0; y < 3; y++) Tictactoe[x][y] = '  ';
        // 판을 초기화하는 부분

   for (k = 0; k < 9; k++)
   {
      cout << "(x,y) 좌표 : ";
      cin >> x >> y;
      
      Tictactoe[x][y] = (k % 2 == 0) ? 'X' : 'O'; // X 먼저 시작!
      
      for (i = 0; i < 3; i++) // 판을 구성하는 부분
      {
         cout << "---|---|---" << endl;
         cout << Tictactoe[i][0] << "  | " << Tictactoe[i][1] << " | " << Tictactoe[i][2] << endl;
      }
      
       cout << "---|---|---" << endl;
      
       for (i = 0; i < 3; i++) // 승리 조건
       {
         
          if (Tictactoe[i][0] == Tictactoe[i][1] && Tictactoe[i][1] == Tictactoe[i][2] && Tictactoe[i][0] != ' ')
              //같은 기호의 y 좌표가 모두 같을 때, 가로줄 3가지가 완성된다.
         {
            
             cout << Tictactoe[i][0] << endl;
                break;
             
         }
         
         if (Tictactoe[0][i] == Tictactoe[1][i] && Tictactoe[1][i] == Tictactoe[2][i] && Tictactoe[0][i] != ' ')
             //같은 기호의 x 좌표가 모두 같을 때, 세로줄 3가지가 완성된다.
         {
            
             cout << Tictactoe[0][i] << endl;
                break;
             
         }
         
         if (Tictactoe[0][0] == Tictactoe[1][1] && Tictactoe[1][1] == Tictactoe[2][2] && Tictactoe[0][0] != ' ')
             //같은 기호의 좌표가 (0,0),(1,1),(2,2)일때 우하향 대각선이 만들어진다.
         {
            
             cout << Tictactoe[0][0] << endl;
                break;
             
         }
         
         if (Tictactoe[0][2] == Tictactoe[1][1] && Tictactoe[1][1] == Tictactoe[2][0] && Tictactoe[0][2] != ' ') 
             //같은 기호의 좌표가 (0,2),(1,1),(2,0) 우상향 대각선이 만들어진다.
         {
            
             cout << Tictactoe[0][2] << endl;
                break;
             
         }
            
      }
      
      if (k == 8) // 판이 꽉 찼을때
      {
         cout << "무승부" << endl;
      }
   
   }
   
   return 0;
}
