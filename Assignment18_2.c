#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    // Loop through each row
    for (i = 1; i <= iRow; i++)
    {
        // Loop through each column
        for (j = 1; j <= iCol; j++)
        {
            // Determine whether to print '*', '#', or '@'
            if (j < i)
                printf("* ");
            else if (j == iCol - (i - 1))
                printf("# ");
            else
                printf("@ ");
        }
        // Move to the next line
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Rows:");
    scanf("%d", &iValue1);

    printf("Enter the columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}