public class encapsulation {

 private  String name;
private int age;
private int id;    
private int clas;

public void setName(String name){
    this.name = name;
}
public void setAge(int age){
    this.age = age;
}
public String getName(){
    return name;
}
public int getAge(){
    return age;
}


public static void main(String[] args) {
    encapsulation A = new encapsulation();
    A.setName("anirudh");
    A.setAge(20);
System.out.println(A.getName());

System.out.println(A.getAge());



}
}