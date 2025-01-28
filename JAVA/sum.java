import java.util.Scanner;
public class sum {
    public static void main(String[] args) {
        System.out.println("Jayant Chauhan C3 06114802723");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt(); 
        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt(); 
        int sum = num1 + num2; 
        System.out.println("The sum of " + num1 + " and " + num2 + " is: " + sum);
        scanner.close(); 
    }
}
