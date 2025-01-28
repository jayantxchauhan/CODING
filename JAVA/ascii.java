import java.util.Scanner;
public class ascii {
    public static void main(String[] args) {
        System.out.println("Jayant Chauhan C3 06114802723");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char x = scanner.next().charAt(0); 
        int ascii = (int) x;
        System.out.println("The ASCII code of '" + x + "' is: " + ascii);
        scanner.close();
    }
}

