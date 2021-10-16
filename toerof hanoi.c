#include <stdio.h> 
void towers(int, char, char, char);
int nofmov=0;
int main()
{
    int num; 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'X', 'Z', 'Y');
    printf("\n THE no of moves are:%d \n ",nofmov);
    return 0;
}
void towers(int num, char fromtower, char totower, char auxtower)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from TOWER %c to TOWER %c\n", fromtower, totower);
        nofmov++;
        return;
    }
    towers(num - 1, fromtower, auxtower, totower);
    printf("\n Move disk %d from TOWER %c to TOWER %c\n", num, fromtower, totower);
    towers(num - 1, auxtower, totower, fromtower);
    nofmov++;
}