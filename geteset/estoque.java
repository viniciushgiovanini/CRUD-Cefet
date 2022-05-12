//package exercicio2;

public class estoque {

  private String nome;
  private int qtdAtual;
  private int qtdMinima;

  public estoque() {

    nome = null;
    qtdAtual = 0;
    qtdMinima = 0;

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

  public void darBaixa(int quantidade, String nome, int QtdMinima) {
    setQtdAtual(quantidade);
    setQtdMinima(QtdMinima);
    setNome(nome);

  }

  public void mostrar() {
    System.out.println("Nome do produto: " + getNome() + "\n Quantidade atual: " + getQtdAtual()
        + "\n Quantidade M�nima: " + getQtdMinima());
  }

  public boolean precisaRepor() {
    boolean r = true;
    if (getQtdAtual() <= getQtdMinima()) {
      r = false;
    }
    return r;
  }
}
