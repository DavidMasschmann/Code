package Activity02;

import javax.swing.*;

public class Activity02_2 {
    /*
O Imposto sobre a transmissão de Bens Móveis (ITBI) é aplicado sobre o valor de um imóvel a ser negociado.
A base de cálculo do ITBI (o valor a ser considerado no cálculo) será o maior valor entre o valor de
transação (o valor negociado) e o valor venal de referência (fornecido pela Prefeitura).
Com base nisso, elabore uma classe que receba o valor da transação, o valor venal e o percentual de imposto.
Após isso, encontre o maior valor e aplique o percentual sobre ele.
 Ao final, apresente o valor do imposto a ser pago. Observação: o valor do imposto a ser pago é calculado
 por meio da fórmula: valor do imposto = maior valor * percentual / 100.
 Para entrada e saída de dados utilize a classe JOptionPane.
 */
    public static void main(String[] args) {
        double valorVenal;
        double valorNegociado;
        double imposto;
        double valorPago;
        String teclado;

        teclado = JOptionPane.showInputDialog("Digite o valor da transação");
        valorNegociado = Double.parseDouble(teclado);

        teclado = JOptionPane.showInputDialog("Digite o valor da venal");
        valorVenal = Double.parseDouble(teclado);

        teclado = JOptionPane.showInputDialog("Digite o valor do imposto");
        imposto = Double.parseDouble(teclado);

        if (valorNegociado > valorVenal) {
            valorPago = valorNegociado * imposto / 100;
        } else {
            valorPago = valorVenal * imposto / 100;
        }

        JOptionPane.showMessageDialog(null, "Valor a ser pago é: " + valorPago);

    }
}
