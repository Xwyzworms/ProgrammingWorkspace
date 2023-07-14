package InterfaceSegregationPrinciple.Implementations;

import InterfaceSegregationPrinciple.interfaces.OrderInterface;
import InterfaceSegregationPrinciple.interfaces.WalkInOrderInterface;

public class WalkInOrderImpl implements OrderInterface, WalkInOrderInterface {


    @Override
    public void placeOrder() {
        System.out.println("Placing Offline Order , burger 5");
    }

    @Override
    public void getWalkInOrderInfo() {
        System.out.println("Getting Information from the offline order");
    }
    
}
