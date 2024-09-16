/*Accept number of rows and number of columns from user and display below pattern.

Input:  iRow = 4  iCol = 4

output:    A    B    C    D
           a    b    c    d
           A    B    C    D
           a    b    c    d 
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char ch = '\0';
    char gh = '\0';

    for(i = 1,ch ='A'; i <= iRow; i++,ch++)
    {
        if(i % 2 == 0) //small letter
        {
            for(j = 1,gh ='a'; j <= iCol; j++,gh++)
            {
                printf("%c\t",gh);
            }
        }
       
        else{ // capital letter
            for(j = 1,ch ='A'; j <= iCol; j++,ch++)
            {
                printf("%c\t",ch);
            }
        }
         printf("\n");
    }
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Rows:");
    scanf("%d",&iValue1);

    printf("Enter the columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2); 
    return 0;
}