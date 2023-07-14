package InterfaceSegregationPrinciple;

import InterfaceSegregationPrinciple.Implementations.BCAPayment;
import InterfaceSegregationPrinciple.Implementations.OnlineOrderImpl;
import InterfaceSegregationPrinciple.Implementations.PayInPerson;
import InterfaceSegregationPrinciple.Implementations.WalkInOrderImpl;
import InterfaceSegregationPrinciple.interfaces.OfflinePaymentInterface;
import InterfaceSegregationPrinciple.interfaces.OnlinePaymentInterface;
import InterfaceSegregationPrinciple.interfaces.OrderInterface;

public class InterfaceSegreagationPrinciple {
    
    public static void main(String args[]) 
    {
        OrderInterface placingOfflineOrder = new WalkInOrderImpl();        
        
        OrderInterface placingOnlineOrder = new OnlineOrderImpl();
 
        OnlinePaymentInterface onlinePayment = new BCAPayment();
        
        OfflinePaymentInterface offlinePayment = new PayInPerson();

        Client bro = new Client();
        bro.setOrder(placingOnlineOrder);
        bro.setOnlinePayment(onlinePayment);

        bro.setOrder(placingOfflineOrder);
        bro.setOfflinePayment(offlinePayment);
        
        bro.onlineOrder.getOnlineOrderInfo();
        bro.onlinePayment.paymentInfo();
    }
}  
