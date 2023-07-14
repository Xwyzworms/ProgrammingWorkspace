package DependencyInjection.Implementations;

import DependencyInjection.abstraction.EmailServiceInjectionProvider;

public class EmailServicesFactory {
    public static class EmailProviderFactory 
    {
        public static EmailServiceInjectionProvider provideInjection(String type) 
        {
            if(type == "gmail") 
            {
                return new GmailInjectionProvider();
            }
            return new OutlookInjectionProvider();
        }
    }   
}
