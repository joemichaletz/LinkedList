import java.util.Scanner;

public class Driver
{
   public static void main(String[] args)
   {
       Scanner input = new Scanner(System.in);
       System.out.print("How many sides?");
       int sides = 6;
       try
       {
            sides = Integer.parseInt(input.nextLine());
       }
       catch(Exception e)
       {
           System.err.println("need int, gonna use 6");
       }
       Dice d = new Dice(sides);
       for(int i = 0; i < 10; i++)
       {
            System.out.println(d.roll());
       }
   }
}
