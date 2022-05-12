
import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Estoque est = new Estoque();
    Scanner receba = new Scanner(System.in);
    System.out.println("Quantidade Minima !");
    int receberQtdMinima = receba.nextInt();
    System.out.println("Escreve o nome do Produto !");
    String nomeP = receba.next();
    System.out.println("Atualize quantidade do Produto !");
    int receberQtdProduto = receba.nextInt();
    est.darBaixa(receberQtdProduto, nomeP, receberQtdMinima);
    boolean reposicao = est.precisaRepor();

    if (reposicao) {
      System.out.println("Precisa de reposição");
    } else {
      System.out.println("Não precisa de reposição");
    }

    est.mostrar();
    receba.close();
  }

}

class Estoque {
  private String nome;
  private int qtdAtual;
  private int qtdMinima;

  public Estoque() {
    qtdAtual = 0;
    qtdMinima = 0;
    nome = null;
  }

  public String getNome() {
    return nome;
  }

  public int getQtdAtual() {
    return qtdAtual;
  }

  public int getQtdMinima() {
    return qtdMinima;
  }

  private void setNome(String nome) {
    this.nome = nome;
  }

  private void setQtdAtual(int qtdAtual) {
    this.qtdAtual = qtdAtual;
  }

  private void setQtdMinima(int qtdMinima) {
    this.qtdMinima = qtdMinima;
  }

  public void darBaixa(int qtdAtual, String receberNome, int qtdMinima) {

    setNome(receberNome);
    setQtdAtual(qtdAtual);
    setQtdMinima(qtdMinima);

  }

  public boolean precisaRepor() {

    boolean resp = false;

    int qtdAtual = getQtdAtual();
    int qtdMinima = getQtdMinima();
    int resposta = qtdAtual - qtdMinima;

    if (resposta <= 0) {

      resp = true;

    }

    return resp;
  }

  public void mostrar() {

    System.out.println("Nome do Produto: " + getNome() + "\n" + "Quantidade do Produto: " + "\n" + getQtdAtual()
        + "Quantidade Mínima do Produto: " + getQtdMinima());

  }

}
