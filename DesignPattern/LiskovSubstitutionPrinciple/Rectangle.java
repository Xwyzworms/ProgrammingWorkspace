package LiskovSubstitutionPrinciple;

public class Rectangle extends Shape {

    float width;
    float length;

    public Rectangle() 
    {
        width = 10;
        length = 5;
    }
    @Override
    public float calculateArea() 
    {
         return (width * length);
    }
    
}
