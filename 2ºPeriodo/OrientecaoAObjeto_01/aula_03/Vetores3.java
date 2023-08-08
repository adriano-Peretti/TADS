import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Vetores3 {
    public static void main(String[] args) throws Exception {

        BufferedReader entrada = new BufferedReader(
            new InputStreamReader(System.in)
        );

        int num = -1;

        while (true) {
            System.out.println(
                "Digite o numero do mês ou 0 para sair: ");
            num = Integer.parseInt(entrada.readLine());

            if (num == 0) {
                break;
            }else{
                Meses meses = new Meses();
                String mes = meses.pegarNomeMes(num);
                if (mes.equals("")) {
                    System.out.println("Valor Invalido");
                } else {
                    System.out.println("O mês é: " + mes);
                }
            }
        }
    }
}
