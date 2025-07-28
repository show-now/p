import java.util.Scanner;

public class Main4{
	public static void main(String args[]){

		Scanner sc = new Scanner(System.in);
		int num1, num2, num3;

		System.out.println("Enter the value of n1: ");
		num1 = sc.nextInt();
		System.out.println("Enter the value of n2: ");
		num2 = sc.nextInt();
		System.out.println("Enter the value of s3: ");
		num3 = sc.nextInt();

		if(num1 > num2 && num1 > num3){
			System.out.println("The largest number is: " + num1);
		} else if(num2 > num1 && num2 > num3){
			System.out.println("The largest number is: " + num2);
		} else{
			System.out.println("The largest number is: " + num3);
		}
	}
}
