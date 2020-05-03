package Activity07.Activity07_4;

import java.util.concurrent.ThreadLocalRandom;

public class Password {

    static int generate() {
        return (int)ThreadLocalRandom.current().nextLong(00000000, 99999999);
    }
}
