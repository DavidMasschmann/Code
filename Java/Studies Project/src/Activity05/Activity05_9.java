package Activity05;

import java.util.Scanner;

public class Activity05_9 {
    /*
    Using a one-dimensional array of 10 String elements, make a class that simulates occupying
    a car park. Assume that the position of the array corresponds to the vacancy number and for each
    vacancy is stored the license plate of the parked vehicle. Your class must contain a repeating
    loop simulating a menu that controls the input and output of vehicles with the options:
    1-Input, 2-Output and 3-List Current Situation and 4-Terminate the program.
    If the user chooses 1, ask for the vacancy number and license plate;
    If you choose 2, ask for the vacancy number to be released and store the white value in the
    position corresponding to the array;
    If you choose 3, list the current situation by displaying all elements of the array on screen;
    when it is 4, end the loop and the program.
    */
    public static void main(String[] args) {
        String[] array = new String[10];
        String placa;
        int x = 0, op, i;
        Scanner ler = new Scanner(System.in);

        do {
            System.out.println("Selecione uma opção do menu a seguir:");
            System.out.println("1- Entrada\n2- Saída\n3- Listar situação atual\n4- Encerrar programa");
            op = ler.nextInt();

            do {
                if (op < 1 || op > 4) {
                    System.out.println("Opção inválida, tente novamente.");
                    op = ler.nextInt();
                }
            } while (op < 1 || op > 4);

            switch (op) {
                case 1:
                    System.out.println("Informe o numero da vaga: ");
                    i = ler.nextInt();
                    System.out.println("Informe a placa do veículo: ");
                    placa = ler.next();

                    array[i] = placa;
                    break;

                case 2:
                    System.out.println("Informe a vaga que deseja liberar: ");
                    i = ler.nextInt();
                    array[i] = "0";
                    break;

                case 3:
                    for (int j = 0; j < array.length; j++)
                        System.out.println(array[j]);
                    break;

                case 4:
                    x = 1;
                    break;
            }
        } while (x == 0);
    }
}