package Activity05;

public class Activity05_1 {
    /*
    Write a program that creates an integer array and uses a loop to create a new String that
    displays or data array contents enclosed in braces and separated by commas.
    */
    public static void main(String[] args) {
        int[] data = new int[] {3, 4, 1, 5};

        System.out.print("{");
        for (int i = 0; i < 4; i++) {
            if (i < 3) {
                System.out.print(data[i] + ", ");
            } else {
                System.out.print(data[i]);
            }
        }
        System.out.println("}");

    }
}
