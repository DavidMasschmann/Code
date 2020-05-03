package Activity05;

import java.util.Scanner;

public class Activity05_5 {
    /*
    Design a class that receives 5 student grades through, store these grades in a five-element array,
    display the five grades in descending order (highest to lowest) and the
    arithmetic average of the grades.
    */
    public static void main(String[] args) {
        double[] grades = new double[5];
        double average = 0, som = 0, cont = 0, aux;
        Scanner scan = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            System.out.print("Type a student grade: ");
            grades[i] = scan.nextDouble();
            cont++;
            som = som + grades[i];
        }

        for (int i = 0; i < grades.length; i++) {
            for (int x = 0; x < grades.length; x++) {
                if (grades[x] < grades[i]) {
                    aux = grades[i];
                    grades[i] = grades[x];
                    grades[x] = aux;
                }
            }
        }

        System.out.println("Vector in descending order:");
        for (int i = 0; i < 5; i++)
            System.out.println(Math.round(grades[i]));

        average = som / cont;
        System.out.println("Average: " + average);
    }
}

