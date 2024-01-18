package firstapp;

import java.awt.*;
import java.awt.event.*;

/**(1)
class MyWindowAdapter extends WindowAdapter {
            
    @Override
    public void windowClosing(WindowEvent e){
        l.setText("Window Closing");
        System.exit(0);
    }
            
}**/

class MyFrame16 extends Frame {
    
    public MyFrame16(){
        super("Adapter Class Demo");
        //(1) or (2) addWindowListener(new MyWindowAdapter());
        addWindowListener(new WindowAdapter(){
            @Override
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
        //WindowAdapter is an abstract class whose methods are not abstract
    }
        
    /**(2)
    class MyWindowAdapter extends WindowAdapter {
            
        @Override
        public void windowClosing(WindowEvent e){
            System.exit(0);
        }
            
     }**/
    
}

public class AdapterDemo {

    public static void main(String[] args){
        MyFrame16 f = new MyFrame16();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
