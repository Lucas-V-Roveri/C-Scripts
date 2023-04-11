#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>

int main (int argc, char *argv[]){

	printf(".:Script Criado Por Lucas Vilela Roveri:.\n");

	int meusocket;
	int conecta;

	int porta;
	int final = 0;
	int inicio = 1;
	char *destino;
	destino = argv[1];

	struct sockaddr_in alvo;
	
	for (porta=inicio;porta > final; porta++){
	
	meusocket = socket(AF_INET, SOCK_STREAM, 0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(80);
	alvo.sin_addr.s_addr = inet_addr(destino);
	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

	if(conecta == 0){
		printf("HaCKEd By anGeL oF ThE NiGhT");

	}
}
return 0;
}
