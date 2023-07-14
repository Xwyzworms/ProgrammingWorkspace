package OpenClosePrinciple;

public class Outlook extends EmailAbstraction{

    @Override
    public void send() 
    {
        System.out.println("Sending Email using Outlook");
    }

    @Override
    public void receive() 
    {
        System.out.println("Receiving email With Outlook ");
    }
}
