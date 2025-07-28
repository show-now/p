public class Main3{
	public static void main(String args[]){
		String str1 = "Hello";
		String str2 = "World";

		System.out.println("Length of str1: " + str1.length());
		String concat = str1 +  " " + str2;
		System.out.println("Concantenation: " + concat);

		String substr = str1.substring(1, 5);
		System.out.println("Substring: " + substr);
	}
}
