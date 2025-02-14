#include <stdio.h>

//Área onde variáveis utilizadas serão definidas
int main() {
    char cidade1[30], cidade2[30];
    int codigo1, codigo2, pts_turisticos1, pts_turisticos2, categoria1, categoria2;
    long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2, densidade1, densidade2, PIBperCapita1, PIBperCapita2;

//Área para o usuário inserir os dados da carta 1
    printf("Insira os dados referentes à Carta 1\n");

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("Insira o código da cidade: ");
    scanf("%d", &codigo1);

    printf("Insira o tamanho da população: ");
    scanf(" %ld", &populacao1);

    printf("Insira o tamanho da área em metros quadrados: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos1);

//Área onde será exibido na tela os dados da carta 1 que o usuário inseriu
    printf("\nDados referentes à Carta 1\n");
    printf("Cidade: %s\n", cidade1);
    printf("Código da cidade: %d\n", codigo1);
    printf("Tamanho da população: %ld pessoas\n", populacao1);
    printf("Tamanho da área: %.2f m²\n", area1);
    printf("PIB da cidade: R$ %.2f\n", PIB1);
    printf("Quantidade de pontos turísticos: %d pontos\n", pts_turisticos1);


//Área onde os cálculos referentes aos dados inseridos da carta 1 anteriormente serão mostrados
    densidade1 = (float)populacao1 / area1;
    printf("A densidade populacional é: %.2f hab/m²\n", densidade1);

    PIBperCapita1 = (float)PIB1 / populacao1;
    printf("O PIB per capita é: R$ %.2f\n", PIBperCapita1);

//Cálculo do Super Poder da Carta 1 (Soma de todas as propriedades)
    float poder1 = populacao1 + pts_turisticos1 + area1 + PIB1 + densidade1 + PIBperCapita1;
    printf("Super Poder desta carta: %.2f\n", poder1);


//Área para o usuário inserir os dados da carta 2
    printf("\nInsira os dados referentes à Carta 2\n");

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Insira o código da cidade: ");
    scanf("%d", &codigo2);

    printf("Insira o tamanho da população: ");
    scanf(" %ld", &populacao2);

    printf("Insira o tamanho da área em metros quadrados: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos2);

//Área onde será exibido na tela os dados da carta 1 que o usuário inseriu
    printf("\nDados referentes à Carta 2\n");
    printf("Cidade: %s\n", cidade2);
    printf("Código da cidade: %d\n", codigo2);
    printf("Tamanho da população: %ld pessoas\n", populacao2);
    printf("Tamanho da área: %.2f m²\n", area2);
    printf("PIB da cidade: R$ %.2f\n", PIB2);
    printf("Quantidade de pontos turísticos: %d pontos\n", pts_turisticos2);


//Área onde os cálculos referentes aos dados inseridos da carta 1 anteriormente serão mostrados
    densidade2 = (float)populacao2 / area2;
    printf("A densidade populacional é: %.2f hab/m²\n", densidade2);

    PIBperCapita2 = (float)PIB2 / populacao2;
    printf("O PIB per capita é: R$ %.2f\n", PIBperCapita2);


//Cálculo do Super Poder da Carta 2 (Soma de todas as propriedades)
    float poder2 = populacao2 + pts_turisticos2 + area2 + PIB2 + densidade2 + PIBperCapita2;
    printf("Super Poder desta carta: %.2f\n", poder2);


//Área onde os dados serão comparados para eleger o vencedor
    printf("\n Escolha duas categorias para comparar e eleger a carta vencedora: \n");
        printf("1. População\n");
        printf("2. Área \n");
        printf("3. Pontos Turísticos \n");
        printf("4. PIB \n");
        printf("5. Densidade Populacional \n");
        printf("6. PIB per Capita \n");
        printf("7. Super Poder \n");
        printf("\nCategoria 1: ");
        scanf("%d", &categoria1);
        printf("Categoria 2: ");
        scanf("%d", &categoria2);

        switch (categoria1)
        {
        case 1:
             printf("\n Comparando a categoria População: \n");
             printf("População da cidade %s: %ld \nPopulação da cidade %s: %ld\n", cidade1, populacao1, cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("%s tem a população maior. \n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
        if (populacao1 == populacao2) {
            printf("Ambas as cidades possuem a mesma população. É um empate!\n");
        } else {
            printf("%s tem a população maior. \n", cidade2);
            printf("%s é a cidade vencedora!\n", cidade2);
            }

         }
            break;
        case 2:
        printf("\n Comparando a categoria Área:\n");
        printf("Área da cidade %s: %.2f \n Área da cidade %s: %.2f\n", cidade1, area1, cidade2, area2);
    if (area1 > area2) {
        printf("%s tem a maior área.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else { 
        if (area1 == area2) {
            printf("Ambas as cidades possuem a mesma área. É um empate!\n");
        } else {
            printf("%s tem a maior área.\n", cidade2);
            printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
            break;

        case 3:
    printf("\n Comparando a categoria Pontos turísticos:\n");
    printf("Pontos turísticos da cidade %s: %d \n Pontos turísticos da cidade %s: %d\n", cidade1, pts_turisticos1, cidade2, pts_turisticos2);
    if (pts_turisticos1 > pts_turisticos2) {
        printf("%s possui mais pontos turísticos. \n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (pts_turisticos1 == pts_turisticos2) {
                printf("Ambas as cidades possuem o mesmo número de pontos turísticos. É um empate!\n");
            } else {
                printf("%s possui mais pontos turísticos. \n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
        break;

        case 4:
        printf("\n Comparando a categoria PIB:\n");
        printf("PIB da cidade %s: %.2f \n PIB da cidade %s: %.2f\n", cidade1, PIB1, cidade2, PIB2);
    if (PIB1 > PIB2) {
        printf("%s possui o maior PIB.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (PIB1 == PIB2) {
                printf("Ambas as cidades possuem o mesmo PIB. É um empate!\n");
            } else {
                printf("%s possui o maior PIB.\n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
        break;
        case 5:
    printf("\n Comparando a categoria Densidade Populacional:\n");
    printf("Densidade populacional da cidade %s: %f \n Densidade populacional da cidade %s: %f\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 > densidade2) {
        printf("%s possui a menor densidade populacional.\n", cidade2);
        printf("%s é a cidade vencedora!\n", cidade2);
    } else {
            if (densidade1 == densidade2) {
                printf("Ambas as cidades possuem a mesma densidade populacional. É um empate!\n");
            } else {
                printf("%s possui a menor densidade populacional.\n", cidade1);
                printf("%s é a cidade vencedora!\n", cidade1);
            }
        }
        break;
        case 6:
    printf("\n Comparando a categoria PIB per Capita:\n");
    printf("PIB per Capita da cidade %s: %.2f \n PIB per Capita da cidade %s: %.2f\n", cidade1, PIBperCapita1, cidade2, PIBperCapita2);
    if (PIBperCapita1 > PIBperCapita2) {
        printf("%s possui o maior PIB.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (PIBperCapita1 == PIBperCapita2) {
                printf("Ambas as cidades possuem o mesmo PIB per Capita. É um empate!\n");
            } else {
                printf("%s possui o maior PIB.\n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
        break;
        case 7:
        printf("\n Comparando a categoria Super Poder:\n");
        printf("Super Poder da cidade %s: %.2f \n Super Poder da cidade %s: %.2f\n", cidade1, poder1, cidade2, poder2);
    if (poder1 > poder2) {
        printf("%s possui o maior Super Poder.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (poder1 == poder2) {
                printf("Ambas as cidades possuem o mesmo valor de Super Poder. É um empate!\n");
            } else {
                printf("%s possui o maior Super Poder.\n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }

         }
         break;
         default:
         printf("Categoria 1: Escolha inválida!\n");
        }

        switch (categoria2)
        {
        case 1:
        printf("\n Comparando a categoria População: \n");
        printf("População da cidade %s: %ld \nPopulação da cidade %s: %ld\n", cidade1, populacao1, cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("%s tem a população maior. \n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
        if (populacao1 == populacao2) {
            printf("Ambas as cidades possuem a mesma população. É um empate!\n");
        } else {
            printf("%s tem a população maior. \n", cidade2);
            printf("%s é a cidade vencedora!\n", cidade2);
            }

         }
            break;
        case 2:
    printf("\n Comparando a categoria Área:\n");
    printf("Área da cidade %s: %.2f \n Área da cidade %s: %.2f\n", cidade1, area1, cidade2, area2);
    if (area1 > area2) {
        printf("%s tem a maior área.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else { 
        if (area1 == area2) {
            printf("Ambas as cidades possuem a mesma área. É um empate!\n");
        } else {
            printf("%s tem a maior área.\n", cidade2);
            printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
            break;

        case 3:
        printf("\n Comparando a categoria Pontos turísticos:\n");
        printf("Pontos turísticos da cidade %s: %d \n Pontos turísticos da cidade %s: %d\n", cidade1, pts_turisticos1, cidade2, pts_turisticos2);
    if (pts_turisticos1 > pts_turisticos2) {
        printf("%s possui mais pontos turísticos. \n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (pts_turisticos1 == pts_turisticos2) {
                printf("Ambas as cidades possuem o mesmo número de pontos turísticos. É um empate!\n");
            } else {
                printf("%s possui mais pontos turísticos. \n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
        break;

        case 4:
    printf("\n Comparando a categoria PIB:\n");
    printf("PIB da cidade %s: %.2f \n PIB da cidade %s: %.2f\n", cidade1, PIB1, cidade2, PIB2);
    if (PIB1 > PIB2) {
        printf("%s possui o maior PIB.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (PIB1 == PIB2) {
                printf("Ambas as cidades possuem o mesmo PIB. É um empate!\n");
            } else {
                printf("%s possui o maior PIB.\n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
        break;
        case 5:
        printf("\n Comparando a categoria Densidade Populacional:\n");
        printf("Densidade populacional da cidade %s: %f \n Densidade populacional da cidade %s: %f\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 > densidade2) {
        printf("%s possui a menor densidade populacional.\n", cidade2);
        printf("%s é a cidade vencedora!\n", cidade2);
    } else {
            if (densidade1 == densidade2) {
                printf("Ambas as cidades possuem a mesma densidade populacional. É um empate!\n");
            } else {
                printf("%s possui a menor densidade populacional.\n", cidade1);
                printf("%s é a cidade vencedora!\n", cidade1);
            }
        }
        break;
        case 6:
        printf("\n Comparando a categoria PIB per Capita:\n");
        printf("PIB per Capita da cidade %s: %.2f \n PIB per Capita da cidade %s: %.2f\n", cidade1, PIBperCapita1, cidade2, PIBperCapita2);
    if (PIBperCapita1 > PIBperCapita2) {
        printf("%s possui o maior PIB.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (PIBperCapita1 == PIBperCapita2) {
                printf("Ambas as cidades possuem o mesmo PIB per Capita. É um empate!\n");
            } else {
                printf("%s possui o maior PIB.\n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }
        }
        break;
        case 7:
    printf("\n Comparando a categoria Super Poder:\n");
    printf("Super Poder da cidade %s: %.2f \n Super Poder da cidade %s: %.2f\n", cidade1, poder1, cidade2, poder2);
    if (poder1 > poder2) {
        printf("%s possui o maior Super Poder.\n", cidade1);
        printf("%s é a cidade vencedora!\n", cidade1);
    } else {
            if (poder1 == poder2) {
                printf("Ambas as cidades possuem o mesmo valor de Super Poder. É um empate!\n");
            } else {
                printf("%s possui o maior Super Poder.\n", cidade2);
                printf("%s é a cidade vencedora!\n", cidade2);
            }

         }
         break;
         default:
         printf("Categoria 2: Escolha inválida!\n");
        }
   

    return 0;
}



    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
