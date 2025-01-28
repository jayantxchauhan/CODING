import java.util.Scanner;
public class swapping {
    public static void main(String[] args) {
        System.out.println("Jayant Chauhan C3 06114802723");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt(); 
        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt(); 
        System.out.println("Before swapping: num1 = " + num1 + ", num2 = " + num2);
        num1 = num1 ^ num2; 
        num2 = num1 ^ num2; 
        num1 = num1 ^ num2; 
        System.out.println("After swapping: num1 = " + num1 + ", num2 = " + num2);
        scanner.close(); 
    }
}
