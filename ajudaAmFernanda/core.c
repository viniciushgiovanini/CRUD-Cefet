#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
  char marca[15];
  int year;
  char color[10];
  float preco;
} Carro;

void atv4(Carro *vCar, char *marca, int ano, char *cor, int qtdCarros)
{
  bool isCarro = false;

  for (int i = 0; i < qtdCarros; i++)
  {

    if ((strcmp(vCar[i].marca, marca) == 0) && (vCar[i].year == ano) && (strcmp(vCar[i].color, cor) == 0))
    {
      printf("\n----X----\n");
      printf("(CARRO ENCONTRADO) - O preco do Carro pesquisado e: %.2f\n", i + 1, vCar[i].preco);
      printf("\n----X----\n");
      isCarro = true;
    }
  }

  if (!isCarro)
  {
    printf("Carro nao encontrado \n");
  }
}

void atv3(Carro *vCar, char *marcaRecebida, int qtdCarros)
{
  for (int i = 0; i < qtdCarros; i++)
  {
    if (strcmp(vCar[i].marca, marcaRecebida) == 0)
    {
      printf("Marca do Carro %d:  %s\n", i + 1, vCar[i].marca);
      printf("Ano do Carro %d: %d\n", i + 1, vCar[i].year);
      printf("Cor do Carro %d: %s\n", i + 1, vCar[i].color);
      printf("\n----X----\n");
    }
  }
}

void atv21(Carro *vCar, float precoRecebido, int qtdCarros)
{
  for (int i = 0; i < qtdCarros; i++)
  {
    if (vCar[i].preco <= precoRecebido)
    {
      printf("Marca do Carro %d:  %s\n", i + 1, vCar[i].marca);
      printf("Ano do Carro %d: %d\n", i + 1, vCar[i].year);
      printf("Cor do Carro %d: %s\n", i + 1, vCar[i].color);
      printf("Preco do Carro %d: %.2f\n", i + 1, vCar[i].preco);
      printf("\n----X----\n");
    }
  }
}

void atv2(Carro *vCar, int qtdS)
{

  for (int i = 0; i < qtdS; i++)
  {
    printf("Digite a Marca do Carro: \n");
    scanf("%s", &vCar[i].marca);
    printf("Digite o Ano do Carro: \n");
    scanf("%d", &vCar[i].year);
    printf("Digite a Cor do Carro: \n");
    scanf("%s", &vCar[i].color);
    printf("Digite Preço do Carro: \n");
    scanf("%f", &vCar[i].preco);
    printf("\n----X----\n");
  }
}

void atv1(int *n)
{
  int rPoint = *n;
  int rest = rPoint % 2;
  int resp = 0;
  for (int i = 2; i <= rPoint / 2; i++)
  {
    if (rPoint % i == 0)
    {
      resp++;
      i = 10000;
    }
  }

  if (resp == 0 && (*n != 0) && (*n != 1))
  {
    *n = 0;
  }
  else
  {
    *n = -1;
  }
}

void main()
{

  printf("0 - Encerrar Programa | 1 - Ativdade 1 | 2 - Atividade 2 | 3 - Atividade 3 | 4 - Atividade 4 | 5 - Atividade 5\n");
  int valor = 0;
  int max = 0;
  int min = 0;
  int n = 0;
  int qtdCarros = 0;
  Carro *a;
  scanf("%d", &valor);
  bool loop = true;
  while (loop)
  {
    switch (valor)
    {
    case 0:

      printf("Encerrando o programa !");
      return;
      break;

    case 1:
      printf("Digite o valor de N: ");
      scanf("%d", &n);
      atv1(&n);

      if (n == 0)
      {
        printf("E primo\n");
      }
      else
      {
        printf("Nao e primo\n");
      }
      break;

    case 2:
      printf("Digite quantos carros devem ser criados: ");
      qtdCarros = 0;
      scanf("%d", &qtdCarros);
      a = (Carro *)malloc(sizeof(Carro));
      atv2(a, qtdCarros);

      printf("Digite o preço do Carro a ser mostrado (Para pular digite -1): ");
      float pCarro;
      scanf("%f", &pCarro);
      atv21(a, pCarro, qtdCarros);

      break;

    case 3:
      printf("Digite a marca do Carro a ser mostrado: ");
      char mCarro[15];
      scanf("%s", &mCarro);
      atv3(a, mCarro, qtdCarros);
      break;

    case 4:
      printf("Digite a marca do Carro a ser mostrado: ");
      char mCarro2[15];
      scanf("%s", &mCarro2);
      printf("Digite o ano do Carro a ser mostrado: ");
      int year;
      scanf("%d", &year);
      printf("Digite a cor do Carro a ser mostrado: ");
      char mColor[10];
      scanf("%s", &mColor);

      atv4(a, mCarro2, year, mColor, qtdCarros);

      break;

    case 5:
      /* Atividade 1 */
      break;

    default:
      printf("Valor invalido!\n");
      break;
    }

    printf("0 - Encerrar Programa | 1 - Ativdade 1 | 2 - Atividade 2 | 3 - Atividade 3 | 4 - Atividade 4 | 5 - Atividade 5\n");
    scanf("%d", &valor);
  }
  free(a);
  return;
}