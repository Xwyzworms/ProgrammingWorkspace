package DependencyInjection.Implementations;

import DependencyInjection.abstraction.EmailService;

public class Outlook implements EmailService {

    @Override
    public void sendEmail() {
        System.out.println("Sending Email Using Outlook");
    }
    
}
