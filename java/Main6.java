public class Main6{
	

	Main6(){
		System.out.println("No-arg Constructor");
	}

	Main6(String name){
		System.out.println("Parameterized Constuctor");
		System.out.println(name);
	}

	public static void main(String args[]){
		Main6 obj1 = new Main6();
		Main6 obj2 = new Main6("This is the value passed through argument");
	}
}
