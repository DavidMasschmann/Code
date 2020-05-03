package Activity03;

public class Activity03_1 {
    /*
    Create a class that simulates rolling six-sided dice (numbers 1 through 6) three times.
    At the end add your values and present the result of the three plays.
    */
    public static void main(String[] args) {
        int dice1 = (int) (1 + (Math.random() * 6));
        int dice2 = (int) (1 + (Math.random() * 6));
        int dice3 = (int) (1 + (Math.random() * 6));

        int som = dice1 + dice2 + dice3;

        System.out.println("You rolled 3 dice, these are your values:\n" +
                "Dice 1: " + dice1);
        System.out.println("Dice 2: " + dice2);
        System.out.println("Dice 3: " + dice3);
        System.out.println("The sum of the 3 dice is: " + som);
    }
}
