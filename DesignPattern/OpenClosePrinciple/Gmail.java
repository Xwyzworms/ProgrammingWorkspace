package OpenClosePrinciple;

public class Gmail extends EmailAbstraction {

    @Override
    public void send() 
    {
        System.out.println("Sending email With Gmail ");
    }

    @Override
    public void receive() 
    {
        System.out.println("Receiving email With Gmail ");
    }
    
}
