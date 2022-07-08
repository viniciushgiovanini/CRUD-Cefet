import java.util.ArrayList;
import javax.swing.JOptionPane;

public class redesocial extends publicacao {

  private String dataCriacao;
  private String nomeUsuario;
  private String dataNascimento;
  private String senha;
  ArrayList<redesocial> ARpb = new ArrayList<redesocial>();

  public redesocial(String dataCriacao, String nomeUsuario, String dataNascimento, String senha, String dataPublicacao,
      String textoPublicacao, String linkMidia) {
    super(dataPublicacao, textoPublicacao, linkMidia);
    this.dataCriacao = dataCriacao;
    this.nomeUsuario = nomeUsuario;
    this.dataNascimento = dataNascimento;
    this.senha = senha;
  }

  public redesocial() {
    super(null, null, null);
    this.dataCriacao = null;
    this.nomeUsuario = null;
    this.dataNascimento = null;
    this.senha = null;

  }

  // Métodos gets da classe rede social

  public void setDataCriacao(String dataCriacao) {
    this.dataCriacao = dataCriacao;
  }

  public String getDataCriacao() {
    return dataCriacao;
  }

  public void setNomeUsuario(String nomeUsuario) {
    this.nomeUsuario = nomeUsuario;
  }

  public String getNomeUsuario() {
    return nomeUsuario;
  }

  public void setDataNascimento(String dataNascimento) {
    this.dataNascimento = dataNascimento;
  }

  public String getDataNascimento() {
    return dataNascimento;
  }

  public void setSenha(String senha) {
    this.senha = senha;
  }

  public String getSenha() {
    return senha;
  }

  // sets com overider

  @Override
  public void setTextoPublicacao(String textoPublicacao) {
    super.setTextoPublicacao(textoPublicacao);
  }

  @Override
  public void setLinkMidia(String linkMidia) {
    super.setLinkMidia(linkMidia);
  }

  @Override
  public void setDataPublicacao(String dataPublicacao) {
    super.setDataPublicacao(dataPublicacao);
  }

  public void inserePublicacao(redesocial rede) {
    int valorCont = super.getContadorPublicacao();
    ARpb.add(valorCont, rede);
  }

  public void imprimir() {

    for (redesocial cont : ARpb) {

      JOptionPane.showMessageDialog(null, impressaoFormat(cont));
    }

  }

  private String impressaoFormat(redesocial c) {

    return "Usuario: " + c.nomeUsuario + "\n" + "Data Nascimento: " + c.dataNascimento + "\n"
        + "Data Criação Usuario: "
        + c.dataCriacao + "\n" + "Texto: " + c.getTextoPublicacao() + "\n" + "Data Publicação: "
        + c.getDataPublicacao() + "\n" + "Links de Midia: " + c.getLinkMidia();
  }

}
