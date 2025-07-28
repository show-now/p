public class Main2{
	static int static_var = 10;
	int instance_var = 20;

	public void display(){
		int local_var = 30;
		System.out.println("Static Variable: " + static_var);
		System.out.println("Instance Variable: " + instance_var);
		System.out.println("Local Variable: " + local_var);
	}

	public static void main(String args[]){
		Main2 obj1 = new Main2();
		obj1.display();
	}
}
