interface a{
	public void method1();
}

interface b{
	public void method2();
}

public class Main9 implements a, b{
	public void method1(){
		System.out.println("Method 1");
	}

	public void method2(){
		System.out.println("Method 2");
	}

	public static void main(String args[]){
		Main9 obj = new Main9();
		obj.method1();
		obj.method2();
	}
}
