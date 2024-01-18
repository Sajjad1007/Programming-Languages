package firstapp;

import java.awt.*;

class MyFrame10 extends Frame {
    
    Button b1, b2, b3, b4, b5, b6;
    
    public MyFrame10(){
        super("Border Layout Demo");
        b1 = new Button("One");
        b2 = new Button("Two");
        b3 = new Button("Three");
        b4 = new Button("Four");
        b5 = new Button("Five");
        b6 = new Button("Six");
        
        /*By default, the layout of a frame is Border Layout
          So we don't have to set Border Layout separately*/
        add(b1, BorderLayout.NORTH);
        //add(b2, BorderLayout.EAST);
        add(b3, BorderLayout.SOUTH);
        add(b4, BorderLayout.WEST);
        add(b5, BorderLayout.CENTER);
        //add(b6);
        
        Panel p = new Panel();
        p.setLayout(new GridLayout(3, 1));
        p.add(new Button("Mon"));
        p.add(new Button("Tue"));
        p.add(new Button("Wed"));
        add(p, BorderLayout.EAST);
    }
    
}

public class BorderLayoutDemo {

    public static void main(String[] args){
        MyFrame10 f = new MyFrame10();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
