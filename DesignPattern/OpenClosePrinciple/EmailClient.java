package OpenClosePrinciple;

public class EmailClient {

    EmailAbstraction email;

    public void setEmailClient( EmailAbstraction email ) 
    {
        this.email = email;
    }

    public void sendEmail() 
    {
        email.send();
    }

    public void emailReceived() 
    {
        email.receive();
    }
}
