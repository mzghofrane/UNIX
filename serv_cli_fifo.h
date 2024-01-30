#ifndef SERV_CLI_FIFO_H_INCLUDED
#define SERV_CLI_FIFO_H_INCLUDED

/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h> */

/* Constantes et macros communes aux clients et aux serveurs */
#define NMIN 1
#define NMAX 10
#define FIFO1 "fifo1"
#define FIFO2 "fifo2"


/* Structure de données pour représenter une question du client */
typedef struct Question {
   int n; //Nombre d'entiers aléatoires à générer
   int pid;
} Question;


/* Structure de données pour représenter une réponse du serveur */
typedef struct Reponse {
   int pid;
   int * tab; //Tableau des nombres aléatoires générés
} Reponse;

#endif
