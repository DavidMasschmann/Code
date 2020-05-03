package Activity07.Activity07_3;

class Date {
    static int getDay(String data) {
        if (Integer.valueOf(data.substring(2, 4)) == 02 && Integer.valueOf(data.substring(0, 2)) > 28)
            return 0;
        else if (Integer.valueOf(data.substring(2, 4)) % 2 == 0 && Integer.valueOf(data.substring(0, 2)) > 30)
            return 0;
        else if (Integer.valueOf(data.substring(2, 4)) % 2 == 1 && Integer.valueOf(data.substring(0, 2)) > 31)
            return 0;
        else return Integer.valueOf(data.substring(0, 2));
    }

    static int getMonth(String data) {
        if (Integer.valueOf(data.substring(2, 4)) > 12 || Integer.valueOf(data.substring(2, 4)) < 1)
            return 0;
        return Integer.valueOf(data.substring(2, 4));
    }

    static int getYear(String data) {
        return Integer.valueOf(data.substring(4, 8));
    }
}
