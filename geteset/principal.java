import java.util.Scanner;

public class principal {

  public static void main(String[] args) {

    tv televisao = new tv(); // chamando a classe tv
    Scanner sc = new Scanner(System.in);

    System.out.print("Escreva o tamanho da Tv: ");
    int recebertamanhoTv = sc.nextInt();
    System.out.println();

    System.out.print("Escreva o canal da Tv: ");
    int recebercanalTv = sc.nextInt();
    System.out.println();

    System.out.print("Escreva o volume da Tv: ");
    int recebervolumeTv = sc.nextInt();
    System.out.println();

    System.out.print("Escreva se esta ligada(true) ou desligada(false): ");
    boolean estadoTv = sc.nextBoolean();
    System.out.println();

    televisao.setTamanho(recebertamanhoTv);
    televisao.setCanal(recebercanalTv);
    televisao.setVolume(recebervolumeTv);
    televisao.setLigada(estadoTv);

    System.out.println("Tamanho da Tv: " + televisao.getTamanho());
    System.out.println("Canal da Tv: " + televisao.getCanal());
    System.out.println("Volume da Tv: " + televisao.getVolume());
    System.out.println("Estado da Tv: " + televisao.getLigada());

    sc.close();

  }
}
