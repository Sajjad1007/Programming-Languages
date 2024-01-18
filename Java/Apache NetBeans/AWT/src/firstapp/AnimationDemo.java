package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame20 extends Frame implements Runnable {
    
    int x = 475, y = 542;
    int tx = 1, ty = -1;
    
    public MyFrame20(){
        super("Animation Demo");
        Thread t = new Thread(this);
        addMouseListener(new MouseAdapter(){
            @Override
            public void mouseClicked(MouseEvent e){
                t.start();
            }
        });
    }
    
    @Override
    public void paint(Graphics g){
        g.setColor(Color.BLUE);
        g.fillOval(x, y, 50, 50);
    }

    @Override
    public void run(){
        while(true){
            x += tx;
            y += ty;
            if(x == 8 || x == 942) tx *= -1;
            if(y == 31 || y == 542) ty *= -1;
            repaint();
            
            try{
                Thread.sleep(4);
            }
            catch(Exception e){}
        }
    }
    
}

public class AnimationDemo {

    public static void main(String[] args){
        MyFrame20 f = new MyFrame20();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}
