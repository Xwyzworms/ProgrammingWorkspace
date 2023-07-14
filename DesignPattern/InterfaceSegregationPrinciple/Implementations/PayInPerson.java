package InterfaceSegregationPrinciple.Implementations;
import InterfaceSegregationPrinciple.interfaces.*;

public class PayInPerson implements  OfflinePaymentInterface {
    @Override
    public void getOfflineOrderInfo() {
        System.out.println("Offline order information");
    }

}
