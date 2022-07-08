
import java.text.*;
import java.util.*;

import javax.swing.JOptionPane;

public class Main {

  private static int ehNumero(String n) {
    char letra = n.charAt(0);
    int num = (int) letra;

    if (!(num >= 48 && num <= 57)) {
      num = -1;
    } else {
      num = Integer.parseInt(n);
    }
    return num;
  }

  private static redesocial realizarPubli(Scanner sc) {

    redesocial rd = new redesocial();
    GregorianCalendar g = new GregorianCalendar();
    DateFormat dateFormat = new SimpleDateFormat("dd-mm-yyyy hh:mm:ss");

    // String nomeUS = JOptionPane.showInputDialog("Insira nome do Usuário");
    // String dataNascimento = JOptionPane.showInputDialog("Insira data de
    // Nascimento do Us");
    // String dataCriacao = dateFormat.format(g.getTime());
    // String texto = JOptionPane.showInputDialog("Insira o texto da publi");
    // String dataPubli = dateFormat.format(g.getTime());
    // String linkMidia = JOptionPane.showInputDialog("Insira link de Midia");
    System.out.println("Insira nome !");
    String nomeUS = sc.nextLine();
    rd.setNomeUsuario(nomeUS);
    System.out.println("Insira data de Nascimento do US !");
    String dataNascimento = sc.nextLine();
    rd.setDataNascimento(dataNascimento);
    String dataCriacao = dateFormat.format(g.getTime());
    rd.setDataCriacao(dataCriacao);
    System.out.println("Insira texto da publicação !");
    String texto = sc.nextLine();
    rd.setTextoPublicacao(texto);
    String dataPubli = dateFormat.format(g.getTime());
    rd.setDataPublicacao(dataPubli);
    System.out.println("Insira link de midia !");
    String linkMidia = sc.nextLine();
    rd.setLinkMidia(linkMidia);

    return rd;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    boolean swC = true;
    redesocial rede = new redesocial();

    while (swC) {

      // String valor = JOptionPane.showInputDialog("0 - Encerrar programa ! 1 -
      // Realizar Publicação");

      System.out.println("0 - Encerrar programa | 1 - Realizar Publicação | 2 - Imprimir Lista");
      String valor = sc.nextLine();

      int valorNum = ehNumero(valor);

      switch (valorNum) {
        case 0:
          swC = false;
          System.out.println("Encerrando programa...");
          break;
        case 1:
          rede.inserePublicacao(realizarPubli(sc));
          break;
        case 2:
          rede.imprimir();
          break;

        default:
          System.out.println("Valor invalido !!!");
          break;
      }

    }

  }
}