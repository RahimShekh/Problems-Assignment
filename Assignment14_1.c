/*Accept number of rows and number of columns from user and display below pattern.

Input:  iRow = 4  iCol = 4

output:    A    B    C    D
           A    B    C    D
           A    B    C    D
           A    B    C    D 
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char gh = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, gh ='A'; j <= iCol; j++,gh++)
        {
            printf("%c\t",gh);
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