package firstapp;

import java.awt.*;

class MyFrame1 extends Frame {
    
    Label l;
    TextField tf;
    Button b;
    
    public MyFrame1(){
        super("My App Demo");
        l = new Label("Name");
        tf = new TextField(20);
        b = new Button("OK");
        
        setLayout(new FlowLayout());        
        //adding components to frame
        add(l);
        add(tf);
        add(b);
    }
    
}

public class MyApp {

    public static void main(String[] args){
        MyFrame1 f = new MyFrame1();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
