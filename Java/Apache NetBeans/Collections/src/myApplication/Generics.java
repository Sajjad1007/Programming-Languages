package myApplication;

@SuppressWarnings("unchecked")
class MyArray <T> {
    
    protected T[] ara = (T[]) new Object[10];
    protected int length = 0;
    
    public void append(T v) {
        ara[length++] = v;
    }
    
    public int length() {
        return length;
    }
    
    public void display() {
        for(int i = 0; i < length; ++i){
            System.out.print(ara[i] + " ");
        }
        System.out.println("\n");
    }
    
}

//MyArray2 is not generic class
class MyArray2 extends MyArray <Integer> {}

class Generics {
    
    public static void main(String[] args) {
        MyArray2 A = new MyArray2();
        A.append(34);
        A.append(923);
        A.append(2032);
        A.display();
    }
    
}