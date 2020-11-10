//Librerias.
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAXIMA_LONGITUD_CADENA 22
int intento, mientrasIntento;
//gcc main.c -o main

//Constructores de los metodos.
char rellenar(char arreglo[][MAXIMA_LONGITUD_CADENA], int random, int cantidad);
void control(char arreglo[][MAXIMA_LONGITUD_CADENA], int random, int cantidad);
void dibujo(int i);


//Arranque del juego, y dibuajar la Horca y manda a llamar el método del control.
int main(void){
	int random = rand() % 2;
  int cantidad;
	system("clear");
	dibujo(0);
  char arreglo[][MAXIMA_LONGITUD_CADENA] = {"ARSENAL", "BAUTIZO", "COMADREJA", "CONSULTA", "DINOSAURIO", "ZAPATO", "LIBRO", "PARANGARICUTIRIMIUCARO", "LIMBO", "ESFERA"};
  int longitudDelArreglo = sizeof(arreglo) / sizeof(arreglo[0]);
  printf("El arreglo tiene el valor: %s\n", arreglo[random]);
  /*printf("Número random: %d\n", random);
  cantidad = strlen(arreglo[random]);*/
	cantidad = strlen(arreglo[random]);
  printf("Cantidad de caracteres: %i\n\n", cantidad);
  for(int x = 0; x < cantidad; x++)
  {
		printf("___ ");
  }
	control(arreglo, random, cantidad);
}

//Controlador de los métodos entre el "dibujo" de perder ahorcado y las lentras en "relleno".
void control(char arreglo[][MAXIMA_LONGITUD_CADENA], int random, int cantidad){
	char continuar;
	//printf("\n\nsi entro al while de rellenarrrrr? %i \n\n",intento);
	while(intento < 6){
		//printf("si entro al while? %i   ",intento);
		//rellenar(arreglo, random, cantidad);
		//intento = rellenar(arreglo, random, cantidad);
		intento = rellenar(arreglo, random, cantidad);
		//printf("\n\nque esta enviando desde rellenar? %i", intento);
		/*if(intento == 6){
			printf("Deseas continuar: \n\nsi   no ");
			scanf("%c", &continuar);
			if(continuar == "si" || continuar == "SI"){
				dibujo(0);
			}else{
				system("clear");
				printf("Deseas ");
				dibujo(6);
			}
		}else{
			printf("Desuar: \n\nsi   no ");
		}*/
		switch(intento){
			case 0 : 
				system("clear");
				dibujo(1);
			break;
			case 1 : 
				system("clear");
				dibujo(2);
			break;
			case 2 : 
				system("clear");
				dibujo(3);
			break;
			case 3 : 
				system("clear");
				dibujo(4);
			break;
			case 4 : 
				system("clear");
				dibujo(5);
			break;
			case 5 : 
				system("clear");
				dibujo(6);
			break;
			case 6 : 
				system("clear");
				dibujo(7);
			break;
			case 7 :
				//intento = 0; 
				intento = mientrasIntento;
				rellenar(arreglo, random, cantidad);
			break;
			default:
				printf("  _/   \\_");
				printf("    Perdiste... Buena suerte para la próximaaaaaa!");
		}
	}
	//return 0;
	dibujo(6);
}

