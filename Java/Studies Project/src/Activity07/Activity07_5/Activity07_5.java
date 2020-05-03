package Activity07.Activity07_5;

import java.util.Arrays;

public class Activity07_5 {
    /*
    Write a class called “MyArray” containing two methods that perform array operations,
    as described below. Also make another class to test the methods:

        a. A method that takes two integer arrays and an integer. Check whether this integer exists
        in both arrays and a return as described below: If the number is not found in either array,
        return 0; if found in one of the arrays, return 1; and if it is located in both arrays,
        return 2.

        b. A method that takes an integer value (n) and returns an array containing n randomly
        generated integers. The generated values must be between 0 and 1000.
    */
    public static void main(String[] args) {
        int[] array1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int[] array2 = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

        System.out.println(MyArray.find(array1, array2, 3));
        System.out.println(Arrays.toString(MyArray.create(5)));

    }
}
