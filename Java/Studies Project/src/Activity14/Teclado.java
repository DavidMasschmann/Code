package Activity14;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

class Teclado {

    public static int lerInt () {
        Scanner ler = new Scanner(System.in);
        return lerInt("Digite um número: ");
    }

    public static int lerInt (String mensagem) {
        String n;
        boolean i = false;
        Scanner ler = new Scanner(System.in);
        do {
            System.out.println(mensagem);
            n=ler.next();
            i= isInt(n);
        }while(i==false);
        return Integer.valueOf(n);
    }

    public static boolean isInt (String v) {
        try {
            Integer.parseInt(v);
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public static Double lerDouble () {
        Scanner ler = new Scanner(System.in);
        return lerDouble("Digite um número: ");
    }

    public static Double lerDouble (String mensagem) {
        String n;
        boolean i = false;
        Scanner ler = new Scanner(System.in);
        do {
            System.out.println(mensagem);
            n=ler.next();
            i = isDouble(n);
        }while(i==false);
        return Double.valueOf(n);
    }

    public static boolean isDouble (String v) {
        try {
            Double.parseDouble(v);
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public static Float LerFloat() {
        Scanner ler = new Scanner(System.in);
        return LerFloat("Digite um numero");
    }

    public static Float LerFloat(String mensagem) {
        String n;
        boolean i = false;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println(mensagem);
            n=sc.next();
            i= isFloat(n);
        }while(i==false);
        return Float.valueOf(n);
    }

    public static boolean isFloat (String v) {
        try {
            Float.parseFloat(v);
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public static String lerString (){
        String mensagem= "Digite uma string: ";
        return lerString(mensagem);

    }

    public static String lerString (String mensagem){
        Scanner ler = new Scanner(System.in);
        String a;
        System.out.println(mensagem);
        a=ler.next();
        return a;
    }

    public static String lerEmail () {
        int validarEmail;
        System.out.println("Digite o email: ");
        Scanner ler = new Scanner(System.in);
        String email = ler.next();
        validarEmail=email.indexOf("@");
        if(validarEmail>0){
            return email;
        }else{
            System.out.println("E-mail inválido.");
            return  null;
        }
    }

    public static String validarTelefone () {
        System.out.println("Digite seu número: ");
        Scanner ler = new Scanner(System.in);
        String telefone = ler.next();
        String regex = "([0-9]{2})[0-9]{4}-[0-9]{4}";
        if((telefone == null) || (telefone.length()<13) || (telefone.matches(regex)))
            return null;
        else
            return telefone;
    }

    public static String validarData () {
        System.out.println("Digite a data: ");
        Scanner ler = new Scanner(System.in);
        String data = ler.next();
        String regex = "[0-9]{2}/[0-9]{2}/[0-9]{4}";
        if((data == null) || (data.length()<10) || (!data.matches(regex)))
            return null;
        else
            return data;
    }

    public  static String formatarData () throws ParseException {
        //Primeiro converte de String para Date
        System.out.println("Digite a data: ");
        Scanner ler = new Scanner(System.in);
        String data = ler.next();
        DateFormat formatUS = new SimpleDateFormat("yyyy-mm-dd");
        Date date = formatUS.parse(data);

        //Depois formata data
        DateFormat formatBR = new SimpleDateFormat("dd-mm-yyyy");
        String dateFormated = formatBR.format(date);
        return dateFormated;
    }

    public static boolean lerNumero (){
        boolean y = false;
        System.out.println("Digite os números: ");
        Scanner ler = new Scanner(System.in);
        String n = ler.next();
        for (int i=0;i<n.length();i++){
            if(Character.isDigit(n.charAt(i))){
                y = true;
            }
            else{
                System.out.println("Digite apenas números: ");
                y = false;
                break;
            }
        }
        return y;
    }
}
