/* M, N are defined as 50.
R,C denotes actual screen size, x,y are the co-ordinates of the pixel and newC is the new color value */
void floodFill(int screen[M][N], int R, int C, int x, int y, int newC)
{
  int oldC=screen[x][y];
  screenFill(screen, R, C, x, y, oldC, newC);
}
void screenFill(int screen[M][N], int R, int C, int x, int y, int oldC, int newC)
{
  if(x<0 || x>=R || y<0 || y>=C)
    return;
  if(screen[x][y]==newC || screen[x][y]!=oldC)
    return;
    screen[x][y]=newC;
    screenFill(screen, R, C, x+1, y, oldC, newC);
    screenFill(screen, R, C, x-1, y, oldC, newC);
    screenFill(screen, R, C, x, y+1, oldC, newC);
    screenFill(screen, R, C, x, y-1, oldC, newC);
}
