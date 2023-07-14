package DependencyInjection;

import DependencyInjection.Implementations.EmailServicesFactory;
import DependencyInjection.Implementations.Gmail;
import DependencyInjection.abstraction.EmailService;
import DependencyInjection.abstraction.EmailServiceInjectionProvider;

public class DependencyInvesionInjection {
    public static void main(String[] args) 
    {
        EmailServiceInjectionProvider emailServiceInjectionProvider = EmailServicesFactory.EmailProviderFactory.provideInjection("outlook"); // Should be static
        EmailService gmailService = new Gmail();

        Client client = new Client(gmailService);
        client.sendEmail();
        
        emailServiceInjectionProvider.inject(client);
        client.sendEmail();
    }
}
