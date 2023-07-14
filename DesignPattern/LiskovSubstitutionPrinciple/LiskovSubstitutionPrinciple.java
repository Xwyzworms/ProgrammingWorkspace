package LiskovSubstitutionPrinciple;

public class LiskovSubstitutionPrinciple {
    
    public static void main(String args[]) 
    {
        Shape rect = new Rectangle();
        Shape square = new Square();

        System.out.println("Area : " + rect.calculateArea());
        System.out.println("Area : " + square.calculateArea());
    }
}
