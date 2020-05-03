package Activity07.Activity07_1;

public class Month {
    private static String[] monthsPT_BR = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho",
            "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    private static String[] monthsEN_US = {"January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"};

    public static String getWrittenMonth(int month, int languageCode) {
        if (languageCode == 1) {
            return monthsPT_BR[month-1];
        } else {
            return monthsEN_US[month-1];
        }
    }
}
