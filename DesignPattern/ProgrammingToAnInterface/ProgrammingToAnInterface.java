package ProgrammingToAnInterface;

public class ProgrammingToAnInterface {

    public static void main(String[] args) 
    {
        Computer cm = new Computer();
        DisplayModule monitor = new Monitor();
        DisplayModule projector = new Projector();

        cm.setDisplay(monitor);
        cm.display();
        
        cm.setDisplay(projector);
        cm.display();
    }
}