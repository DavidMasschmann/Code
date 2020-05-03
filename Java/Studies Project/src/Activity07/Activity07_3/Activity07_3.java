package Activity07.Activity07_3;

import java.util.Scanner;

public class Activity07_3 {
    /*
    Create a class called Data that contains the getDia, getMes, and getAno methods.
    These methods are given a text date in the standard “dd/mm/yyyy” and return
    an integer corresponding to the day, month, and year on the given date.
    If the date sent is non-standard, the methods must return the value zero.
    */
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Type the date on the following format (dd/mm/yyyy): ");
        String date = scan.next();

        System.out.println(Date.getDay(date));
        System.out.println(Date.getMonth(date));
        System.out.println(Date.getYear(date));
    }
}
