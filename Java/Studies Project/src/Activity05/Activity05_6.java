package Activity05;

public class Activity05_6 {
    /*
    Create a class that stores the 12 months of the year in an array. Then generate a random value between
    0 and 11 and display the month corresponding to the amount drawn.
    Assume that the value 0 corresponds to January and the value 11 to December.
    */
    public static void main (String[] args){
        String[] months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        int i;

        i = (int) (Math.random() * months.length);

        if (i != 0) {
            System.out.println("Number: " + (i - 1));
            System.out.println(months[i - 1]);
        } else {
            System.out.println("Number: " + i);
            System.out.println(months[i]);
        }
    }
}