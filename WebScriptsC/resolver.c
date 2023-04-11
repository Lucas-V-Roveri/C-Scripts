#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main (int argc, char *argv[]){

printf(".:Script Criado por Lucas Vilela Roveri:.\n");


	if (argc <= 1) {
	
	printf("Modo de uso: ./resolver SITE");
	

	} else {
	struct hostent  *alvo = gethostbyname(argv[1]);

	alvo = inet_ntoa(*((struct in_addr *)alvo->h_addr));

	printf("IP: %s\n", alvo);
	}


return 0;

}
