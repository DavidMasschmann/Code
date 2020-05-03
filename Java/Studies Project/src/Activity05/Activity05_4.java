package Activity05;

import java.util.Scanner;

public class Activity05_4 {
    /*
    Write a program that creates a String and uses a for loop to verify that it is a palindrome,
    that is, if you reverse the order of the String characters, you get the same String.
    For example, “abcdcba” is a palindrome.
    */
    public static void main(String[] args) {
        String str;
        String reverse = "";

        Scanner scan = new Scanner(System.in);


        System.out.println("Type something: ");
        str = scan.nextLine();

        for (int i = str.length() - 1; i >= 0; i--) {
            reverse = reverse + str.charAt(i);
        }

        if (str.equals(reverse)) {
            System.out.println("In fact, it is a palindrome. \nLook:" +
                    "\n Original: " + str + "\n Reversed: " + reverse);
        } else {
            System.out.println("Its not a palindrome");
        }
    }
}
