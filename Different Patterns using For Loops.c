#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */

    int i, j, ch=65;

    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n");



    //--------------------------------------------------------------------------------

    /*
    A
    B B
    C C C
    D D D D
    E E E E E
    */

    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%c ", ch);
        }
        ch++;   //66
        printf("\n");
    }

    printf("\n");



    //--------------------------------------------------------------------------------

    /*
    A
    B B
    C C C
    D D D D
    E E E E E
    D D D D
    C C C
    B B
    A
    */

    ch = 64;
    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%c ", ch+i);
        }
        printf("\n");
    }

    for(i=4 ; i>=1 ; i--)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%c ", ch+i);
        }
        printf("\n");
    }

    printf("\n");



    //---------------------------------------------------------------------------------

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */

    ch = 1;

    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%d ", ch);
            ch++;
        }
        printf("\n");
    }

    printf("\n");



    //---------------------------------------------------------------------------------

/*
Pascal Triangle
    *
   ***
  *****
 *******
*********

*/

    int k, z, n;
    printf("How many Lines do you want?\n");
    scanf("%d", &n);//n=5

    z = 1; //i = 6 <= 5

    for(i=1 ; i<=n; i++) //For no. of lines
    {
        //This loop is used to print space
        for(j=1 ; j<=n-1 ; j++) //n=5  - 5 = 0
        {
            printf(" "); //Second time print 3 space
        }

        //This loop is used to print star
        for(k=1 ; k<=z ; k++)
        {
            printf("*"); //First time this line print 1 Star
        }
        printf("\n");

        z = z+2; //z=3+2=5+2=7+2=11
    }

        //For Trunk of Christmas Tree:

        for(i=1 ; i<=4 ; i++)
        {
            printf("   ");
            for(j=1 ; j<=3 ; j++)
            {
                printf("*");
            }
            printf("\n");
        }


    //---------------------------------------------------------------------------------
/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

    //---------------------------------------------------------------------------------

    /*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    4 4 4 4
    3 3 3
    2 2
    1
    */

    //---------------------------------------------------------------------------------

    /*

    * * * * *
    * * * *
    * * *
    * *
    *
    * *
    * * *
    * * * *
    * * * * *

    */

    //---------------------------------------------------------------------------------

    /*

    1 1 1 1 1
    2 2 2 2
    3 3 3
    4 4
    5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1

    */


    //---------------------------------------------------------------------------------

    /*

    A
    B C
    D E F
    G H I J
    K L M N O
    P Q R S
    T U V
    W X
    Y
    Z

    */

    //---------------------------------------------------------------------------------

    /*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

    */

    //---------------------------------------------------------------------------------

    /*
    1
   222
  33333
 4444444
555555555
    */

    //---------------------------------------------------------------------------------



    return 0;
}
/*
Extra:
This is also Valid:

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1;
    for(i=1 ; i<=5 ; i++,printf("\nIn for loop declaration Syntax - %d",i))
    {
        printf("\nIn loop %d", i);
    }

    return 0;
}

*/
