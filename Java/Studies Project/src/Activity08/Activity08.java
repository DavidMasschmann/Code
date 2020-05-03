package Activity08;

public class Activity08 {
    public static void main(String[] args) {
        Scan r = new Scan();

        System.out.println(r.nextInt());
        System.out.println(r.nextInt("Type a INT:"));

        System.out.println(r.nextDouble());
        System.out.println(r.nextDouble("Type a DOUBLE:"));

        System.out.println(r.nextChar());
        System.out.println(r.nextChar("Type character:"));

        System.out.println(r.nextString());
        System.out.println(r.nextString("Type anything:"));

        System.out.println(Scan.emailIsValid("david.masschmann@hotmail.com"));
        System.out.println(Scan.emailIsValid("david.masschmann@ho"));

        System.out.println(Scan.phoneIsValid("051-982335523"));
        System.out.println(Scan.phoneIsValid("051-9823355233"));
        System.out.println(Scan.phoneIsValid("051982335523"));

        System.out.println(Scan.dateIsValid("23/05/2000"));
        System.out.println(Scan.dateIsValid("23/052000"));

        System.out.println(Scan.dateConvertMMDDYYYY("23/05/2000"));

        System.out.println(Scan.isNumeric("876324324,3233"));
        System.out.println(Scan.isNumeric("876324324,3233d"));
    }
}
