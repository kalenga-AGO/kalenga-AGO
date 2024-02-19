#include <stdio.h>
#include <stdlib.h>

// 23 Jan
// function prototype
void ft_biology ( void );
void ft_chemistry ( void );
void ft_math ( void );
void ft_portuguese ( void );

int main ( void )
{
	void (*subject[ 4 ]) ( void ) = { ft_biology, ft_chemistry, ft_math, ft_portuguese };

	int choice; // varible that choice subject

	printf("%s\n%s\n%s\n", "***********************************************************",
							"BEM VINDO AO PROGRAMA DE PREPARATÓRIO DE ADMISÃO PARA UAN",
							"**********************************************************");

	printf("Prima 0 para selecionar o tópico de Biologia!\n"
			"Prima 1 para selecionar o tópico de Quimíca!\n"
			"Prima 2 para selecionar o tópico Matemática!\n"
			"Prima 3 para selecionar o tópico de Língua Portuguesa!\n"
			"Prima 4 para encerrar o programa\n");	

	scanf("%d", &choice);

	while ( choice >= 0 && choice < 4 ){
		
		if( choice == 4 ){
			puts("Até a proxima. Bons estudos!");
		} // end if 

	( *subject[ choice ] ) ( );
	
	printf("Prima 0 para selecionar o tópico de Biologia!\n"
			"Prima 1 para selecionar o tópico de Química!\n"
			"Prima 2 para selecionar o tópico de Matemáica!\n"
			"Prima 3 para selecionar o tópico de Língua Portuguesa!\n"
			"Prima 4 para encerrar o programa!\n");

	scanf("%d", &choice );

		if ( choice == 4 ){
			puts("Até a próxima. Bons estudos!");
		} // end if

} // end while 
	return ( 0 );
} // end function main

// topic of biology
void ft_biology ( void )
{
	void first_topic ( void );
	//void second_topic ( void );
		
	void ( *topic[ 1 ]) ( void ) = { first_topic };

	printf("%s\n%s\n%s\n", "********************",
							"TÓPICO DE BIOLOGIA",
							"********************");
	printf("%s\n%s\n", "Prima 0 para variante de 2022", 
							"Prima 1 para variante de 2023");

	int choice; // varible that choice topic

	scanf("%d", &choice);

	( *topic[ choice ] ) ();
	
	
} // end function biology

void first_topic ( void )
{
	int fr_question ( void ); // function prototype

	char *correct[ 3 ] = { "z", "a) RNA e Proteínas","b) Faringe" };
	char *answer [ 3 ] = { "z", "a", "b" };
	char option; // varible of option after answer
	char ans; // input varible 
	int search; // source varible answer

	search = fr_question();

	printf("Prima a, b, c, d, ou e para selecionar a linea correcta.\n");

	scanf("%c", &ans);

	if ( ans == *answer[ search ]){
		printf("Parabéns! A sua resposta esta certa.\n\n");
	} // end if
	else {
		printf("Resposta errada!\n\n");
	} // end else

	printf("Prima S para continuar\n"
			"Prima N para finalizar este tópico.\n"
			"Deseja saber a resposta correcta! Prima x.\n\n");

	scanf("%c", &option);
	
	if ( option == 's' ){ 
		ft_biology();
	} // end if
	
	if ( option == 'x' ){
		printf("A resposta correcta é a linea %s\n", correct[ search ]);
		printf("Sugestão: Consulta o livro de Biologia - AVEO para saber\n"
				"mais.\n\n");
	} // end if

	if ( option == 'n' ){
		puts("");
	} // end if
} // end function first topic of biology

int fr_question ( void )
{
	int select; // varible that the question

	printf("Tópico de 2022\n"
			"Prima 1 à 2 para selecionar as perguntas.\n\n");

	scanf("%d", &select);
	
	if ( select == 1 ){
		printf("O material genético do Coronavirus é constituido por:\n"
				"a) RNA e Proteínas\nb) DNA e Proteínas\nc) DNA e RNA\n"
				"c) DNA e lípidos\ne) DNA e lípidos\n\n");
	} // end if
	if ( select == 2 ){
		printf("Assinale a alternativa que apresenta uma estrutura\n"
				"comum ao sistema respiratório e digestivo:\n"
				"a) Brônquios\nb) Faringe\nc) Pulmão\nd) Esôfago\ne) Laringe\n");

	} // end if
	
	return ( select );
} // end function ft_question

void ft_chemistry ( void )
{
	 printf("%s\n%s\n%s\n", "********************",
                             "TÓPICO DE QUÍMICA",
                             "********************");



} // end function chemistry

void ft_math ( void )
{
	 printf("%s\n%s\n%s\n", "********************",
    	                    "TÓPICO DE MATEMÁTICA",
        	                "********************");

} // end function math

void ft_portuguese ( void )
{
	 printf("%s\n%s\n%s\n", "*****************************",
                             "TÓPICO DE LÍNGUA PORTUGUESA",
                             "****************************");

} // end function portuguese

