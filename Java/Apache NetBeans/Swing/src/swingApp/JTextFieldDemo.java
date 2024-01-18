package swingApp;

import java.awt.*;
import java.text.*; //for format classes of textfield
import java.util.*;
import javax.swing.*;
import javax.swing.text.*; //for formatter classes

class MyFrame2 extends JFrame {
    
    public MyFrame2(){
        super("JTextField and JTextArea Demo");
        JTextField tf1 = new JTextField(15);
        DateFormat df = new SimpleDateFormat("dd/MM/yyyy");
        JFormattedTextField tf2 = new JFormattedTextField(df);
        tf2.setColumns(10);
        tf2.setValue(new Date());
        
        NumberFormat nf = NumberFormat.getInstance();
        NumberFormatter nft = new NumberFormatter(nf);
        nft.setAllowsInvalid(false); //restricting invalid letters from keyboard
        nft.setMaximum(10000);
        JFormattedTextField tf3 = new JFormattedTextField(nft);
        tf3.setColumns(15);
        
        JTextArea ta = new JTextArea(10, 15);
        ta.setText("");
        
        setLayout(new FlowLayout());
        add(tf1);
        add(tf2);
        add(tf3);
        add(ta);
    }
    
}

public class JTextFieldDemo {
    
    public static void main(String[] args) {
        MyFrame2 f = new MyFrame2();
        f.setSize(600, 400);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
