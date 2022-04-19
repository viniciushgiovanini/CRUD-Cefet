#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
  char nome[50];
  char gen[30];
  int anoL;
  char nomeD[30];
  int identificador;
} filmes;

// FUNCOES DE APOIO

void limparMemo(char *str, int tam)
{

  int i = 0;
  for (i = 0; i < tam; i++)
  {
    str[i] = '\0';
  }
}

void iniciarStruct(filmes *f)
{

  int i = 0;

  for (i = 0; i < 40; i++)
  {
    limparMemo(f[i].nome, 50);
    limparMemo(f[i].gen, 30);
    f[i].anoL = 0;
    limparMemo(f[i].nomeD, 30);
    f[i].identificador = 0;
  }
}

bool temElemento(filmes *f, int posi)
{

  bool verificador = false;
  int verificador2 = 0;

  int i = 0;
  for (i = 0; i < 5; i++)
  {
    if (f[posi].nome[i] != '\0')
    {
      verificador2++;
    }
  }

  if (verificador2 != 0)
  {
    verificador = true;
  }

  return verificador;
}

bool procurarID(filmes *f, int id)
{

  bool temaID = false;

  int i = 0;
  for (i = 0; i < 40; i++)
  {
    if (f[i].identificador == id)
    {
      temaID = true;
    }
  }

  return temaID;
}

void tirarbarraN(char *letra)
{

  int i = 0;
  for (i = 0; i < 100; i++)
  {
    if (letra[i] == '\n')
    {
      letra[i] = '\0';
    }
  }
}
//-----------------X-------------//
// FUNCOES PRINCIPAIS

void adicionarFilme(filmes *f)
{

  int contador = 0;

  int i = 0;
  for (i = 0; i < 40; i++)
  {
    bool element = temElemento(f, i);

    if (element == true)
    {
      contador++;
    }
    else
    {
      i = 40;
    }
  }
  int id = 1;
  int idsave = 0;
  int j = 0;
  for (j = 0; j < 40; j++)
  {
    bool verificarsetemaID = procurarID(f, id);

    if (verificarsetemaID == false)

    {
      idsave = id;
      j = 40;
    }

    id++;
  }

  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
  char nomeatu[50];
  char genero[30];
  char nomediretor[30];
  int anoL = 0;
  limparMemo(nomeatu, 50);
  limparMemo(genero, 30);
  limparMemo(nomediretor, 30);
  printf("Inserir o Nome do Filme \n");
  fgets(nomeatu, 49, stdin);
  strcpy(f[contador].nome, nomeatu);
  printf("Inserir o Genero do Filme \n");
  fgets(genero, 29, stdin);
  strcpy(f[contador].gen, genero);
  printf("Inserir Ano de Lancamento do Filme deve ser entre 1900 e 2021\n");
  scanf("%d", &anoL);
  if (anoL >= 1900 && anoL <= 2021)
  {
    f[contador].anoL = anoL;
  }
  else
  {
    printf("Número do Ano não valido !\n");
  }

  printf("Inserir Nome do Diretor do Filme\n");
  int d;
  while ((d = getchar()) != '\n' && d != EOF)
    ;
  fgets(nomediretor, 29, stdin);
  strcpy(f[contador].nomeD, nomediretor);
  f[contador].identificador = idsave;
}

void imprimirFilme(filmes *f)
{

  printf("1 - Todos os Filmes\n2 - Filme especifico\n");
  int menu = 0;
  scanf("%d", &menu);

  if (menu == 1)
  {
    int i = 0;
    for (i = 0; i < 40; i++)
    {

      bool temelemento = temElemento(f, i);

      if (temelemento == true)
      {
        printf("Nome do filme: %s", f[i].nome);
        printf("Genero: %s", f[i].gen);
        printf("Ano de lancamento: %d\n", f[i].anoL);
        printf("Nome do Diretor: %s", f[i].nomeD);
        printf("Indentificador: %d\n", f[i].identificador);
        printf("========X========\n");
      }
    }
  }
  else
  {
    printf("Digite o nome de um filme que deseja procurar\n");
    char n[50];
    limparMemo(n, 50);
    int d;
    while ((d = getchar()) != '\n' && d != EOF)
      ;

    fgets(n, 50, stdin);
    printf("\n");
    // limparFgets(n);

    int pegarposi = 30;

    int j = 0;

    for (j = 0; j < 40; j++)
    {

      if (strcmp(n, f[j].nome) == 0)
      {
        pegarposi = j;
        j = 40;
      }
    }

    bool verificadorelemnt = temElemento(f, pegarposi);

    if (verificadorelemnt == true)
    {
      printf("Nome do filme: %s", f[pegarposi].nome);
      printf("Genero: %s", f[pegarposi].gen);
      printf("Ano de lancamento: %d\n", f[pegarposi].anoL);
      printf("Nome do Diretor: %s", f[pegarposi].nomeD);
      printf("Indentificador: %d\n", f[pegarposi].identificador);
      printf("========X========\n");
    }
    else
    {
      printf("Filme NÃO encontrado\n");
    }
  }

  printf("\n\n");
}

