/*
Crie uma classe java que:

-Tenha um atributo String s1 = "IFPR - Campus Foz do Iguaçu - Avenida Araucária, 780, Bairro Vila A - CEP: 85860-000 - Foz do Iguaçu - Paraná - (45)3422-5348";

-Imprima na tela o CEP do campus.

-Imprima na tela o Telefone do campus.

-Converta para inteiro os 4 últimos dígitos do telefone do campus, divida por 2 e imprima na tela.
 */

 public class Exercicio_Ava {
    public static void main(String[] args) {
    String s1, digitos;

    s1 = "IFPR - Campus Foz do Iguaçu - Avenida Araucária, 780, Bairro Vila A - CEP: 85860-000 - Foz do Iguaçu - Paraná - (45)3422-5348";
    int cep = s1.indexOf(":");
    System.out.println("CEP: " + s1.substring(cep + 2, cep + 11));
    int tel = s1.indexOf("(");
    System.out.println("Telefone: (" + s1.substring(tel + 1, s1.length()));

    digitos = s1.substring(tel + 9 , s1.length());

    int i1 = Integer.parseInt(digitos) / 2;


    System.out.println("4 ultimos digitos dividido por 2: " + i1);

    }
 }
