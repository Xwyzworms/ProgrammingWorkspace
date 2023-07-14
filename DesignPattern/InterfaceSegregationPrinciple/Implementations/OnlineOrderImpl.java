package InterfaceSegregationPrinciple.Implementations;

import InterfaceSegregationPrinciple.interfaces.OnlineOrderInterface;
import InterfaceSegregationPrinciple.interfaces.OrderInterface;

public class OnlineOrderImpl implements OnlineOrderInterface, OrderInterface {

    @Override
    public void placeOrder() {
        System.out.println("Placing online order");
    }

    @Override
    public void getOnlineOrderInfo() {
        System.out.println("Get Online order information");
    }
    
}
