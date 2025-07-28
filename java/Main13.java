public class Main13{
	public static void main(String args[]){
		int size = -5;
		try{
			int[] arr = new int[size];
		} catch(NegativeArraySizeException  e){
			System.out.println("Array size is in negative");
		}
	}
}
