public class first {
    public int age;
    public int cls;
    public int nos;
    private String name;

    public first(int a  , int c , int n , String na){
        age = a;
        cls = c;
        nos = n;
        name = na;

    }
public void display(){
        System.out.println(" name is  :"  +name);
        System.out.println(" age is  :"  +age);
  System.out.println(" cls is  :"  +cls);
  System.out.println(" nos is  :"  +nos);

}
    public static void main(String[] args) {
        first obj = new first(12 , 5 ,5 ,  "anirudh");
    
        //    System.out.println("name is :" + obj.name);
        //    System.out.println(obj.age);
        //    System.out.println(obj.nos);

//    System.out.println(obj.cls);


          obj.display();
    }
}