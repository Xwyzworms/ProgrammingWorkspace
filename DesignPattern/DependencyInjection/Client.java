package DependencyInjection;

import DependencyInjection.abstraction.EmailService;
import DependencyInjection.abstraction.EmailServiceSetter;

public class Client implements EmailServiceSetter {

    private EmailService emailService;

    public Client(EmailService emailService) 
    {
        this.emailService = emailService;
    }

    public void setterEmailService(EmailService emailService) 
    {
        this.emailService = emailService;
    }

    @Override
    public void setEmailService(EmailService emailService) {
        this.emailService = emailService;
    }

    public void sendEmail() 
    {
        this.emailService.sendEmail();
    }

}
