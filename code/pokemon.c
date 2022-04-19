#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct caracteristicas
{

  char nome[20];
  float altura;
  float peso;
  int HP;
};

void adicionaPokemon();
void verDados();
void divisao();

int main()
{

  char tipo;
  float vetpeso[100];
  float vetaltura[100];
  int vethp[100];

  // iniciarVet(vethp);
  // iniciarVet(vetaltura);
  // iniciarVet(vetpeso);

  printf("Selecione a opcao desejada :\n\n");
  printf("1) Adicionar Pokemons.\n");
  printf("2) Ver dados de Pokemons.\n");
  printf("3) Ver Pokemon com maior peso, altura e HP.\n");

  scanf("\n\n%c", &tipo);

  switch (tipo)
  {
  case '1':
    adicionaPokemon(vethp);
    break;
  case '2':
    verDados();
    break;
  case '3':
    divisao();
    break;
  default:
    printf("\nOpcao nao reconhecida!!");
  }
  return 0;
}

void adicionaPokemon(int *vethp)
{
  int tam;
  printf("Digite quantos pokemons dejeja adicionar:\n");
  scanf("%d", &tam);

  struct caracteristicas pokemon[tam];
  FILE *arquivo = fopen("pokemon.txt", "a");
  int i;

  for (i = 0; i < tam; i++)
  {

    printf("Digite o nome do %d pokemon: \n", i + 1);
    scanf("%s", &pokemon[i].nome);
    printf("Digite o peso do %d pokemon:  \n", i + 1);
    scanf("%f", &pokemon[i].peso);
    printf("Digite a altura do %d pokemon:  \n", i + 1);
    scanf("%f", &pokemon[i].altura);
    printf("Digite o HP do %d pokemon:  \n", i + 1);
    scanf("%d", &pokemon[i].HP);
    // vethp[i] = pokemon->HP;
    printf("\n");
  }

  for (i = 0; i < tam; i++)
  {

    fprintf(arquivo, "%s\t%.2lf\t%.2lf\t%d\n", pokemon[i].nome, pokemon[i].peso, pokemon[i].altura, pokemon[i].HP);
  }

  fclose(arquivo);

  int decisao;

  printf("\nDeseja realisar mais alguma pesquisa? (1 = sim ,2 = nao): ");
  scanf("%d", &decisao);

  if (decisao == 1)
  {
    main();
  }
  else
  {
    printf("\n");
  }
}

void verDados()
{

  FILE *arquivo;
  arquivo = fopen("pokemon.txt", "r");

  if (arquivo == NULL)
  {

    printf("Arquivo não pode ser aberto\n");
  }
  else
  {

    char dados[100];

    while (fgets(dados, 100, arquivo) != NULL)
    { // função fgets = usa como parametro o vetor, seu tamanho e um arquivo
      printf("%s", dados);
    }

    fclose(arquivo);
  }

  int decisao;

  printf("\nDeseja realisar mais alguma pesquisa? (1 = sim ,2 = nao): ");
  scanf("%d", &decisao);

  if (decisao == 1)
  {
    main();
  }
  else
  {
    printf("\n");
  }
}

void divisao()
{

  FILE *arquivo = fopen("pokemon.txt", "r");

  struct caracteristicas pokemon[50];

  int contador = 0;
  char str[500];

  while (fgets(str, 100, arquivo) != NULL)
  { // função fgets = usa como parametro o vetor, seu tamanho e um arquivo
  }
}

// funcoes apoio
