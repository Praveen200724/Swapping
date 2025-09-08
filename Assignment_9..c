// interchange the contents of C and D
/* with the help of temporary variable we do
 int c,d,temp;
 temp = c;
 c = d;
 d = temp; */
 
#include<stdio.h>
int main()
{
	int C,D;
	printf("Enter the value of C : ");
	scanf("%d",&C);
	printf("Enter the value of D : ");
	scanf("%d",&D);
	printf("\nBefore Swaping C : %d and D : %d",C,D);
	C = C + D;
	D = C - D;
	C = C - D;
	printf("\nAfter Swaping C : %d and D : %d",C,D);
	return 0;
}
