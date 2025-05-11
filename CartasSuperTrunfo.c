#include <stdio.h>
        int main() {
            char estadoa[20], estadob[20];
            char cidadea[20], cidadeb[20];
            char codigoa[20], codigob[20];
            int populacaoa, populacaob;
            int pontosta, pontostb;
            float areaa, areab;
            float piba, pibb;
                                                                //fiz esse código em etapas, primeiro pensando em nomes fáceis para as variáveis, utilizando por exemplo cidade A e cidade B

                printf("Bem vindo ao super trunfo! \n");
                printf("*****************************\n");     //utilizei sinais para espaçar algumas linhas para a leitura ficar mais fácil ao compilar
                printf("A seguir você irá adicionar os dados da primeira carta do jogo, bora começar?! \n");
                printf("Carta 01 \n");
                printf("Digite uma letra de A a H que represente um estado: \n");
                    scanf("%s", estadoa);
                printf("Digite o código da carta. O código da carta é a letra do estado digitada anteriormente seguido de um número de 0 a 4 que represente a carta (Ex: A01,B02...)\n");
                    scanf("%s", codigoa);
                    getchar(); 
                printf("Digite o nome da cidade:\n");
                    fgets(cidadea,20,stdin);
                    cidadea[strcspn(cidadea,"\n")]=0;
                printf("Agora digite o número de habitantes da cidade:\n");
                    scanf("%d", &populacaoa);
                printf("Digite a área da cidade em KM²:\n");   //*apliquei a identação do código em blocos, de uma forma que pudesse entender o código de forma mais rápida, e assim corrigir possíveis erros de sintaxe.
                    scanf("%f", &areaa);
                printf("Digite o Produto Interno Bruto (PIB) da cidade:\n");
                    scanf("%f", &piba);
                printf("Agora, digite a quantidade de pontos turísticos da cidade:\n");
                    scanf("%d", &pontosta);

                        printf("==================================================\n");

                        printf("Agora vamos cadastrar a carta 02!\n");
                        printf("Digite uma letra de A a H que represente um estado:\n");
                            scanf("%s", estadob);
                        printf("Digite o código da carta, lembrando que o código da carta é a letra do estado digitada anteriormente seguida de de um número de 0 a 4 que represente a carta(Ex: A01,B02):\n");
                            scanf("%s", codigob);
                            getchar();
                        printf("Digite o nome da cidade:\n");
                            fgets(cidadeb,20,stdin);
                            cidadeb[strcspn(cidadeb,"\n")]=0;
                        printf("Digite o número de habitantes da cidade:\n");
                            scanf("%d", &populacaob);
                        printf("Digite a área da cidade em KM²:\n");
                            scanf("%f", &areab);
                        printf("Digite o Produto Interno Bruto (PIB) da cidade:\n");
                            scanf("%f", &pibb);
                        printf("Digite a quantidade de pontos turísticos da cidade:\n");
                            scanf("%d", &pontostb);
               
                printf("============================================================\n");              
                printf("Aqui estão os dados das suas cartas:\n");
                printf("***********************************\n");
                printf("Carta 01:\n");
                printf("Estado:%s\n",estadoa);
                printf("Código:%s\n",codigoa);
                printf("Nome da cidade:%s\n",cidadea);
                printf("População:%d\n",populacaoa);
                printf("Área em KM²:%f\n",areaa);
                printf("PIB:%f\n",piba);
                printf("Número de pontos turísticos:%d\n",pontosta);

                printf("============================================================\n");
                    printf("Carta 02:\n");
                    printf("Estado:%s\n",estadob);
                    printf("Código:%s\n",codigob);
                    printf("Nome da cidade:%s\n", cidadeb);
                    printf("População:%d\n",populacaob);
                    printf("Área em KM²:%f\n",areab);
                    printf("PIB:%f\n",pibb);
                    printf("Número de pontos turísticos:%d\n",pontostb);

        
            return 0;
            }
