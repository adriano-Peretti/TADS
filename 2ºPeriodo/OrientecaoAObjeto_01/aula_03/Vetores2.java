/*
criar vetor com os nomes dos meses
solicitar ao usuario um numero de mês
mostrar o nome do mês correspondente na tela
*/

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Vetores2 {
    public static void main(String[] args) throws Exception {

        BufferedReader entrada = new BufferedReader(
            new InputStreamReader(System.in)
        );

        //criar vetor com os nomes dos meses
        String[] meses = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

        //solicitar ao usuario um numero de mês
        System.out.println("Digite o numero do mês ou 0 para sair: ");

        String linha = "";

        while (!linha.toUpperCase().equals("0")) {
            linha = entrada.readLine();

            int num = Integer.parseInt(linha);

            if (num > 0 && num <= 12) {
                //mostrar o nome do mês correspondente na tela
                System.out.println("O mês é: " + meses[num  - 1]);
            }
        }
    }
}
