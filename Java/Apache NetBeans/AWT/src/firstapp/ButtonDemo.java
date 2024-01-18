package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame2 extends Frame implements ActionListener {
    
    int count = 0;
    Label l;
    Button b;
    
    public MyFrame2(){
        super("Button Demo");
        
        l = new Label("   " + count);
        b = new Button("Click");
        b.addActionListener(this);
        
        setLayout(new FlowLayout());
        add(b);
        add(l);
    }
    
    @Override
    public void actionPerformed(ActionEvent e){
        count++;
        l.setText("   " + count);
    }
    
}

public class ButtonDemo {
    
    public static void main(String[] args){
        MyFrame2 f = new MyFrame2();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
