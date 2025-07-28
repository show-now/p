import java.util.Scanner;

public class Main{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);

		int start, end;
		System.out.print("Enter the start: ");
		start = sc.nextInt();
		System.out.print("Enter the end: ");
		end = sc.nextInt();

		System.out.print("Prime Numbers berween " + start + " and " + end + "  are: ");
		for(int i = start; i <= end; i++){
			int prime = 0;
			for(int j = 2; j <= Math.sqrt(i); j++){
				if (i % j == 0){
					prime = 1;
					break;
				}
			}

			if(prime != 1) System.out.print(i + " ");
		}
		System.out.println("\n");

	}
}
