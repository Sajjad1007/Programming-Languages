package firstapp;

import java.awt.*;
import java.util.*;
import java.awt.event.*;

class MyFrame13 extends Frame implements KeyListener {
    
    Label l1, l2, l3;
    
    public MyFrame13(){
        super("Key Event Demo");
        l1 = new Label(""); //label for key pressed and released 
        l2 = new Label(""); //label for key typed
        l3 = new Label(""); //label for date and time
        
        addKeyListener(this);
        l1.setBounds(30, 40, 100, 20);
        l2.setBounds(30, 70, 100, 20);
        l3.setBounds(30, 100, 200, 20);
        
        setLayout(null);
        add(l1);
        add(l2);
        add(l3);
    }

    @Override
    public void keyPressed(KeyEvent e){
        l1.setText("Key Pressed");
    }

    @Override
    public void keyReleased(KeyEvent e){
        l2.setText("Key Released");
        l1.setText("");
    }
    
    @Override
    public void keyTyped(KeyEvent e){
        l2.setText(("Key Typed"));
        l3.setText(new Date(e.getWhen()) + "");
    }
    
}

public class KeyEventDemo {

    public static void main(String[] args){
        MyFrame13 f = new MyFrame13();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
