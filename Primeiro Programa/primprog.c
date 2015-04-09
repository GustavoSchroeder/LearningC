#include <stdio.h>

int main(){
    int n;
    int par;
    int impar;
    int num;
    int cont;

    printf("Digite o tamanho da sequencia: \n"); //mensagem na tela
    scanf("%d", &n); // le informação do teclado

    par=0;
    impar=0;
    cont=0;

    while(cont < n){
        printf("Digite o %do. número: ", cont+1);
        scanf("%d", &num);

        if(num%2 == 0){
            par++;
        }
        else{
            impar++;
        }
        cont++;
    }

    printf("A sequência é foramada por %d número ímpares e %d números pares. \n\n", impar, par);

    return 0;

}
