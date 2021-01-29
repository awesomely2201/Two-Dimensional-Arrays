#include <stdio.h>
int main()
{
int a;
  scanf("%d",&a);
  for(int i=0;i<a;i++)
  {
    int b;
    scanf("%d",&b);
    int arr[b][b];
    for(int j=0;j<b;j++)
      for(int k=0;k<b;k++)
        scanf("%d",&arr[j][k]);
    for(int i=0;i<b;i++)
    {
      for(int j=b-1;j>=0;j--)
      {
        printf("%d",arr[j][i]);
        if(j!=0)
          printf(" ");
      }
      printf("\n");
    }
    printf("\n");
  }
    return 0;
}
