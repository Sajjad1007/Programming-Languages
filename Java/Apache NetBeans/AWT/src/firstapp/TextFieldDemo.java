package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame5 extends Frame {
    
    Label l1, l2;
    TextField tf;
    
    public MyFrame5(){
        super("Text Field Demo");
        l1 = new Label("No text is entered yet");
        tf = new TextField(20);
        l2 = new Label("Enter key is not yet hit");
        tf.setEchoChar('*');
        
        Handler h = new Handler();
        
        tf.addTextListener(h);
        tf.addActionListener(h);
        
        setLayout(new FlowLayout());
        add(l1);
        add(tf);
        add(l2);
    }
    
    class Handler implements TextListener, ActionListener {
        
        @Override
        public void textValueChanged(TextEvent e){
            l1.setText(tf.getText());
        }
    
        @Override
        public void actionPerformed(ActionEvent e){
            l2.setText(tf.getText());
        }
        
    }
    
}

public class TextFieldDemo {
    
    public static void main(String[] args){
        MyFrame5 f = new MyFrame5();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
