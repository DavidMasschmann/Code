package Activity08;

import java.util.Scanner;

public class Scan {
    private Scanner i = new Scanner(System.in);

    public int nextInt() {
        System.out.println("Type a integer: ");
        return i.nextInt();
    }

    public int nextInt(String message) {
        System.out.println(message);
        return i.nextInt();
    }

    public Double nextDouble() {
        System.out.println("Type a Double: ");
        return i.nextDouble();
    }

    public Double nextDouble(String message) {
        System.out.println(message);
        return i.nextDouble();
    }

    public char nextChar() {
        System.out.println("Type a Char: ");
        return i.next().charAt(0);
    }

    public char nextChar(String message) {
        System.out.println(message);
        return i.next().charAt(0);
    }

    public String nextString() {
        System.out.println("Type a String: ");
        return i.next();
    }

    public String nextString(String message) {
        System.out.println(message);
        return i.next();
    }

    public static String emailIsValid(String email) {
        String regex = "^[\\w-_\\.+]*[\\w-_\\.]\\@([\\w]+\\.)+[\\w]+[\\w]$";
        boolean a = email.matches(regex);
        if (a)
            return email;
        else
            return null;
    }

    public static String phoneIsValid(String phone) {
        String regex = "[0-9]{3}-[0-9]{9}";
        boolean a = phone.matches(regex);
        if (a)
            return phone;
        else
            return null;

    }

    public static String dateIsValid(String date) {
        String regex = "[0-3][1-9]/[0-1][1-9]/[0-9]{4}";
        boolean a = date.matches(regex);
        if (a)
            return date;
        else
            return null;

    }

    public static String dateConvertMMDDYYYY(String dateDDMMYYYY) {
        String p1, p2, p3;
        p1 = dateDDMMYYYY.substring(0, 3);
        p2 = dateDDMMYYYY.substring(3, 6);
        p3 = dateDDMMYYYY.substring(6, 10);
        dateDDMMYYYY = p2 + p1 + p3;

        return dateDDMMYYYY;
    }

    public static boolean isNumeric(String number) {
        String regex = "[0-9]+[,]*[0-9]*";
        boolean a = number.matches(regex);
        if (a)
            return true;
        else
            return false;
    }
}
