package Activity03;

import java.util.Arrays;

public class Activity03_3 {
    /*
    Create a class that generates a random number (between 5 and 10) using the Math.random class.
    Then make a numeric password appear on the screen containing the same number of digits
    corresponding to the random value generated. Display the number drawn and the password on screen.
    */
    public static void main(String[] args) {
        int num = (int) (5 + (Math.random() * 5));
        int[] password = new int[num];

        System.out.println(num);

        for (int i = 0; i < num; i++) {
            password[i] = (int) (Math.random() * 10);
        }
        System.out.println("Password:");
        System.out.println(Arrays.toString(password));
    }
}