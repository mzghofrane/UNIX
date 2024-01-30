#ifndef HANDLERS_SERV_H_INCLUDED
#define HANDLERS_SERV_H_INCLUDED

/*#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> */
 
 
/* Handler pour le réveil du serveur suite à la réception du signal SIGUSR1 */
void hand_reveil(int sig);

/* Handler pour la fin du serveur suite à la réception d'un signal quelconque */
void fin_serveur(int sig);


#endif 
