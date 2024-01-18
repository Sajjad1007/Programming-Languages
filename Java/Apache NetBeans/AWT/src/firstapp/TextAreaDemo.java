package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame6 extends Frame implements ActionListener {
    
    Label l;
    Button b;
    TextArea ta;
    TextField tf;
    
    public MyFrame6(){
        super("Text Area Demo");
        l = new Label("No text is entered yet");
        ta = new TextArea(10, 30);
        tf = new TextField(20);
        b = new Button("Click");
        
        b.addActionListener(this);
        
        setLayout(new FlowLayout());
        add(ta);
        add(l);
        add(tf);
        add(b);
    }
    
    @Override
    public void actionPerformed(ActionEvent e){
        //l.setText(ta.getSelectedText());
        //ta.append(tf.getText());
        ta.insert(tf.getText(), ta.getCaretPosition());
    }
    
}

public class TextAreaDemo {
    
    public static void main(String[] args){
        MyFrame6 f = new MyFrame6();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
