public class Main14{
	public static void main(String args[]){
		String name = null;
		try{
			System.out.println("Name length: " + name.length());
		} catch(NullPointerException e){
			System.out.println("The variable have no values and pointing to null");
		} finally{
			System.out.println("Final block is executed");
		}
	}
}
