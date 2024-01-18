package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame12 extends Frame implements ItemListener {
    
    Button b1, b2, b3;
    TextField t1, t2, t3;
    Panel p1, p2, mainP, cp;
    Checkbox c1, c2;
    CardLayout cl;
    
    public MyFrame12(){
        super("Card Layout Demo");
        
        CheckboxGroup cg = new CheckboxGroup();
        //instantiating checkbox objects and adding them to a checkboxgroup
        c1 = new Checkbox("One", true, cg);
        c2 = new Checkbox("Two", false, cg);
        c1.addItemListener(this);
        c2.addItemListener(this);
        
        b1 = new Button("One");
        b2 = new Button("Two");
        b3 = new Button("Three");
        
        t1 = new TextField(10);
        t2 = new TextField(10);
        t3 = new TextField(10);
        
        //instantiating panel object and adding checkboxes to this panel
        cp = new Panel();
        cp.add(c1);
        cp.add(c2);
        
        //instantiating panel object and adding buttons to this panel
        p1 = new Panel();
        p1.add(b1);
        p1.add(b2);
        p1.add(b3);
        
        //instantiating panel object and adding textfields to this panel
        p2 = new Panel();
        p2.add(t1);
        p2.add(t2);
        p2.add(t3);
        
        //instantiating main panel object and adding p1 and p2 panel to main panel
        mainP = new Panel();
        cl = new CardLayout(); //setting layout for main panel
        mainP.setLayout(cl);
        mainP.add(p1);
        mainP.add(p2);
        
        //adding main and checkbox panel to the frame
        add(cp, BorderLayout.NORTH);
        add(mainP, BorderLayout.CENTER);
    }
    
    @Override
    public void itemStateChanged(ItemEvent e){
        if(c1.getState()){
            cl.first(mainP); //displaying first panel of main panel
        }
        else{
            cl.last(mainP); //displaying second panel of main panel
        }
    }
    
}

public class CardLayoutDemo {

    public static void main(String[] args){
        MyFrame12 f = new MyFrame12();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
