package Activity13;

import Activity12.Activity12_2.Dates;

import java.util.Scanner;

public class Clients {
    private String name;
    private String cpf;
    /*
    A CPF is an individual taxpayer identification number given to people living in Brazil,
    both native Brazilians and resident aliens, who pay taxes.
    */
    private String birth;
    private int age;

    private Scanner s = new Scanner(System.in);

    private void setName(String name) {
        this.name = name;
    }

    private void setAge(int age) {
        this.age = age;
    }

    private void setCpf(String cpf) {
        this.cpf = cpf;
    }

    int getAge() {
        return age;
    }

    String getName() {
        return name;
    }

    String getCpf() {
        return cpf;
    }

    void register() {
        System.out.println("Type your name: ");
        setName(s.nextLine());
        System.out.println("Type your age: ");
        setAge(s.nextInt());
        System.out.println("Type your CPF: ");
        setCpf(s.next());
        System.out.println("Type when you were born: ");
        this.birth = Dates.dataValidation();
    }
}
