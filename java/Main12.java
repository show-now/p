class Animal{
	void sound(){
		System.out.println("Animal makes sound");
	}
}

class Dog extends Animal{
	void sound(){
		System.out.println("Dog barks");
	}
}

class Cat extends Animal{
	void sound(){
		System.out.println("Cat meow");
	}
}

class Main12{
	public static void main(String args[]){
		Animal a;
		a = new Dog();
		a.sound();
		a = new Cat();
		a.sound();
	}
}
