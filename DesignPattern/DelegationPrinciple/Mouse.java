package DelegationPrinciple;

public class Mouse {
    
    public void setMouseHandler(MouseHandler handler) 
    {
        this.handler = handler;
    }

    private MouseHandler handler = new MouseHandler();

    public void click() 
    {
        handler.click();
    }

    public void scroll() 
    {
        handler.scroll();
    }
}
