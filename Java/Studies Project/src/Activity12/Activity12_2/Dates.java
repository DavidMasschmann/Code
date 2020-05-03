package Activity12.Activity12_2;

import java.util.Scanner;

public class Dates {
    private static int day;
    private static int month;
    private static int year;

    private static Scanner s = new Scanner(System.in);

    void setDate() {
        System.out.println("Type the year desired: ");
        this.year = s.nextInt();

        do {
            System.out.println("Type the month desired: ");
            int month = s.nextInt();

            if (month < 1 || month > 12) {
                System.out.println("Invalid month! Try again.");
            } else {
                this.month = month;
            }
        } while (month < 1 || month > 12);

        boolean isValid = false; //Used on the verification bellow

        do {
            System.out.println("Type the day desired: ");
            int day = s.nextInt();

            if ((day >= 1 && day <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
                this.day = day;
                isValid = true;
            } else if ((day >= 1 && day <= 30) && (month == 4 || month == 6 || month == 9 || month == 11)) {
                this.day = day;
                isValid = true;
            } else if ((day >= 1 && day <= 28) && (month == 2)) {
                this.day = day;
                isValid = true;
            } else if (day == 29 && month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
                this.day = day;
                isValid = true;
            } else
                System.out.println("Invalid day! Try again.");
        } while (!isValid);
    }

    public static String dataValidation() {
        System.out.println("Type the year desired: ");
        int year = s.nextInt();

        do {
            System.out.println("Type the month desired: ");
            month = s.nextInt();

            if (month < 1 || month > 12) {
                System.out.println("Invalid month! Try again.");
            } else {
                month = month;
            }
        } while (month < 1 || month > 12);

        boolean isValid = false; //Used on the verification bellow

        do {
            System.out.println("Type the day desired: ");
            day = s.nextInt();

            if ((day >= 1 && day <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
                day = day;
                isValid = true;
            } else if ((day >= 1 && day <= 30) && (month == 4 || month == 6 || month == 9 || month == 11)) {
                day = day;
                isValid = true;
            } else if ((day >= 1 && day <= 28) && (month == 2)) {
                day = day;
                isValid = true;
            } else if (day == 29 && month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
                day = day;
                isValid = true;
            } else
                System.out.println("Invalid day! Try again.");
        } while (!isValid);
        return day + "/" + month + "/" + year;
    }
}
