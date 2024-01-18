package swingApp;

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class MyFrame2 extends JFrame implements ActionListener {
    
    JCheckBox c1, c2;
    JRadioButton r1, r2;
    JTextField tf;
    
    public MyFrame2(){
        super("JCheckbox and JRadioButton Demo");
        tf = new JTextField("Demo Text", 20);
        tf.setBounds(10, 20, 100, 80);
        
        c1 = new JCheckBox("Bold");
        c1.setMnemonic(KeyEvent.VK_B);
        
        c2 = new JCheckBox("Italic");
        c2.setMnemonic(KeyEvent.VK_I);
        
        r1 = new JRadioButton("lower");
        r2 = new JRadioButton("UPPER");
        
        ButtonGroup bg = new ButtonGroup();
        bg.add(r1);
        bg.add(r2);
        
        c1.addActionListener(this);
        c2.addActionListener(this);
        r1.addActionListener(this);
        r2.addActionListener(this);
        
        r1.setActionCommand("lower");
        r2.setActionCommand("UPPER");
        
        setLayout(new FlowLayout());
        add(tf);
        add(c1);
        add(c2);
        add(r1);
        add(r2);
    }

    @Override
    public void actionPerformed(ActionEvent e){
        int b = 0, i = 0;
        if(c1.isSelected())
            b = Font.BOLD;
        if(c2.isSelected())
            i = Font.ITALIC;
        
        Font f = new Font("Times New Roman", b|i, 15);
        tf.setFont(f);
        
        switch(e.getActionCommand()){
            case "lower": tf.setText(tf.getText().toLowerCase());
                          break;
            case "UPPER": tf.setText(tf.getText().toUpperCase());
                          break;
        }
    }
    
}

public class JCheckBoxDemo {

    public static void main(String[] args) {
        MyFrame2 f = new MyFrame2();
        f.setSize(600, 400);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
