package firstapp;

import java.awt.*;
import java.awt.event.*;

class MyFrame19 extends Frame {
    
    int x = 9, y = 31; 
    
    public MyFrame19(){
        super("Painting Demo");
        addMouseListener(new MouseAdapter(){
            @Override
            public void mouseClicked(MouseEvent e){
                x = e.getX();
                y = e.getY();
                repaint();
            }
        });
        addMouseMotionListener(new MouseAdapter(){
            @Override
            public void mouseDragged(MouseEvent e){
                x = e.getX();
                y = e.getY();
                repaint();
            }
        });
    }
    
    @Override //Graphics is a class which is used for doing graphics on a frame
    public void paint(Graphics g){
        g.setColor(Color.RED);
        g.fillOval(x, y, 50, 50);
        //Font(String name, int style, int size)
        g.setFont(new Font("Times New Roman", Font.BOLD, 50));
        g.drawString("Hello", x + 50, y + 41);
    }
    
}

public class PaintingDemo {

    public static void main(String[] args){
        MyFrame19 f = new MyFrame19();
        
        f.setSize(1000, 600);
        f.setVisible(true);
    }
    
}

