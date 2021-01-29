void makeAllZero(int mat[ROWS][COLS], int r, int c)
{
  int a[r][c];
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      a[i][j]=mat[i][j];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(mat[i][j]==0)
      {
        for(int k=0;k<c;k++)
        {
          if(a[i][k]!=0)
            a[i][k]=0;
        }
        for(int k=0;k<r;k++)
        {
          if(a[k][j]!=0)
            a[k][j]=0;
        }
      }
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      mat[i][j]=a[i][j];
}}
