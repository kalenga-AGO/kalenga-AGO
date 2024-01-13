/* 09/jan/2024 11:36 */
#include <stdio.h>
#include <stdlib.h>

/* function prototype */
void ft_answer ( const int num1 );
int main ( void )
{
	int a; /* save value imput */
	int ran1; /* save value rand1 */
	int ran2;  /* save value rand2  */
	int prod; /* ran1 and ran2 */

	ran1 = 1 + ( rand() % 9 );
	ran2 = 1 + ( rand() % 9 );
	prod = ran1 * ran2;
	
	printf("Quanto é %d vezes %d\n", ran1, ran2);
	
	ft_answer ( prod );

	return ( 0 );
} /* end function main */

/* function begin produto */
void ft_answer ( const int num1 )
{
	int b;
	
	scanf("%d", &b);
	
	if ( b == num1 ){
	puts("***Muito bem!***\n");
	main ( );
} /* end if */
	
	else {
	puts("Não. Tente novamente, por favor.");
	ft_answer ( num1);
} /* end else */

} /* end function produto */
