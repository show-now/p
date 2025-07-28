import java.util.Scanner;

public class Main15{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the num: ");
		int num = sc.nextInt();
		int org_num = num;

		int digit, rev = 0;

		while(num > 0){
			digit = num%10;
			rev = rev * 10 + digit;
			num = num/10;
		}

		if(org_num == rev){
			System.out.println("Number is palindrome");
		} else {
			System.out.println("Number is not a palindrome");
		}
	}
}
