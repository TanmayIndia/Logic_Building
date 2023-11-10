/*

input: iRow = 6 , iCol = 5

output: *  *  *  *  *
        *  @  @  @  * 
        *  @  @  @  *
        *  @  @  @  *  
        *  @  @  @  * 
        *  *  *  *  * 
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0, iCnt=0;
 
   for(i=1; i<=iRow; i++)
   {
    printf("\n");
    for(j=1; j<=iCol; j++)
    {
      if((i==1) || (j==1) ||(i==iRow) || (j==iCol))
      {
        printf("*\t");
      }
      else
      {
        printf("@\t");
      }
    }
    printf("\n");
   }
   
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}