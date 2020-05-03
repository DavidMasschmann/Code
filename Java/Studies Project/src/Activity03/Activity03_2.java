package Activity03;

import java.util.Scanner;

public class Activity03_2 {
    /*
    A pharmacy needs to adjust the prices of its products by 12%.
    Make a class that receives the value of the product and applies the percentage of increase.
    The new value to be calculated must be rounded up or down using the round method.
    The class must also contain a loop that terminates the program when the user provides the value zero
    for the value of the product.
    */
    public static void main(String[] args) {
        double productPrice;

        Scanner scan = new Scanner(System.in);

        System.out.println("Every number you type here will have it's value increased by 12%");

        do {
            System.out.println("Type a number: ");
            productPrice = scan.nextDouble();

            if (productPrice != 0)
                System.out.println("The new value is: " + productPrice * 1.12);
        } while (productPrice != 0);
    }
}