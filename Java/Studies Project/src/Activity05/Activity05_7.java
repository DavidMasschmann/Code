package Activity05;

public class Activity05_7 {
    /*
    An image is made up of pixels. Consider a 40 x 40 dimension image and make a class that contains a two-dimensional
    array of these dimensions. Next, for each position of this two-dimensional array store a random
    value between 0 and 255 (these values correspond to the shades applied on the image).
    Display on screen the 1600 values generated.
    */
    public static void main(String[] args) {
        int[][] pixel = new int[40][40];
        int random, cont = 0;

        for (int i = 0; i < pixel.length; i++) {
            for (int j = 0; j < pixel.length; j++) {
                random = (int) (Math.random() * 255 + 1);
                pixel[i][j] = random;
                cont++;
            }
        }

        System.out.println("Array of random generated values: ");
        for (int i = 0; i < pixel.length; i++) {
            for (int j = 0; j < pixel.length; j++) {
                System.out.println(pixel[i][j]);
            }
        }
    }
}