package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame18 extends Frame {
    
    Menu file, sub;
    MenuItem open, save, close, closeAll;
    CheckboxMenuItem auto;
    MenuBar mb;
    TextField tf;
    
    public MyFrame18(){
        super("Menu Demo");
        open = new MenuItem("Open");
        save = new MenuItem("Save");
        close = new MenuItem("Close");
        closeAll= new MenuItem("Close All");
        auto = new CheckboxMenuItem("Auto Save");
        file = new Menu("File");
        sub = new Menu("Close");
        mb = new MenuBar();
        tf = new TextField(20);
        
        setLayout(new FlowLayout());
        add(tf);
        //adding menu items to file
        file.add(open);
        file.add(save);
        file.add(sub);
        file.add(auto);
        //adding menu items to sub
        sub.add(close);
        sub.add(closeAll);
        //adding menu to menu bar
        mb.add(file);
        setMenuBar(mb);
        
        open.addActionListener((ActionEvent e)->tf.setText("Open"));
        save.addActionListener((ActionEvent e)->tf.setText("Save"));
        close.addActionListener((ActionEvent e)->tf.setText("Close"));
        closeAll.addActionListener((ActionEvent e)->tf.setText("Close All"));
        auto.addItemListener((ItemEvent e)->{
            if(auto.getState()) tf.setText("Auto Save ON");
            else tf.setText("Auto Save OFF");
        });
    }
    
}

public class MenuDemo {

    public static void main(String[] args){
        MyFrame18 f = new MyFrame18();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
