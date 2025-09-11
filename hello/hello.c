#include <stdio.h>
//inclui a biblioteca padrão de entrada e saída, permitindo usar funções como printf.
#include <stdlib.h>  // necessário para system()
//inclui a biblioteca padrão de utilidades, necessária aqui para a função system()

//---------------------------------------------------------------------------------------
int main() {
//Define a função principal do programa. Todo programa C começa por main().    
    printf("Hello World!\n");
//printf escreve na tela o texto "Hello World!".
//\n é uma quebra de linha, então o cursor vai para a linha seguinte.
 
   system("pause"); // pausa no Windows 
//system("pause") chama o comando do Windows pause, que faz o programa esperar o usuário apertar uma tecla antes de fechar.
//Isso é útil para ver a mensagem no console antes que a janela se feche automaticamente.   

    return 0;
//indica que o programa terminou corretamente.    

//Esse programa apenas imprime "Hello World!" na tela, espera o usuário apertar uma tecla e então termina.
}