char rellenar(char arreglo[][MAXIMA_LONGITUD_CADENA], int random, int cantidad){
	char c, array[0];
	int z;
	//mientrasIntento = intento;
	//intento = mientrasIntento;
	//printf("Arreglo???%c  ", arreglo[random][cantidad]);
	//system("clear");
	//dibujo(0);
	printf("\n\nIntento # %i", intento + 1);
	printf("\n\nIngresa una letra alfabética: ");
	//scanf("%c", &c);
	scanf(" %c", &c);
	//scanf("\n\n\n");
	c = toupper(c);
	
		for(int i = 0; i < cantidad; i++){
			if (c == arreglo[random][i]){
				array[i] = arreglo[random][i];
				//printf("lllll %c ",array[i]);
				//printf("gg cantidad %i ",cantidad);
					//printf("___ ");
			}
		}


	//printf("\n\nque mierda he digitado? %c", c);
	for(int x = 0; x < cantidad; x++){
			if (array[x] == arreglo[random][x]){
				//arreglo[random][x] = toupper(arreglo[random][x]); //Poner en mayuscula
				//array[x] = arreglo[random][x]; //esto lo utilizare mas adelante.
				system("clear");
				dibujo(intento);
				
				//printf("%c ",arreglo[random][x]);
				printf("%c ",array[x]);
				//printf("%c ",c);
				//for(int l = 0; l < cantidad; l++){
					//system("clear");
					//dibujo(intento);
					//printf("%c  ", array[l]);
				//}
				
				z++;
				//printf("\n\nque mierda esta manadando? %c", c);
			}else{
				printf("___ ");
			}
			//printf("\nque mierda esta manadando?%c", c);
			//break;
	}
	//z++;
	if(z==0){
		return intento;
		//return intento;
		//printf("\n\nSi cuenta? %i", intento);
		intento++;
		//printf("\n\nSi cuenta? %i", intento);
	}else{
		//printf("en teoria deberia de rrellenar. \n\n");
		//mientrasIntento = intento;
		return 7;
		z = 0;
	}	
	//imprimir();
	//system("clear");
}

