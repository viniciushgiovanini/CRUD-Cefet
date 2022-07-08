public class publicacao {

  private String dataPublicacao;
  private String textoPublicacao;
  private String linkMidia;
  private static int contadorPublicacao = 0;

  public publicacao(String dataPublicacao, String textoPublicacao, String linkMidia) {
    this.dataPublicacao = dataPublicacao;
    this.textoPublicacao = textoPublicacao;
    this.linkMidia = linkMidia;
  }

  public publicacao() {
    this.dataPublicacao = "Sem data de Publicação";
    this.textoPublicacao = "Nenhum Texto Inserido";
    this.linkMidia = "Nenhum Link Inserido";
  }

  public void setTextoPublicacao(String textoPublicacao) {
    this.textoPublicacao = textoPublicacao;
  }

  public void setLinkMidia(String linkMidia) {
    this.linkMidia = linkMidia;
  }

  public void setDataPublicacao(String dataPublicacao) {
    this.dataPublicacao = dataPublicacao;
  }

  public String getDataPublicacao() {
    return dataPublicacao;
  }

  public String getTextoPublicacao() {
    return textoPublicacao;
  }

  public String getLinkMidia() {
    return linkMidia;
  }

  public static int getContadorPublicacao() {
    return contadorPublicacao++;
  }

}
