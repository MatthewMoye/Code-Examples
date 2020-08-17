public class Loops {
    public static void main(String[] args) {
        for (int i = 1; i < 5; i++) {
            System.out.println("for loop iteration " + i);
        }

        int i = 1;
        while (i < 5) {
            System.out.println("while loop iteration " + i);
            i++;
        }

        i = 1;
        do {
            System.out.println("do while loop iteration " + i);
            i++;
        } while (i < 5);
    }
}