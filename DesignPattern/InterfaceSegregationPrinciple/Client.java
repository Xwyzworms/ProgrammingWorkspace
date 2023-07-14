package InterfaceSegregationPrinciple;

import InterfaceSegregationPrinciple.interfaces.OfflinePaymentInterface;
import InterfaceSegregationPrinciple.interfaces.OnlineOrderInterface;
import InterfaceSegregationPrinciple.interfaces.OnlinePaymentInterface;
import InterfaceSegregationPrinciple.interfaces.OrderInterface;
import InterfaceSegregationPrinciple.interfaces.WalkInOrderInterface;

public class Client {
    
    OnlineOrderInterface onlineOrder;
    WalkInOrderInterface walkInOrder;

    OnlinePaymentInterface onlinePayment;
    OfflinePaymentInterface offlinePayment;

    public void setOrder(OrderInterface order) 
    {
        // Should be in another class !
        // This just for models / data structure
        if(order instanceof OnlineOrderInterface) 
        {
            this.onlineOrder = (OnlineOrderInterface) order;
        }
        else if (order instanceof WalkInOrderInterface) 
        {
            this.walkInOrder = (WalkInOrderInterface) order;
        }
    }

    public void setOnlinePayment(OnlinePaymentInterface onlinePayment) 
    {
        this.onlinePayment = onlinePayment;
    }

    public void setOfflinePayment(OfflinePaymentInterface offlinePayment) 
    {
        this.offlinePayment = offlinePayment;
    }
}
