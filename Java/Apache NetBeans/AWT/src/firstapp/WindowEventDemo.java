package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame15 extends Frame implements WindowListener {
    
    Label l;
    
    public MyFrame15(){
        super("Window Event Demo");
        l = new Label("");
        l.setBounds(10, 50, 50, 20);
        
        addWindowListener(this);
        setLayout(new FlowLayout());
        add(l);
    }

    @Override
    public void windowOpened(WindowEvent e){
        l.setText("Window Opened"); //visible
    }

    @Override
    public void windowClosing(WindowEvent e){
        l.setText("Window Closing"); //visible
        System.exit(0);
    }

    @Override
    public void windowClosed(WindowEvent e){
        l.setText("Window Closed"); //not visible
    }

    @Override
    public void windowIconified(WindowEvent e){
        l.setText("Window Iconified"); //not visible
    }

    @Override
    public void windowDeiconified(WindowEvent e){
        l.setText("Window Deiconified"); //not visible
    }

    @Override
    public void windowActivated(WindowEvent e){
        l.setText("Window Activated"); //visible
    }

    @Override
    public void windowDeactivated(WindowEvent e){
        l.setText("Window Deactivated"); //visible
    }
    
}

public class WindowEventDemo {

    public static void main(String[] args){
        MyFrame15 f = new MyFrame15();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
