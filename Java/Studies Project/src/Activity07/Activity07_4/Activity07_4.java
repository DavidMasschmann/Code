package Activity07.Activity07_4;

public class Activity07_4 {
    /*
    Create a class called Password that contains a method called generate that returns a
    password containing eight numeric characters.
    */
    public static void main(String[] args) {
        for (int i = 0; i < 100; i++)
        System.out.println(String.format("%08d", Password.generate()));
    }
}
