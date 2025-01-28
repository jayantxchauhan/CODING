import java.util.Scanner;
public class leapyear {
    public static void main(String[] args) {
        System.out.println("Jayant Chauhan C3 06114802723");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter year: ");
        int year = scanner.nextInt();
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            System.out.println(year + " is a leap year");
        } else {
            System.out.println(year + " is not a leap year");
        }
        scanner.close(); 
    }
}
