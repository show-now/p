public class Main11{
	static int add(int a, int b){
		return a + b;
	}

	static float add(float a, float b){
		return a + b;
	}

	public static void main(String args[]){
		System.out.println("Integer method: " + add(10, 32));
		System.out.println("Float method: " + add(33.3f, 65.3f));
	}
}
