package SingleResponsibilityPrinciple;

public class SingleResponsibilityPrinciple {
    public static void main(String[] args ) 
    {
        Employee emp = new Employee();
        FinanceStupidSalary finance = new FinanceStupidSalary();
        HREmployeePromotion hr = new HREmployeePromotion();
        System.out.println(finance.calculateSalary(emp));
        hr.isEligibleForPromotion(emp);
    }
}
