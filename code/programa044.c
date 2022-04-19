#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somarVet(int *vetor, int tamanhodovetor)
{

  int soma = 0;
  int respostadasoma = 0;
  int i = 0;
  for (i = 0; i < tamanhodovetor; i++)
  {
    soma = vetor[i];
    if (soma % 2 == 0)
    {
      respostadasoma += soma;
    }
  }

  return respostadasoma;
}

int main()
{
  int tamanhovetor = 0;
  int *vet;

  printf("Insira o tamanho do vetor desejado: \n");
  scanf("%d", &tamanhovetor);

  vet = (int *)calloc(tamanhovetor, sizeof(int));

  printf("Inserir os numeros no vetor de tamanho (%d) \n", tamanhovetor);
  for (int i = 0; i < tamanhovetor; i++)
  {
    scanf("%d", &vet[i]);
  }

  int resposta = somarVet(vet, tamanhovetor);

  printf("A soma dos numeros pares é: (%d)", resposta);

  return 0;
}
