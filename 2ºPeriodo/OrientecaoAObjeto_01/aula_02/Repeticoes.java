public class Repeticoes {
    public static void main(String[] args) {
        int qtde = 5;

        // para - for
        System.out.println("Repetição do tipo for: ");
        for (int i = 0; i < qtde; i++) {
            System.out.println(i);
        } // para decrementar (int i =10; i > qtde; i--);

        // enquanto - while
        System.out.println("Repetição do tipo while: ");
        int cont = 0;
        while (cont <= qtde) {
            System.out.println(cont);
            cont++;
        }

        // faça enquanto - Do while
        System.out.println("Repetição do tipo do-while: ");
        cont = 0;
        do {
            System.out.println(cont);
            cont++;
        } while (cont <= qtde);
    }
}
