CC=gcc
CFLAGS=-Wall -Wextra

all: serveur client

serveur: serveur.c Handlers_Serv.h
	$(CC) $(CFLAGS) -o serveur serveur.c Handlers_Serv.h 
	./serveur
	
client: client.c Handlers_Cli.h
	$(CC) $(CFLAGS) -o client client.c Handlers_Cli.h
	./client

clean:
	rm -f serveur client

