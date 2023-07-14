package SingleResponsibilityPrinciple;

public class FinanceStupidSalary {
    
    public float calculateSalary(Employee employee) 
    {
        return employee.workingDaysInHours * 2 + employee.outsideWorkingHours * 4;
    
    }
}
