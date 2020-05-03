package Activity07.Activity07_5;

class MyArray {
    static int find(int[] array1, int[] array2, int search) {
        int i = 0;

        for (int j = 0; j < array1.length-1; j++) {
            if (array1[j] == search) {
                i++;
            }
        }

        for (int j = 0; j < array2.length-1; j++) {
            if (array2[j] == search) {
                i++;
            }
        }
        return i;
    }

    public static int[] create(int arrayLength) {
        int[] i = new int[arrayLength];
        for (int j = 0; j < arrayLength; j++){
            i[j] = (int) (Math.random() *1000);
        }
        return i;
    }
}
