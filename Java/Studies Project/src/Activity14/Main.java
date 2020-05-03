package Activity14;

import java.util.ArrayList;

public class Main {
    public static ArrayList<Conta> contas;

    public static void main(String[] args) {
        int i = 0, nConta = 0, j = 0;
        int op;
        boolean teste = true;
        contas = new ArrayList<Conta>();

        do {
            op = Teclado.lerInt("[1] Adicionar conta \n[2] Listar contas \n[3] Sacar \n[4] Depositar \n[5] Transferir" +
                    "\n[6] Ver saldo \n[7] Ver extrato");
            switch (op) {
                case 1: {
                    Cliente cliente = new Cliente();
                    cliente.ler();
                    Conta conta = new Conta(Teclado.lerString("Digite sua senha: "), cliente);
                    contas.add(conta);
                    break;
                }

                case 2: {
                    Conta.mostrar();
                    break;
                }

                case 3: {
                    int contaSaque = Teclado.lerInt("Digite a conta: ");
                    double valor = Teclado.lerDouble("Digite o valor: ");
                    String senha = Teclado.lerString("Digite sua senha: ");
                    Conta c = Conta.get(contaSaque);
                    if (c != null) {
                        if (c.login(senha)) {
                            if (c.sacar(valor)) {
                                System.out.println("Saque efetuado com sucesso!");
                            } else {
                                System.out.println("Saldo insuficiente.");
                            }
                        }
                    } else {
                        System.out.println("Conta inexistente.");
                    }
                    break;
                }

                case 4: {
                    int contaDeposito = Teclado.lerInt("Digite a conta: ");
                    double valor = Teclado.lerDouble("Digite o valor: ");
                    Conta c = Conta.get(contaDeposito);
                    if (c != null) {
                        if (c.depositar(valor)) {
                            System.out.println("Deposito efetuado com sucesso!");
                        }
                    } else {
                        System.out.println("Conta inexistente.");
                    }
                    break;
                }

                case 5:{
                    int contaSaque = Teclado.lerInt("Digite a conta de origem: ");
                    double valor = Teclado.lerDouble("Digite o valor: ");
                    String senha = Teclado.lerString("Digite sua senha: ");
                    Conta contaOrigem = Conta.get(contaSaque);
                    int contaDeposito = Teclado.lerInt("Digite a conta que receberá: ");
                    Conta contaDestino = Conta.get(contaDeposito);
                    if(contaDestino != null && contaOrigem!=null){
                        if( contaOrigem.transferencia(contaDestino,valor)){
                            System.out.println("Transferência realizada com sucesso!");
                        }else {
                            System.out.println("Erro ao realizar transferência.");
                        }
                    }
                }

                case 6: {
                    Conta.verSaldo(contas);
                    break;
                }

                case 7: {
                    Conta.verExtrato(contas);
                    break;
                }
            }
        } while (j != 59);
    }
}
