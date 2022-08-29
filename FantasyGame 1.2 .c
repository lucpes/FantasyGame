#include<stdio.h>

int main(void){
  int resp;

  printf("Voce eh um aventureiro (arqueiro) rank B de uma famosa guilda da cidade,\n");
  printf("O rei fez um chamado urgente para que voce comparecesse ao salao real IMEDIATAMENTE.\n");
  printf("Ao chegar, o rei lhe explicou que sua filha, a princesa, foi sequestrada e precisa da sua ajuda para resgata-la.\n");
  printf("Voce aceita a missao?\n");
  printf("1 - sim\n");
  printf("2 - nao\n");
  scanf("%d", &resp);

  switch (resp){
    case 1: // case 1 principal
        printf("Voce iniciou sua jornada para resgatar a princesa perdida.\n");
        printf("Deseja ir para qual direcao? \n");
        printf("1 - norte\n");
        printf("2 - sul\n");
        printf("3 - leste\n");
        printf("4 - oeste\n");
        scanf("%d", &resp);
       
        switch (resp) {
            case 1: // norte
				printf("Voce segue ao norte e logo encontra uma cabana, ela parece abandonada.\n");
				printf("1 - Tentar entrar\n");
				printf("2 - Contornar a cabana\n");
				scanf("%d", &resp);
				
				switch (resp) {
				    case 1: // entrar na cabana
    				    printf("Voce tentar entrar pela porta mas esta trancada, mas logo percebe que pode entrar pela janela, entao voce entra.\n");
    				    printf("Dentro da cabana nao tem muita coisa mas voce acha um alcapao que da em um porao bem escuro, com uma luz bem no fundo bastante estranha.\n");
    				    printf("1 - Entrar no alcapao\n");
    				    printf("2 - Tentar sair da cabana\n");
    				    scanf("%d", &resp);
    				    switch (resp) {
				        case 1: // entrar no alçapão
    				        printf("Voce decide entrar, com muito medo e vai indo bem devagar para a luz no fim do corredor.\n");
    				        printf("Quanto mais perto voce chega, mais vai ouvindo um ruido estranho que parece uma musica macabra.\n");
    				        printf("Finalmente voce encontra uma mulher com uma aparencia muito feia, o lugar fedia muito e voce se arrepia todo.\n");
    				        printf("1 - Superar seus medos e falar com ela\n");
    				        printf("2 - Correr o mais rápido que puder\n");
    				        scanf("%d", &resp);
    				        switch (resp) {
				            case 1: // falar com ela
    				            printf("Voce tenta falar com ela mas percebe que ela fala um dialeto que voce nao entende.\n");
    				            printf("Logo ela comeca a ficar histil com voce, ela pega uma foice bem grande e passa na sua cabeca, arrancado ela fora.\n");
    				            printf("Nos ultimos 3 segundos de vida voce pensa: 'porque eu nao corri?'.\n");
    				            break;
    				        case 2: // correr
    				            printf("Voce corre o mais rapido que consegue mas nao lembra mais o caminho de volta.\n");
    				            printf("Ela pega uma foice e vai atras de voce.\n");
    				            printf("Ela te alcanca e corta sua cabeca fora.\n");
    				            printf("Voce foi morto por que sua memoria e ruim, tragico.\n");
    				            break;
    				        }
    				    break;
                        case 2: // Tentar sair da cabana
                            printf("Voce pensa em sair mas lembra que sua mae nao criou um covarde, entao voce encara seus medos e entra no alcapao.\n");
                            printf("Voce decide entrar, com muito medo e vai indo bem devagar para a luz no fim do corredor.\n");
    				        printf("Quanto mais perto voce chega, mais vai ouvindo um ruido estranho que parece uma musica macabra.\n");
    				        printf("Finalmente voce encontra uma mulher com uma aparencia muito feia, o lugar fedia muito e voce se arrepia todo.\n");
    				        printf("Mas quando voce estava distraido, ela corta sua cabeca com uma foice.\n");
    				        printf("Aparentemente nem sempre eh ruim ser covarde.\n");
    				    break;
    				    }
                    case 2: // contornar a cabana  
                        printf("Voce contorna a cabana e segue mais ao norte, la voce encontra um caminho e comeca a seguir ele buscando achar algo.\n");
                        printf("Apos 3 horas andando voce olha ao seu redor e so ve um completo vazio.\n");
                        printf("Voce esta cansado e com sede apos esse exaustiva caminhada, entao voce entra em um dilema.\n");
                        printf("1 - Arriscar continuar o caminho\n");
                        printf("2 - Voltar para o reino\n");
                        scanf("%d", &resp);
                        switch (resp) {
                            case 1: // arriscar o caminho
                                printf("Mesmo com poucas forcas voce continua andando, e andando, e andando.\n");
                                printf("Ate que voce se depara com uma linda fada.\n");
                                printf("Ela te proporciona um dos 3 desejos que voce escolher... salvar a princesa, se tornar rei ou fortuna infinita.\n");
                                printf("1 - Salvar a princesa\n");
                                printf("2 - Se tornar rei\n");
                                printf("3 - Fortuna infinita\n");
                                scanf("%d", &resp);
                                switch (resp) {
                                    default:
                                        printf("Na verdade tudo isso nao passava de uma ilusao por estar desidratado, voce acaba morrendo.\n");
                                    return 0;
                                }
                            case 2: // tentar Voltar
                                printf("Voce comeca a caminhar de volta todo o percurso que ja havia feito.\n");
                                printf("Mas infelizmente voce acaba morrendo na porta do reino, desidratado... Que azar\n");
                            return 0;
                        }
                    break;
				}
            break;
            case 2: // sul
                printf("Voce decide seguir ao sul, em busca da princesa perdida.\n");
                printf("Proximo ao castelo, voce ve uma fazenda.\n");
                printf("1 - Ir a Fazenda\n");
                printf("2 - Seguir o caminho\n");
                scanf("%d", &resp);
                switch (resp) {
                    case 1: // Ir a Fazenda
                        printf("Voce entra na fazenda e logo encontra um fazendeiro que parece ser amigavel.\n");
                        printf("Depois de conversar bastante sobre o preco do dolar, ele lhe oferece uma armadura de ferro reforçada em troca da amizade, antes de voce seguir o caminho.\n");
                        printf("1 - Aceitar\n");
                        printf("2 - Recusar\n");
                        scanf("%d", &resp);
                        switch (resp) {
                            case 1: // aceitar a armadura
                                printf("Voce aceita a armadura, veste ela e agradece ao fazendeiro. Entao, continua seu caminho.\n");
                                printf("Mais a frente voce se depara com um esqueleto arqueiro maligno das trevas e nao ve outra opcao a nao ser enfrenta-lo.\n");
                                printf("Mas gracas a sua armadura voce sai vivo desse confronto.\n");
                                printf("Exausto da ultima batalha voce decide parar em uma cabana abandonada localizada mais ao sul.\n");
                                printf("La, voce encontra uma espada bem afiada, ideal para um combate.\n");
                                printf("1 - Pegar para sua jornada\n");
                                printf("2 - Deixar ela onde encontrou\n");
                                scanf("%d", &resp);
                                switch (resp) {
                                    case 1: // pegar a espada
                                        printf("Apos pegar a espada e descansar o suficiente, voce segue o caminho mais ao sul.\n");
                                        printf("Mais a frente voce encontra uma torre protegida por bandidos.\n");
                                        printf("1 - Tentar enfrentar\n");
                                        printf("2 - Seguir o caminho\n");
                                        scanf("%d", &resp);
                                        switch (resp) {
                                            case 1: // Tentar enfrentar
                                                printf("Voce comeca a brigar com todos os bandidos mas acaba morrendo pois nao eh muito habilidoso com espadas, pois voce eh um arqueiro\n");
                                                printf("Voce morreu\n");
                                            return 0;
                                            case 2: // Seguir o caminho
                                                printf("Voce segue o caminho, ignorando a torre mas infelizmente nao encontra a princesa em sua jornada.\n");
                                                printf("Voce volta para o castelo com a missao fracassada\n");
                                            return 0;
                                        }
                                        break;
                                    case 2: // nao pegar a espada
                                        printf("Voce deixa a espada onde a encontrou, afinal, voce eh um arqueiro\n");
                                        printf("Mais a frente voce encontra uma torre protegida por bandidos.\n");
                                        printf("1 - Tentar enfrentar\n");
                                        printf("2 - Seguir o caminho\n");
                                        scanf("%d", &resp);
                                        switch (resp) {
                                            case 1: // tentar enfrentar pt2
                                                printf("Voce ergue seu arco, levanta a cabeca e vai a luta\n");
                                                printf("Com sorte, voce consegue matar todos os bandidos que protegiam a torre... que cliche\n");
                                                printf("No topo do castelo voce encontra a princesa e consegue leva-la em seguranca ao castelo, concluindo assim sua missao.\n");
                                                printf("Pelo trabalho, voce foi promovido a arqueiro classe A\n");
                                                printf("Voce venceu");
                                            return 0;
                                            case 2: // seguir o caminho pt2
                                                printf("Voce segue o caminho, ignorando a torre mas infelizmente nao encontra a princesa em sua jornada.\n");
                                                printf("Voce volta para o castelo com a missao fracassada\n");
                                            return 0;
                                        }
                                    break;
                                }
                            case 2: //Recusar a armadura
                                printf("Voce recusa a armadura, afinal, nao se pode confiar em qualquer um.\n");
                                printf("Mais a frente voce se depara com um esqueleto arqueiro maligno das trevas e nao ve outra opcao a nao ser enfrenta-lo.\n");
                                printf("Mas infelizmente voce nao eh bom suficiente para matar ele e morre com uma flechada no peito\n");
                            return 0;
                        }
                    break;
                    case 2: // Seguir o caminho
                        printf("Voce segue o caminho porque sente uma energia ruim naquela fazenda.\n");
                        printf("Mais a frente voce encontra uma torre protegida por bandidos.\n");
                        printf("1 - Tentar enfrentar\n");
                        printf("2 - Seguir o caminho\n");
                        scanf("%d", &resp);
                        switch (resp) {
                            case 1: // tentar enfrentar
                                printf("Voce tenta enfrentar os bandidos na torre mas voce esta muito despreparado, alem de ser ruim no arco.\n");
                                printf("Eles te colocam no calabouco da torre, junto com a princesa e voce fica la pelo resto da sua vida.\n");
                                printf("Sua missao fracassou mas pelomenos voce encontrou a princesa");
                            return 0;
                            case 2: // seguir o caminho
                                printf("Voce segue o caminho, ignorando a torre mas infelizmente nao encontra a princesa em sua jornada.\n");
                                printf("Voce volta para o castelo com a missao fracassada\n");
                            return 0;
                        }
                    break;
                }
            break;
            case 3: // leste
                printf("Voce segue caminho ao leste e logo encontra uma bifurcacao onde pode escolher continuar indo reto, ou pode virar para esquerda ou direita.\n");
                printf("1 - Continuar indo reto\n");
                printf("2 - Seguir para direita\n");
                printf("3 - Seguir para esquerda\n");
                // continuar aqui!!!
            break;
            case 4: // oeste
                printf("");
            break;
            default:
                printf("O rei percebe que voce nao esta pronto para essa missao, porque nem direcao voce consegue seguir.\n");
                printf("Voce foi removido da missao e ficou com uma pessima fama no reino, que triste.\n");
            return 0;
        }
        break;
    case 2:  // case 2 principal
        printf("FIM da historia\n");
    return 0;
    default:
        printf ("Valor invalido!\n");
    return 0;
  }
return 0;
}

