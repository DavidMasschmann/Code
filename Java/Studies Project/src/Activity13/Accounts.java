package Activity13;

import java.util.Scanner;

public class Accounts {
    private int accountId;
    private static int nextId = 0;
    private Clients holder;
    private String password;
    private double balance;
    private double limit;
    private int agency;

    private Scanner s = new Scanner(System.in);

    void createAccount() {
        Clients c = new Clients();
        c.register();
        this.holder = c;

        if (c.getAge() < 16) {
            System.out.println("You aren't old enough.");
        } else {
            System.out.println("Type your password: ");
            this.password = s.nextLine();
            System.out.println("Type your agency: ");
            this.agency = s.nextInt();
            this.accountId = nextId;
            nextId++;
        }
        if (c.getAge() > 60) {
            this.limit = 1000;
        } else if (c.getAge() < 18) {
            this.limit = 100;
        } else {
            this.limit = 300;
        }
    }

    void deposit() {
        double deposit;
        System.out.println("Type the amount you wanna deposit: ");
        deposit = s.nextDouble();

        if (deposit <= 0) {
            System.out.println("Invalid deposit.");
        } else {
            this.balance = deposit;
            System.out.println("Successful deposit!");
        }
    }

    void withdraw() {
        System.out.println("------- withdraw");
        String password;
        do {
            //In a real world example the person attempting should not have unlimited tries.
            System.out.println("Type your password: ");
            password = s.next();

            if (!this.password.equals(password)) {
                System.out.println("Wrong password! Try again.");
            }
        } while (!this.password.equals(password));

        double withdraw;
        System.out.println("What is the value of the withdrawal? ");
        withdraw = s.nextDouble();
        if (withdraw > (this.balance + this.limit)) {
            System.out.println("You do not have enough money/limit for this withdrawal.");
        } else {
            this.balance = this.balance - withdraw;
            System.out.println("Withdrawal successfully!");
        }
    }

    void transfer(Accounts receiver) {
        //Should ask for the account password just like the withdraw method, removed here for practicality
        System.out.println("Your currently balance is: " + this.balance);
        System.out.println("Type the amount you wanna transfer: ");
        int valor = s.nextInt();
        if (valor <= this.balance) {
            this.balance = this.balance - valor;
            receiver.balance = receiver.balance + valor;
        } else {
            System.out.println("Transfer cannot be performed because" +
                    " you don't have enough balance");
        }
    }

    void statement() {
        System.out.println("Number of the account: " + this.accountId);
        System.out.println("Name: " + holder.getName());
        System.out.println("Age: " + holder.getAge());
        System.out.println("CPF: " + holder.getCpf());
        System.out.println("Balance: " + this.balance);
        System.out.println("Limit: " + this.limit);
        System.out.println("Balance + Limit: " + (this.balance + this.limit));
        System.out.println("Agency: " + this.agency);
    }
}
