package Activity12.Activity12_1;

import java.util.Scanner;

class Triangle {
    private double base;
    private double height;
    private double area;

    Scanner s = new Scanner(System.in);

    void setBase() {
        System.out.println("Type the base of this triangle:");
        this.base = s.nextDouble();
    }

    void setHeight() {
        System.out.println("Type the height of this triangle:");
        this.height = s.nextDouble();
    }

    void findArea() {
        this.area = (base * height) /2;
    }

    void getTriangle() {
        System.out.println("This triangle height is: " + this.height);
        System.out.println("This triangle base is: " + this.base);
        if (this.area == 0) {
            System.out.println("The area of this triangle haven't been calculated\n");
        } else {
            System.out.println("This triangle area is: " + this.area + "\n");
        }
    }

}