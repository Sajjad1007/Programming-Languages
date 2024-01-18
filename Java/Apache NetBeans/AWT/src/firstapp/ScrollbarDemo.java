package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame8 extends Frame implements AdjustmentListener {
    
    Scrollbar red, green, blue;
    TextField tf;
    
    public MyFrame8(){
        super("Scroll Bar Demo");
        //Scrollbar(int orientation, int currentValue, int thickness, int minimum, int maximum);
        red = new Scrollbar(Scrollbar.HORIZONTAL, 0, 10, 0, 255);
        green = new Scrollbar(Scrollbar.HORIZONTAL, 0, 10, 0, 255);
        blue = new Scrollbar(Scrollbar.HORIZONTAL, 0, 10, 0, 255);
        tf = new TextField(20);
                
        //setBounds(int x, int y, int width, int height)
        tf.setBounds(50, 50, 300, 50);
        red.setBounds(50, 150, 300, 30);
        green.setBounds(50, 200, 300, 30);
        blue.setBounds(50, 250, 300, 30);
        
        red.addAdjustmentListener(this);
        green.addAdjustmentListener(this);
        blue.addAdjustmentListener(this);
        
        setLayout(null);
        add(tf);
        add(red);
        add(green);
        add(blue);
    }
    
    @Override
    public void adjustmentValueChanged(AdjustmentEvent e){
        tf.setBackground(new Color(red.getValue(), green.getValue(), blue.getValue()));
    }
    
}

public class ScrollbarDemo {

    public static void main(String[] args){
        MyFrame8 f = new MyFrame8();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
