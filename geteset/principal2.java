
//package exercicio2;
import java.util.Scanner;

public class principal2 {

  public static void main(String[] args) {
    // TODO Auto-generated method stub

    String nome;
    int qtdAtual;
    int qtdMinima;

    estoque est = new estoque();
    Scanner sc = new Scanner(System.in);

    System.out.println("Escreva o nome do produto ");
    nome = sc.next();
    System.out.println("Escreva a quantidade minima ");
    qtdMinima = sc.nextInt();
    System.out.println("Escreva a quantidade atual ");
    qtdAtual = sc.nextInt();

    if (qtdAtual >= 0) {
      est.darBaixa(qtdAtual, nome, qtdMinima);

    } else {
      System.out.println("Voce nao pode colocar um  numero negativo de produtos no estoque");
    }
    boolean receber = est.precisaRepor();

    if (receber) {
      System.out.println("O estoque esta precisando de reposi��o");

    } else {
      System.out.println("O estoque nao esta precisando de reposi��o");
    }
    est.mostrar();
    sc.close();
  }

}
