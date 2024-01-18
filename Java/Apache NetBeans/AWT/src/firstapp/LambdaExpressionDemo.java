package firstapp;

import java.awt.*;
import java.awt.event.*;

/*Different ways of event handling are
    1. Using Frame class as listener
    2. Using Inner class as listener
    3. Using anonymous class as listener
    4. Using lambda expression as listener
*/

class MyFrame17 extends Frame {
    
    int count = 0;
    TextField tf;
    Button b;
    
    public MyFrame17(){
        super("Lambda Expression Demo");
        tf = new TextField("0", 20);
        b = new Button("Click");
        
        setLayout(new FlowLayout());
        add(tf);
        add(b);
        
        //lambda expressions can be used only with those listeners which are having one abstract method
        b.addActionListener((ActionEvent e)->{
            ++count;
            tf.setText(String.valueOf(count));
        });
    }
    
}

public class LambdaExpressionDemo {

    public static void main(String[] args){
        MyFrame17 f = new MyFrame17();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
