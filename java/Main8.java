public class Parent{
	void parent(){
		System.out.println("Parent Class");
	}
}

public class Child extends Parent{
	void child(){
		System.out.println("Child Class");
	}
}

public class Main8{
	public static void main(String args[]){
		Child obj = new Child();
		obj.parent();
		obj.child();
	}
}
