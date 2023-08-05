public class ExemploInteger {
    public static void main(String[] args){
        String s1 = "10";
        System.out.println("s1 vale" + s1);
        //converter de String para int
        int i1 = Integer.parseInt(s1);
        System.out.println("i1 vale" + i1);

        Integer i2 = 2;
        s1 = i2.toString(); // de int para String
        String s2 = Integer.toString(i1);
        System.out.println("s2 vale: " + s2);

        //converter para float
        float f1 = i2.floatValue();
        System.out.println("f1 vale: " + f1);




    }
}
