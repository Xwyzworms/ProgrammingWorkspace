package DependencyInjection.abstraction;

import DependencyInjection.Client;

public interface EmailServiceInjectionProvider {

    public void inject(Client c);
}
