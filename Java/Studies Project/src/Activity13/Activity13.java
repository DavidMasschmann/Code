package Activity13;

public class Activity13 {
    /*

    */
    public static void main(String[] args) {
        Accounts a1 = new Accounts();
        Accounts a2 = new Accounts();

        a1.createAccount();

        a1.deposit();
        a1.withdraw();
        a1.transfer(a2);
        a1.statement();
    }
}
