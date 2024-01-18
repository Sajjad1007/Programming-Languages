package swingApp;

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class MyFrame1 extends JFrame implements ActionListener {
    
    JLabel l;
    JButton b;
    int count =0;
    
    public MyFrame1(){
        super("JButton and JLabel Demo");
        l = new JLabel("Clicked " + count + " times");
        b = new JButton("Click");
        b.addActionListener(this);
        
        setLayout(new FlowLayout());
        add(l);
        add(b);
        //default button will respond to enter button of keyboard
        getRootPane().setDefaultButton(b);
        b.setIcon(new ImageIcon("D:\\Documents\\Me.jpg"));
        l.setToolTipText("Counter"); //showing suggestion by mouse pointer
    }

    @Override
    public void actionPerformed(ActionEvent e){
        ++count;
        l.setText("Clicked " + count + " times");
    }
    
}

public class JButtonDemo {

    public static void main(String[] args) {
        MyFrame1 f = new MyFrame1();
        f.setSize(600, 400);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
