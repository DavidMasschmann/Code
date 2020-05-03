package Activity03;

import java.util.Scanner;

public class Activity03_5 {
    /*
    Create a class that receives a sentence and make sure that phrase has inappropriate words.
    The inappropriate words are: sex and sexual.
    If you find one of these words, screen the message “inappropriate content”,
    otherwise “released content”.
    */
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str;

        System.out.println("Type a phrase: ");
        str = scan.nextLine();

        if (str.contains("sex") || str.contains("sexual")) {
            System.out.println("Inappropriate content.");
        } else {
            System.out.println("Released content");
        }
    }
}