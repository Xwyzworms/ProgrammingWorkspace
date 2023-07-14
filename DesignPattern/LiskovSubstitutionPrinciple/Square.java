package LiskovSubstitutionPrinciple;

public class Square extends Shape{
    float side;

    public Square() 
    {
        side = 5;
    }
    @Override
    public float calculateArea() 
    {
        return (side*side);
    }
}
