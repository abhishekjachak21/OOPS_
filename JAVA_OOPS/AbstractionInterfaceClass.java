interface AbstractionInterface {
    void get1();

    void get2();

    default void getData(){
        System.out.println("Hi,default data bro");
    }

    static void getStaticData(){
        System.out.println("Static data, bro");
    }
}
public class AbstractionInterfaceClass implements AbstractionInterface {
    public void get1() {
        System.out.println("Implementation of get1");
    }

    public void get2() {
        System.out.println("Implementation of get2");
    }

    public static void main(String[] args) {
        AbstractionInterfaceClass obj = new AbstractionInterfaceClass();
        obj.get1();  // Calls get1
        obj.get2();  // Calls get2
        obj.getData();  // Calls the default method

        AbstractionInterface.getStaticData();  // Calls the static method
    }
}
