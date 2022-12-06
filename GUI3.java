//responsive Frame- Event Delicate model/Event Driven architecture
//copy the methods from errors

import java.awt.*;
import java.awt.event.*;

class GUI3
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("Marvellous PPA41");
    }
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
    Frame fobj = new Frame(title);
    fobj.setSize(500,500);
    fobj.setVisible(true);

    fobj.addWindowListener(new MarvellousListener());

    }
}

class MarvellousListener implements WindowListener  //due to implementation of this class 
                                        //we understand that abstract methods should be implemented
{
   public void windowDeactivated(WindowEvent obj){}
   public void  windowActivated(WindowEvent obj){}
   public void windowDeiconified(WindowEvent obj){}
   public void windowIconified(WindowEvent obj){}
   public void windowClosed(WindowEvent obj){}
   public void windowClosing(WindowEvent obj)    //This method closes the window;it is call back window
   {
    System.exit(0);  //same meaning of return 0 but it is bad programming practice to write return 0
   } 
   public void windowOpened(WindowEvent obj){}
}