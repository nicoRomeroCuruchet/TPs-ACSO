/***************************************************************************
 * Esta bomba esta basada en un projecto de Carnegie Mellon University.
 * Autores originales: R. Bryant and D. O'Hallaron
 *
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "support.h"
#include "phases.h"

/* 
 * Acordarme de borrar este archivo asi los alumnos no saben nada de la bomoba.
 * Asi explotan de manera espectacular. -- Conde de MonteCristo
 *
 */

FILE *infile;

int main(int argc, char *argv[])
{
    char *input;

  
    /* La bomba sin argumentos usa STDIN */
    if (argc == 1) {  
	infile = stdin;
    } 

    /* Cuando corre el programa con un argumento <file>, la bomba lee de <file> 
     * hasta EOF*/
    else if (argc == 2) {
	if (!(infile = fopen(argv[1], "r"))) {
	    printf("%s: Error: Couldn't open %s\n", argv[0], argv[1]);
	    exit(8);
	}
    }

    /* Solo se acepta un argumento. */
    else {
	printf("Usage: %s [<input_file>]\n", argv[0]);
	exit(8);
    }

    /* Cocinemos la magia. */
    initialize_bomb();

    printf("Bienvenidos a la bomba. Tienen 4 etapas para inmolarse.\n");
    printf("Que tengan un buen dia!\n");

    //Y ahora las etapads.
    
    input = read_line();             /* Get input                   */
    phase_1(input);                  /* Run the phase               */
    phase_defused();                 
    printf("Etapa 1 desactivada. Aver subimos la apuesta en la proxima\n");

     input = read_line();
    phase_2(input);
    phase_defused();
    printf("Diablos, pense que esa los iba a agarrar. Mitad de la bomba hecha ...\n");

    input = read_line();
    phase_3(input);
    phase_defused();
    printf("Rayos y Centellas, queda una sola etapa para deneterlos!\n");

    input = read_line();
    phase_4(input);
    phase_defused();

    /*Increible que hayan llegado hasta aca. Pero falta algo ... 
      Capaz lo pasaron por alto, Mua ha ha ha ha! */
    
    return 0;
}
//