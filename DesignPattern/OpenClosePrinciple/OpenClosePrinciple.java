package OpenClosePrinciple;

public class OpenClosePrinciple {
    
    public static void main(String args[]) 
    {
        EmailAbstraction outlook = new Outlook();
        EmailAbstraction gmail = new Gmail () ;

        EmailClient ec = new EmailClient();
        ec.setEmailClient(outlook);

        ec.sendEmail();
        
        ec.setEmailClient(gmail);

        ec.sendEmail();

    }


}
