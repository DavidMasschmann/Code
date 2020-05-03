package Activity03;

public class Activity03_6 {
    /*
    Create a class that displays the substring of a PHASE string
    composed of all PHRASE characters except the last character.
    */
    public static void main(String[] args) {
        String str = "Hello World";

        System.out.println(str.substring(0, str.length() - 1));
    }
}