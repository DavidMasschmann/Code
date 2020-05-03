package Activity12.Activity12_3;

import java.util.Scanner;

public class Hours {
    private int hour;
    private int minute;
    private int second;

    Scanner a = new Scanner(System.in);

    void validateHour () {
        System.out.println("Enter the time you wanna assign to this object: \nEx: 10:50:32");

        String fullHour = a.nextLine();
        int hour = Integer.parseInt(fullHour.substring(0, 2));
        int minute = Integer.parseInt(fullHour.substring(3, 5));
        int second = Integer.parseInt(fullHour.substring(6, 8));

        if ((hour >= 00 && hour < 24) && (minute >= 0 && minute < 60 ) && (second >= 0 && second < 60)) {
            System.out.println(hour + ":" + minute + ":" + second + " Assigned with success!");
            this.hour = hour;
            this.minute = minute;
            this.second = second;
        } else {
            System.out.println("Invalid time!");
        }
    }
}