void dibujo(int i){	
	switch(i) {
		case 0 :
			printf("\n\n 	  ______\n");printf(" 	 | 	   \\| \n");printf("      	    |\n");printf("    	    |\n");printf(" 	   	    |\n");printf("    	    |\n");printf(" 	 	    |\n");printf("  	    ____|____\n\n");
		intento--;
		break;
		case 1 : 
			printf("\n\n 	  ______\n");printf(" 	 | 	   \\| \n");printf("    _Q_");printf("     |    Te quedan 4 intentos. Animo!\n");printf("    	    |\n");printf(" 	   	    |\n");printf("    	    |\n");printf(" 	 	    |\n");printf("  	    ____|____\n\n");
		break;
		case 2 : 
			printf("\n\n 	  ______\n");printf(" 	 | 	   \\| \n");printf("    _Q_");printf("     |    Te quedan 4 intentos. Animo!\n");printf("   /|||\\ ");printf("   |    Te quedan 3 intentos, ya casi lo tienes.\n");printf(" 	   	    |\n");printf("    	    |\n");printf(" 	 	    |\n");printf("  	    ____|____\n\n");
		break;
		case 3 : 
			printf("\n\n 	  ______\n");printf(" 	 | 	   \\| \n");printf("    _Q_");printf("     |    Te quedan 4 intentos. Animo!\n");printf("   /|||\\ ");printf("   |    Te quedan 3 intentos, ya casi lo tienes.\n");printf("  /  |  \\");printf(" 	|    Te quedan 2 intentos. Te falta poco.\n");printf("    	    |\n");printf(" 	 	    |\n");printf("  	    ____|____\n\n");
		break;
		case 4 : 
			printf("\n\n 	  ______\n");printf(" 	 | 	   \\| \n");printf("    _Q_");printf("     |    Te quedan 4 intentos. Animo!\n");printf("   /|||\\ ");printf("   |    Te quedan 3 intentos, ya casi lo tienes.\n");printf("  /  |  \\");printf(" 	|    Te quedan 2 intentos. Te falta poco.\n");printf("    / \\ ");printf("    |    Te quedan 1 intentos. Piensa en la palabra.\n");printf("    	    |\n");printf("  	    ____|____\n\n");
		break;
		case 5 : 
			printf("\n\n 	  ______\n");printf(" 	 | 	   \\| \n");printf("    _Q_");printf("     |    Perdedor!\n");printf("   /|||\\ ");printf("   |    Loser.\n");printf("  /  |  \\");printf(" 	|    Que malo eres.\n");printf("    / \\ ");printf("    |    Vete llorando.\n");printf("  _/   \\_");printf("   |\n");printf("  	    ____|____\n\n");printf("Perdiste... Buena suerte para la próxima!");
		break;
		case 6 :
			system("clear");
		  printf("\n\n\n\n"
              "                                       ,,,                         MM .M\n"
               "                                    ,!MMMMMMM!,                     MM MM  ,.\n"
      "              ., .M              .MMMMMMMMMMMMMMMM.,          'MM.  MM MM .M'\n"
    "          . M: M;  M          .MMMMMMMMMMMMMMMMMMMMMM,          'MM,:M M'!M'\n"
   "          ;M MM M: .M        .MMMMMMMMMMMMMMMMMMMMMMMMMM,         'MM'...'M\n"
   "           M;MM;M :MM      .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.       .MMMMMMMM\n"
   "           'M;M'M MM      MMMMMM  MMMMMMMMMMMMMMMMM  MMMMMM.    ,,M.M.'MMM'\n"
   "            MM'MMMM      MMMMMM @@ MMMMMMMMMMMMMMM @@ MMMMMMM.'M''MMMM;MM'\n"
   "           MM., ,MM     MMMMMMMM  MMMMMMMMMMMMMMMMM  MMMMMMMMM      '.MMM\n"
    "          'MM;MMMMMMMM.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMM\n"
    "           ''.'MMM'  .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM       MMMM\n"
    "            MMC      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMMM\n"
    "           .MM      :MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM''MMM       MMMMM\n"
    "           MMM      :M  'MMMMMMMMMMMMM.MMMMM.MMMMMMMMMM'.MM  MM:M.    'MMMMM\n"
   "           .MMM   ...:M: :M.'MMMMMMMMMMMMMMMMMMMMMMMMM'.M''   MM:MMMMMMMMMMMM'\n"
   "          AMMM..MMMMM:M.    :M.'MMMMMMMMMMMMMMMMMMMM'.MM'     MM''''''''''''\n"
   "          MMMMMMMMMMM:MM     'M'.M'MMMMMMMMMMMMMM'.MC'M'     .MM\n"
    "          '''''''''':MM.       'MM!M.'M-M-M-M'M.'MM'        MMM\n"
               "                     MMM.            'MMMM!MMMM'            .MM\n"
                "                     MMM.             '''   ''            .MM'\n"
                 "                      MMM.                               MMM'\n"
                  "                      MMMM            ,.J.JJJJ.       .MMM'\n"
                   "                        MMMM.       'JJJJJJJ'JJJM   CMMMMM\n"
                     "                         MMMMM.    'JJJJJJJJ'JJJ .MMMMM'\n"
                       "                           MMMMMMMM.'  'JJJJJ'JJMMMMM'\n"
                         "                            'MMMMMMMMM'JJJJJ JJJJJ'\n"
                            "                             ''MMMMMMJJJJJJJJJJJ'\n"
														"                               ''MMMMMJJJJJJJJJJJ'\n"
                                  "                                       'JJJJJJJJ'\n\n\n\n");
		case 7 : 
		  //system("clear");
			printf("Felicidades eres un ckrack!\n");
		  printf("´*•.¸(*•.¸♥¸.•*´)¸.•*´ \n"" ♥«´¨•°..Urra..°•´¨»♥\n"".¸.•*(¸.•*´♥`*•.¸)`*•.");
		break;
		default:
			//system("clear");
			printf("Felicidades eres un ckrack!\n");
		  printf("´*•.¸(*•.¸♥¸.•*´)¸.•*´ \n"" ♥«´¨•°..Urraaa..°•´¨»♥\n"".¸.•*(¸.•*´♥`*•.¸)`*•.");
		}
		if(intento <= 7){
			intento++;
		}else{
			intento--;
		}
}