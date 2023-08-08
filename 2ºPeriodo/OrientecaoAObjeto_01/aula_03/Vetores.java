public class Vetores {
        public static void main(String[] args) {

            //declarando e instanciando
            int[] numeros = new int[5];
            int[] outronumeros = new int[4];

            //Declarando e informando a qtde de elementos (instanciando)
            //Pode ser assim:
            //Sintaxe: <tipo> vetor[] = new <tipo>[tamanho];
            int vetor1[] = new int[3];
            //ou assim:
            //Sintaxe: <tipo> vetor = new <tipo>[tamanho];
            int[] vetor2 = new int[3];

            //-------------------------------------------//
            //Declarando e atribuindo valores
            int[] vetor3 = new int[]{3,5,7};
            //Declarando e atribuindo valores de forma compacta
            int[] vetor4 = {3,5,7};
            String vetor5[]= {"A","BBBB","Teste"};
            String vetor6[] = new String[4];
            vetor6[0] = "ASD";

            //Percorrendo vetores
            String[] itens = {"A","B","C","D","E",};
            //Iterar usando for
            for (int i = 0; i < itens.length; i++) {
                System.out.println(itens[i]);
            }
            //foreach
            for (String item : itens) {
                System.out.println(item);
            }
        }
}
