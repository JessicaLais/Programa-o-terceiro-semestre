main(){
int *pontA, *pontB, v1, v2;
v1 = 3;
v2 = 12;
pontA = &v1;
pontB = pontA;
*pontB = 44;
printf("Valores das variáveis\n");
printf("v1 (conteudo) = %d\n",v1);
printf("v1 (endereco) = %d\n",&v1);
printf("v2 (conteudo) = %d\n",v2);
printf("v2 (endereco) = %d\n",&v2);
printf("Valores dos ponteiros\n");
printf("pontA (conteudo) = %d\n",pontA);
printf("pontA (endereco) = %d\n",&pontA);
printf("pontA (valor do ponteiro) = %d\n",*pontA);
printf("pontB (conteudo) = %d\n",pontB);
printf("pontB (endereco) = %d\n",&pontB);
printf("pontB (valor do ponteiro) = %d\n",*pontB);
getch(); }

/*Valores das variaveis
v1 (conteudo) = 44
v1 (endereco) = 6487564
v2 (conteudo) = 12
v2 (endereco) = 6487560
Valores dos ponteiros
pontA (conteudo) = 6487564
pontA (endereco) = 6487576
pontA (valor do ponteiro) = 44
pontB (conteudo) = 6487564
pontB (endereco) = 6487568
pontB (valor do ponteiro) = 44
*/