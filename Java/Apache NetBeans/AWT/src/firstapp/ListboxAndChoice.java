package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame7 extends Frame implements ItemListener, ActionListener {
    
    List l;
    Choice c;
    TextArea ta;
    
    public MyFrame7(){
        super("Listbox and Choice Demo");
        l = new List(4, true);
        c = new Choice();
        ta = new TextArea(20, 30);
        
        l.add("Friday");
        l.add("Saturday");
        l.add("Sunday");
        l.add("Monday");
        l.add("Tuesday");
        l.add("Wednesday");
        l.add("Thursday");
        
        c.add("January");
        c.add("February");
        c.add("March");
        c.add("April");
        c.add("May");
        c.add("June");
        c.add("July");
        c.add("August");
        c.add("September");
        c.add("October");
        c.add("November");
        c.add("December");
        
        l.addItemListener(this);
        c.addItemListener(this);
        l.addActionListener(this);
        
        setLayout(new FlowLayout());
        add(l);
        add(c);
        add(ta);
    }
    
    @Override
    public void itemStateChanged(ItemEvent e){
        if(e.getSource() == l){
            ta.setText(l.getSelectedItem());
        }
        else{
            ta.setText(c.getSelectedItem());
        }
    }
    
    @Override
    public void actionPerformed(ActionEvent e){
        String[] list = l.getSelectedItems();
        String txt = "";
        
        for(String x : list){
            txt += x + "\n";
        }
        
        ta.setText(txt);
    }
    
}

public class ListboxAndChoice {
    
    public static void main(String[] args){
        MyFrame7 f = new MyFrame7();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
