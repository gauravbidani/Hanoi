//Gaurav Bidani
//16csu119
//Tower of Hanoi
#include <stdio.h>
void towers(int, char, char, char);
int main()
	{
		int n;
		printf("Enter the number of disks ");
		scanf("%d", &n);
		printf("The sequence of moves involved in the Tower of Hanoi are :\n");
		towers(n, 'A', 'C', 'B');
		return 0;
	}
void towers(int n, char t1, char t2, char t3)
	{
		if (n == 1)
    		{
				printf("\n Move disk 1 from tower %c to tower %c", t1, t2);
				return;
    		}
		towers(n - 1, t1, t3, t2);
		printf("\n Move disk %d from tower %c to tower %c", n, t1, t2);
		towers(n - 1, t3, t2, t1);
	}


/*Output

Enter the number of disks 4
The sequence of moves involved in the Tower

 Move disk 1 from tower A to tower B
 Move disk 2 from tower A to tower C
 Move disk 1 from tower B to tower C
 Move disk 3 from tower A to tower B
 Move disk 1 from tower C to tower A
 Move disk 2 from tower C to tower B
 Move disk 1 from tower A to tower B
 Move disk 4 from tower A to tower C
 Move disk 1 from tower B to tower C
 Move disk 2 from tower B to tower A
 Move disk 1 from tower C to tower A
 Move disk 3 from tower B to tower C
 Move disk 1 from tower A to tower B
 Move disk 2 from tower A to tower C
 Move disk 1 from tower B to tower C
--------------------------------
*/
