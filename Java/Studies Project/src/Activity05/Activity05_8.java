package Activity05;

public class Activity05_8 {
    /*
    Make a class containing two integer arrays, one called even and one called odd. Each array must
    contain 10 elements. Then make a 10-iteration loop that contains internally the random generation
    of numbers between 1 and 20. If the generated value is even, store in the array called even,
    otherwise in the array called odd. At the end, present the contents of each of the arrays.
    */
    public static void main(String[] args) {
        int[] even = new int[10];
        int[] odd = new int[10];
        int random;

        for (int i = 0; i < 10; i++) {
            random = (int) (Math.random() * 20 + 1);
            if (random % 2 == 0)
                even[i] = random;
            else
                odd[i] = random;
        }

        System.out.println("Even array: ");
        for (int i = 0; i < even.length; i++)
            System.out.print(even[i] + " ");

        System.out.println("\nOdd array: ");
        for (int i = 0; i < odd.length; i++)
            System.out.print(odd[i] + " ");
    }
}