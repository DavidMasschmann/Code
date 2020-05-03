package Activity12.Activity12_1;

public class Activity12_1 {
    /*
    Create a class that reads as base information and height of triangles, a class must use methods of
    reading data, displaying information, and a method to calculate its area. Create a class to test.
    */
    public static void main(String[]args){
        Triangle a = new Triangle();

        a.setBase();
        a.setHeight();
        a.getTriangle();
        a.findArea();
        a.getTriangle();
    }
}


