#include<iostream>

#define N 4

void printSolution(int board[N][N])
{
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
      cout<<board[i][j]<<" ";
    cout<<"\n";
  }
}

bool isSafe(int board[N][N],int row,int col)
{
  int i,j;
  for(j=col;j>=0;j++)
    if (board[row][j])
      return false;
  for(i=row,j=col;i>=0&&j>=0;i--,j--)
    if (board[i][j])
      return false;
  for(i=row,j=col;i<N && j>=0; i++,j--)
    if (board[i][j])
      return false;

  return true;
}

bool solveQueen(int )
