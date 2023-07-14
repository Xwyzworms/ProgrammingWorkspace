package SingleResponsibilityPrinciple;

public class HREmployeePromotion {
    
    public void isEligibleForPromotion(Employee emp) 
    {
        if(emp.workingDaysInHours >= 80) 
        {
            System.out.println("Eligible to Promotion");
        }
        else 
        {
            System.out.println("Not Eligible to Promotion");
        }      
    }
}
