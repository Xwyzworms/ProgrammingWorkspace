package ProgrammingToAnInterface;

public class Computer {
    
    DisplayModule dm;

    public void setDisplay(DisplayModule dm) 
    {
        this.dm = dm;
    }

    public void display() 
    {
        dm.display();
    }

}
