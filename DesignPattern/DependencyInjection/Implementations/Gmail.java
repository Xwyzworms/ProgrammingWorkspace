package DependencyInjection.Implementations;

import DependencyInjection.abstraction.EmailService;

public class Gmail implements EmailService {

    @Override
    public void sendEmail() {
        System.out.println("Sending email Using Gmail");
    }
    


}
