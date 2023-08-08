public class Meses {
    String[] nomesMeses;

    /*
        Método construtor
        Executado automaticamente sempre que cria um objeto da classe
        Não tem tipo de retorno
        Mesmo nome da Classe
    */
    public Meses(){
        atribuirValores();
    }

    private void atribuirValores(){
        nomesMeses = new String[]{
        "Janeiro",
        "Fevereiro",
        "Março",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro"
        };
    }

    public String pegarNomeMes(int num){
        if(num < 1 || num > 12){
            return "";
        }else{
            return nomesMeses[num - 1];
        }
    }

}
