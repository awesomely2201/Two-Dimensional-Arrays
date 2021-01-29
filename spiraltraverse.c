void printSpiral(int a[ROWS][COLS], int r, int c)
{
  int i,j,s,k;
  s=(r+1)/2;
  k=0;
  while(s>0)
  {
    for(i=k;i<c;i++)
      printf("%d\n",a[k][i]);
    for(i=1+k;i<r-1;i++)
      printf("%d\n",a[i][c-1]);
    for(i=c-1;i>=k && (r-1-k)>0;i--)
      printf("%d\n",a[r-1][i]);
    for(i=r-2;i>0+k && (c-1-k)>0;i--)
      printf("%d\n",a[i][k]);
    s--;
    k++;
    r--;
    c--;
  }
}