void removerFilme(filmes *f)
{
  printf("Digite o indentificador do filme que deseja ser apagado: \n");

  char n[50];
  limparMemo(n, 50);
  int d;
  while ((d = getchar()) != '\n' && d != EOF)
    ;

  fgets(n, 50, stdin);
  printf("\n");
  // limparFgets(n);

  int pegarposi = 0;

  int j = 0;

  bool teste = false;

  for (j = 0; j < 41; j++)
  {
    if (j == 40)
    {
      teste = true;
    }

    if (strcmp(n, f[j].nome) == 0)
    {
      pegarposi = j;
      j = 42;
    }
  }

  if (teste == false)
  {

    limparMemo(f[pegarposi].nome, 50);
    limparMemo(f[pegarposi].gen, 30);
    f[pegarposi].anoL = 0;
    limparMemo(f[pegarposi].nomeD, 30);
    f[pegarposi].identificador = 0;
  }
  else
  {
    printf("Filme não encontrado, impossivel remover !\n");
  }
}

void alterarDados(filmes *f)
{

  printf("Digite o indentificador do filme que deseja ser alterado: \n");

  char n[50];
  limparMemo(n, 50);
  int d;
  while ((d = getchar()) != '\n' && d != EOF)
    ;

  fgets(n, 50, stdin);
  printf("\n");
  // limparFgets(n);

  int pegarposi = 0;

  int j = 0;

  for (j = 0; j < 40; j++)
  {

    if (strcmp(n, f[j].nome) == 0)
    {
      pegarposi = j;
      j = 40;
    }
  }

  printf("Digite o NOVO nome do Filme \n");
  fgets(f[pegarposi].nome, 50, stdin);
  printf("Digite o NOVO genero \n");
  fgets(f[pegarposi].gen, 30, stdin);
  printf("Digite o NOVO ano de lancamento \n");
  scanf("%d", &f[pegarposi].anoL);
  int t;
  while ((t = getchar()) != '\n' && t != EOF)
    ;
  printf("Digite o NOVO nome do diretor \n");
  fgets(f[pegarposi].nomeD, 30, stdin);
}

void gravarArquivo(filmes *f)
{

  FILE *p;

  p = fopen("filmes.txt", "w+");

  if (p == NULL)
  {
    printf("Arquivo não foi aberto\n");
    return;
  }
  else
  {
    printf("Arquivo Aberto e pronto para gravar\n");
  }

  int i = 0;
  int result;
  for (i = 0; i < 40; i++)
  {
    bool element = temElemento(f, i);

    if (element == true)
    {
      result = fprintf(p, "%s", f[i].nome);
      if (result == EOF)
      {
        printf("Erro na gravação do NOME\n");
      }

      result = fprintf(p, "%s", f[i].gen);

      if (result == EOF)
      {
        printf("Erro na gravação do GENERO\n");
      }

      result = fprintf(p, "%d\n", f[i].anoL);

      if (result == EOF)
      {
        printf("Erro na gravação do ANO DE LANCAMENTO\n");
      }

      result = fprintf(p, "%s", f[i].nomeD);

      if (result == EOF)
      {
        printf("Erro na gravação do NOME DO DIRETOR\n");
      }

      result = fprintf(p, "%d\n", f[i].identificador);

      if (result == EOF)
      {
        printf("Erro na gravação do IDENTIFICADOR\n");
      }
    }
  }

  fclose(p);
}

void lerArquivo(filmes *f)
{
  FILE *p;

  char Linha[100];
  limparMemo(Linha, 100);
  char *result;
  p = fopen("filmes.txt", "r+");

  if (p == NULL)
  {
    printf("Arquivo não foi aberto\n");
    return;
  }
  else
  {
    printf("Arquivo Aberto e pronto para Leitura\n");
  }

  int i = 0;

  for (i = 0; i < 40; i++)
  {

    int j = i;
    int save = i;
    for (j = i; j < i + 5; j++)
    {
      result = fgets(Linha, 100, p);

      if (result)
      {
        if (j == save)
        {
          printf("Nome: %s", Linha);
          strcpy(f[i].nome, Linha);
          limparMemo(Linha, 100);
        }

        if (j == i + 1)
        {
          printf("Genero: %s", Linha);
          strcpy(f[i].gen, Linha);
          limparMemo(Linha, 100);
        }

        if (j == i + 2)
        {
          printf("Ano de Lancamento: %s", Linha);
          tirarbarraN(Linha);
          f[i].anoL = atoi(Linha);
          limparMemo(Linha, 100);
        }

        if (j == i + 3)
        {
          printf("Nome do Diretor: %s", Linha);
          strcpy(f[i].nomeD, Linha);
          limparMemo(Linha, 100);
        }

        if (j == i + 4)
        {
          printf("Identificador: %s", Linha);
          tirarbarraN(Linha);
          f[i].identificador = atoi(Linha);
          limparMemo(Linha, 100);
        }
      }
      else
      {
        j = 50;
        i = 40;
      }
    }
  }

  fclose(p);
}
//-----------------X-------------//
int main()
{
  int menu;

  filmes Sfilmes[40];
  iniciarStruct(Sfilmes);

  int sw = 1;

  while (sw != 0)
  {
    printf("0 - Encerrar o Programa \n1 - Adicionar Filme \n2 - Editar Filme \n3 - Remover Filme \n4 - Imprimir Filme \n5 - Gravar Filmes \n6 - Ler Filmes \n");

    scanf("%d", &menu);

    switch (menu)
    {
    case 0:
      sw = 0;
      break;
    case 1:
      adicionarFilme(Sfilmes);
      break;

    case 2:
      alterarDados(Sfilmes);
      break;

    case 3:
      removerFilme(Sfilmes);
      break;
    case 4:
      imprimirFilme(Sfilmes);
      break;

    case 5:
      gravarArquivo(Sfilmes);
      break;

    case 6:
      lerArquivo(Sfilmes);
      break;

    default:
      printf("\nOpcao nao reconhecida!!");
      break;
    }
  }

  return 0;
}
