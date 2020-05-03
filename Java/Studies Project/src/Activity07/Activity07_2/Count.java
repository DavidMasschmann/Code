package Activity07.Activity07_2;

class Count {
    static void count() {
        for (int i = 0; i < 10; i++) {
            System.out.println(i + 1);
        }
    }

    static void count(int end) {
        for (int i = 0; i < end; i++) {
            System.out.println(i + 1);
        }
    }

    static void count(int start, int end) {
        for (int i = start-1; i < end; i++) {
            System.out.println(i + 1);
        }
    }

    static void count(int start, int end, int pauseTime) {
        for (int i = start-1; i < end; i++) {
            System.out.println(i + 1);
            try {
                Thread.sleep(pauseTime * 1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
