package DependencyInjection.Implementations;

import DependencyInjection.Client;
import DependencyInjection.abstraction.EmailService;
import DependencyInjection.abstraction.EmailServiceInjectionProvider;

public class OutlookInjectionProvider implements EmailServiceInjectionProvider{

    public EmailService outlook;
    public OutlookInjectionProvider() 
    {
        this.outlook =  new Outlook();
    }

    @Override
    public void inject(Client c) {
        
        c.setEmailService(outlook);
    }
    
}
