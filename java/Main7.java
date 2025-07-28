public class Main6{
	String name;
	int age;

	Main6(String name, int age){
		this.name = name;
		this.age = age;
	}

	void display(){
		System.out.println("Name: " + name + " Age: " + age);
	}

	public static void main(String args[]){
		Main6[] student = new Main6[3];

		student[0] = new Main6("Alice", 23);
		student[1] = new Main6("Bob", 13);
		student[2] = new Main6("James", 20);

		for(int i = 0; i < student.length; i++){
			student[i].display();
		}
	}
}
