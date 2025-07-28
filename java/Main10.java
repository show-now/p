public class Main{
	public static void main(String args[]){
		int a = 10;
		int b = 0;
		int res;

		try{
			res = a/b;
			System.out.println(res);
		} catch(ArithmeticException e){
			System.out.println("Exception caught: Zero division error");
		}
	}
}
