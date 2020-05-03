package Activity14;

import java.util.Scanner;

public class Cliente {
    public String nome;
    String CPF;
    public int idade;
    String data;
    double limiteCliente;
    Scanner ler = new Scanner(System.in);

    public void ler() {
        int testeIdade = 0;
        do {
            nome = Teclado.lerString("Digite seu nome: ");
            idade = Teclado.lerInt("Digite sua idade: ");
            if (idade < 16) {
                do {
                    testeIdade = Teclado.lerInt("É preciso ser maior de 16 anos para criar uma conta." +
                            "\n[1] Inserir idade novamente \n[2] Encerrar");

                    if (testeIdade == 2) {
                        System.exit(testeIdade);
                    }
                    if (testeIdade < 0 || testeIdade > 2) {
                        System.out.println("Digite novamente.");
                    }
                } while (testeIdade < 0 || testeIdade > 2);
            }
        } while (idade < 16 && testeIdade == 1);
        System.out.println("Digite sua data de nascimento: ");
        Data novaData = new Data();
        data = novaData.ler();
        do {
            CPF = Teclado.lerString("Digite seu CPF: ");
        }while (!verificar(CPF));
    }

    public boolean verificar(String CPF){
        if(Main.contas.size()==0){
            return true;
        }
        for (int i=0;i<Main.contas.size();i++){
            if(Main.contas.get(i).cliente.CPF.equals(CPF)){
                return false;
            }
        }
        return true;
    }

    public String Mostrar () {
        return
                "Nome: " + nome + '\'' +
                        ", idade:" + idade +
                        ", " + data + '\'' + ", limite:" + limiteCliente;
    }
}
