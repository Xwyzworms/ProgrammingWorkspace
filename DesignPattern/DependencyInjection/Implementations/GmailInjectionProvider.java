package DependencyInjection.Implementations;

import DependencyInjection.Client;
import DependencyInjection.abstraction.EmailService;
import DependencyInjection.abstraction.EmailServiceInjectionProvider;

public class GmailInjectionProvider implements EmailServiceInjectionProvider{

    EmailService gmail;

    public GmailInjectionProvider(){
        this.gmail = new Gmail();
    }


    @Override
    public void inject(Client c) {
        c.setEmailService(gmail);
    }
    
}
