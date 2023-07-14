package InterfaceSegregationPrinciple.Implementations;

import InterfaceSegregationPrinciple.interfaces.*;

public class BCAPayment implements OnlinePaymentInterface {

    @Override
    public void doPayment() {
        System.out.println("Do payment ");
    }

    @Override
    public void paymentInfo() {
        System.out.println("Bca Payment");
        System.out.println("Taxes : 1000");
    }

    @Override
    public boolean isNewPromo() {
        return true;
    }

    
}
