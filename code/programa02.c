#include <stdio.h>
#include <math.h>

int valorAbsolutomedia()
{
  int n1 = 0;
  int n2 = 0;
  int n3 = 0;
  printf("Digite o primeiro número \n");
  scanf("%d", &n1);
  printf("Digite o segundo número \n");
  scanf("%d", &n2);
  printf("Digite o terceiro número \n");
  scanf("%d", &n3);

  int media = 0;

  media = (n1 + n2 + n3) / 3;

  int a1 = 0;
  int a2 = 0;
  int a3 = 0;

  a1 = media - n1;
  a2 = media - n2;
  a3 = media - n3;

  if (a1 < 0)
  {
    a1 = a1 * -1;
  }

  if (a2 < 0)
  {
    a2 = a2 * -1;
  }

  if (a3 < 0)
  {
    a3 = a3 * -1;
  }

  int respfinal = (a1 + a2 + a3) / 3;

  return respfinal;
}

float triploExponencial()
{
  printf("Insira o número na qual vai ser o X pra ser elevado 3(e^x)\n");
  float numero = 0.0;
  float resp = 0.0;
  float euler = 2.71828;
  scanf("%e", &numero);

  resp = pow(euler, numero);
  resp = 3.0 * resp;

  return resp;
}

int calcularRaizquadrada()
{
  int numero = 0;
  int resposta = 0;
  printf("Insira o numero desejado\n");
  scanf("%d", &numero);

  if (numero % 2 == 0)
  {
    resposta = sqrt(numero);
  }
  else
  {
    resposta = pow(numero, 2);
  }

  return resposta;
}

int calcularSoma()
{

  int primeironumero = 0;
  int segundonumero = 0;
  printf("Insirir o valor do primeiro número (X): \n");
  scanf("%d", &primeironumero);
  printf("Insirir o valor do segundo número (Y): \n");
  scanf("%d", &segundonumero);

  int soma = primeironumero + segundonumero;
  int resp = 0;
  if (soma % 2 == 0)
  {
    resp = pow(primeironumero, segundonumero);
  }
  else
  {
    resp = pow(segundonumero, primeironumero);
  }

  return resp;
}

int main()
{
  printf("Digite o programa desejado \n 1 - Calcular o valor absoluto da média entre 3 números. \n 2 - Calcula o triplo da exponencial de um número. \n 3 - Calcula a Raiz quadrada de um número, caso seja par ou eleva o número ao quadrado caso seja ímpar \n 4 - Calcular o resultado de x elevado a y se a soma de x e y for par ou y elevado x, caso contrário.\n ");
  int valorinicial = 0;
  scanf("%d", &valorinicial);
  int resposta = 0;

  switch (valorinicial)
  {
  case 1:
    printf("Calcular o valor absoluto da média entre 3 números\n");
    resposta = valorAbsolutomedia();
    printf("Média Absoluta é %d\n", resposta);
    break;
  case 2:
    printf("Calcular o triplo da exponencial de um número (3e^x).\n");
    float resposta2 = triploExponencial();
    printf("Triplo da exponencial: %.4f\n", resposta2);
    break;

  case 3:
    printf("Calcula a Raiz quadrada de um número, caso seja par ou eleva o número ao quadrado caso seja ímpar\n");
    resposta = calcularRaizquadrada();
    printf("Respotas da questão 3: (%d)\n", resposta);
    break;

  case 4:
    printf("Calcula o resultado de x elevado a y se a soma de x e y for par ou y elevado x, caso contrário");
    resposta = calcularSoma();
    printf("Resultado da questão 4: (%d)\n", resposta);
    break;

  default:
    printf("Valor Invalido");
    break;
  }

  return 0;
}
