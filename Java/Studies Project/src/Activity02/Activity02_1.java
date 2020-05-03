package Activity02;

import java.util.Scanner;

public class Activity02_1 {
    public static void main(String[] args) {
        double productPrice;
        double discount;
        double finalDiscount;

        Scanner scan = new Scanner(System.in);

        System.out.println("Type the product price: ");
        productPrice = scan.nextDouble();
        System.out.println("Type the discount amount in percentage: ");
        discount = scan.nextDouble();

        finalDiscount = productPrice * (discount / 100);

        System.out.println(finalDiscount);
        System.out.println("The price with the discount is: " + (productPrice - finalDiscount));
    }
}
